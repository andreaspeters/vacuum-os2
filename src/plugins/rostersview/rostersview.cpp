#include "rostersview.h"

#include <QCursor>
#include <QToolTip>
#include <QPainter>
#include <QDropEvent>
#include <QHelpEvent>
#include <QClipboard>
#include <QHeaderView>
#include <QResizeEvent>
#include <QApplication>
#include <QTextDocument>
#include <QDragMoveEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QContextMenuEvent>

#define BLINK_VISIBLE_TIME      750
#define BLINK_INVISIBLE_TIME    250

#define ADR_CLIPBOARD_DATA      Action::DR_Parametr1

RostersView::RostersView(QWidget *AParent) : QTreeView(AParent)
{
	FRostersModel = NULL;

	FPressedPos = QPoint();
	FPressedIndex = QModelIndex();
	FPressedLabel = AdvancedDelegateItem::NullId;

	header()->hide();
	header()->setStretchLastSection(false);

	setIndentation(4);
	setAutoScroll(true);
	setDragEnabled(true);
	setAcceptDrops(true);
	setRootIsDecorated(false);
	setDropIndicatorShown(true);
	setEditTriggers(NoEditTriggers);
	setSelectionMode(ExtendedSelection);
	setSelectionBehavior(SelectRows);
	setContextMenuPolicy(Qt::DefaultContextMenu);
	setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

	FAdvancedItemDelegate = new AdvancedItemDelegate(this);
	FAdvancedItemDelegate->setVertialSpacing(1);
	FAdvancedItemDelegate->setHorizontalSpacing(2);
	FAdvancedItemDelegate->setItemsRole(RDR_LABEL_ITEMS);
	FAdvancedItemDelegate->setDefaultBranchItemEnabled(true);
	FAdvancedItemDelegate->setBlinkMode(AdvancedItemDelegate::BlinkHide);
	connect(FAdvancedItemDelegate,SIGNAL(updateBlinkItems()),SLOT(onUpdateBlinkLabels()));
	setItemDelegate(FAdvancedItemDelegate);

	FDragExpandTimer.setSingleShot(true);
	FDragExpandTimer.setInterval(500);
	connect(&FDragExpandTimer,SIGNAL(timeout()),SLOT(onDragExpandTimer()));

	connect(this,SIGNAL(indexToolTips(IRosterIndex *, quint32, QMap<int,QString> &)),
		SLOT(onRosterIndexToolTips(IRosterIndex *, quint32, QMap<int,QString> &)));

	connect(Shortcuts::instance(),SIGNAL(shortcutActivated(const QString &, QWidget *)),
		SLOT(onShortcutActivated(const QString &, QWidget *)));
}

RostersView::~RostersView()
{
	emit tabPageDestroyed();
}

QIcon RostersView::tabPageIcon() const
{
	return IconStorage::staticStorage(RSR_STORAGE_MENUICONS)->getIcon(MNI_ROSTERVIEW_CONTACTS);
}

QString RostersView::tabPageCaption() const
{
	return tr("Contacts");
}

QString RostersView::tabPageToolTip() const
{
	return QString::null;
}

int RostersView::rosterDataOrder() const
{
	return RDHO_ROSTERSVIEW_NOTIFY;
}

QList<int> RostersView::rosterDataRoles() const
{
	static QList<int> dataRoles = QList<int>() << RDR_LABEL_ITEMS << RDR_ALLWAYS_VISIBLE << Qt::DecorationRole << Qt::BackgroundColorRole;
	return dataRoles;
}

QList<int> RostersView::rosterDataTypes() const
{
	static QList<int> dataTypes = QList<int>() << RIT_ANY_TYPE;
	return dataTypes;
}

QVariant RostersView::rosterData(const IRosterIndex *AIndex, int ARole) const
{
	QVariant data;
	IRosterIndex *index = const_cast<IRosterIndex *>(AIndex);
	if (ARole == RDR_LABEL_ITEMS)
	{
		AdvancedDelegateItems labelItems;

		for (QMultiMap<int, IRostersLabelHolder *>::const_iterator holder_it=FLabelHolders.constBegin(); holder_it!=FLabelHolders.constEnd(); ++holder_it)
		{
			QList<quint32> labels = holder_it.value()->rosterLabels(holder_it.key(),index);
			for (QList<quint32>::const_iterator label_it = labels.constBegin(); label_it!=labels.constEnd(); ++label_it)
			{
				quint32 labelId = *label_it;
				if (!labelItems.contains(labelId))
					labelItems.insert(labelId,holder_it.value()->rosterLabel(holder_it.key(),labelId,index));
			}
		}

		for (QMultiMap<IRosterIndex *, quint32>::const_iterator it = FIndexLabels.constFind(index); it!=FIndexLabels.constEnd() && it.key()==index; ++it)
			if (!labelItems.contains(it.value()))
				labelItems.insert(it.value(),FLabelItems.value(it.value()));

		data.setValue(labelItems);
	}
	else if (FActiveNotifies.contains(index))
	{
		const IRostersNotify &notify = FNotifyItems.value(FActiveNotifies.value(index));
		if (ARole == RDR_ALLWAYS_VISIBLE)
		{
			static bool block = false;
			if (!block && (notify.flags & IRostersNotify::AllwaysVisible)>0)
			{
				block = true;
				data = index->data(ARole).toInt() + 1;
				block = false;
			}
		}
		else if (ARole == Qt::DecorationRole)
		{
			data = !notify.icon.isNull() ? notify.icon : data;
		}
		else if (ARole == Qt::BackgroundColorRole)
		{
			data = notify.background;
		}
	}
	return data;
}

bool RostersView::setRosterData(IRosterIndex *AIndex, int ARole, const QVariant &AValue)
{
	Q_UNUSED(AIndex);
	Q_UNUSED(ARole);
	Q_UNUSED(AValue);
	return false;
}

QList<quint32> RostersView::rosterLabels(int AOrder, const IRosterIndex *AIndex) const
{
	QList<quint32> labels;
	IRosterIndex *index = const_cast<IRosterIndex *>(AIndex);
	if (AOrder==RLHO_ROSTERSVIEW_DISPLAY && FRostersModel)
	{
		if (AIndex->parentIndex()==FRostersModel->rootIndex())
			labels.append(AdvancedDelegateItem::DisplayId);
		else if (FRostersModel->isGroupType(AIndex->type()))
			labels.append(AdvancedDelegateItem::DisplayId);
	}
	else if (AOrder==RLHO_ROSTERSVIEW_NOTIFY && FActiveNotifies.contains(index))
	{
		const IRostersNotify &notify = FNotifyItems.value(FActiveNotifies.value(index));
		if (!notify.footer.isEmpty())
			labels.append(RLID_SCHANGER_STATUS);
		if (!notify.icon.isNull())
			labels.append(AdvancedDelegateItem::DecorationId);
	}
	return labels;
}

AdvancedDelegateItem RostersView::rosterLabel(int AOrder, quint32 ALabelId, const IRosterIndex *AIndex) const
{
	AdvancedDelegateItem label;
	IRosterIndex *index = const_cast<IRosterIndex *>(AIndex);
	if (AOrder==RLHO_ROSTERSVIEW_DISPLAY && ALabelId==AdvancedDelegateItem::DisplayId && FRostersModel)
	{
		label.d->id = AdvancedDelegateItem::DisplayId;
		label.d->kind = AdvancedDelegateItem::Display;
		label.d->data = AIndex->data(Qt::DisplayRole);
		if (AIndex->parentIndex()==FRostersModel->rootIndex())
			label.d->hints.insert(AdvancedDelegateItem::FontWeight,QFont::Bold);
		else if (FRostersModel->isGroupType(AIndex->type()))
			label.d->hints.insert(AdvancedDelegateItem::FontWeight,QFont::DemiBold);
	}
	else if (AOrder==RLHO_ROSTERSVIEW_NOTIFY && ALabelId==AdvancedDelegateItem::DecorationId)
	{
		label.d->id = AdvancedDelegateItem::DecorationId;
		label.d->kind = AdvancedDelegateItem::Decoration;
		label.d->flags = AdvancedDelegateItem::Blink;
		label.d->data = FNotifyItems.value(FActiveNotifies.value(index)).icon;
	}
	else if (AOrder==RLHO_ROSTERSVIEW_NOTIFY && ALabelId==RLID_SCHANGER_STATUS)
	{
		label.d->id = RLID_SCHANGER_STATUS;
		label.d->kind = AdvancedDelegateItem::CustomData;
		label.d->hints.insert(AdvancedDelegateItem::FontSizeDelta,-1);
		label.d->hints.insert(AdvancedDelegateItem::FontStyle,QFont::StyleItalic);
		label.d->data = FNotifyItems.value(FActiveNotifies.value(index)).footer;
	}
	return label;
}

IRostersModel *RostersView::rostersModel() const
{
	return FRostersModel;
}

void RostersView::setRostersModel(IRostersModel *AModel)
{
	if (FRostersModel != AModel)
	{
		emit modelAboutToBeSeted(AModel);

		if (selectionModel())
			selectionModel()->clear();

		if (FRostersModel)
		{
			disconnect(FRostersModel->instance(),SIGNAL(indexInserted(IRosterIndex *)),this,SLOT(onIndexInserted(IRosterIndex *)));
			disconnect(FRostersModel->instance(),SIGNAL(indexDestroyed(IRosterIndex *)),this,SLOT(onIndexDestroyed(IRosterIndex *)));
			FRostersModel->removeDefaultDataHolder(this);
			clearLabels();
		}

		FRostersModel = AModel;

		if (FRostersModel)
		{
			FRostersModel->insertDefaultDataHolder(this);
			connect(FRostersModel->instance(),SIGNAL(indexDestroyed(IRosterIndex *)), SLOT(onIndexDestroyed(IRosterIndex *)));
		}

		if (FProxyModels.isEmpty())
		{
			emit viewModelAboutToBeChanged(FRostersModel!=NULL ? FRostersModel->instance() : NULL);
			QTreeView::setModel(FRostersModel!=NULL ? FRostersModel->instance() : NULL);
			emit viewModelChanged(FRostersModel!=NULL ? FRostersModel->instance() : NULL);
		}
		else
			FProxyModels.values().first()->setSourceModel(FRostersModel!=NULL ? FRostersModel->instance() : NULL);

		if (selectionModel())
		{
			connect(selectionModel(),SIGNAL(selectionChanged(const QItemSelection &, const QItemSelection &)),
				SLOT(onSelectionChanged(const QItemSelection &, const QItemSelection &)));
		}

		emit modelSeted(FRostersModel);
	}
}

bool RostersView::repaintRosterIndex(IRosterIndex *AIndex)
{
	if (FRostersModel)
	{
		QModelIndex modelIndex = mapFromModel(FRostersModel->modelIndexByRosterIndex(AIndex));
		if (modelIndex.isValid())
		{
			QRect rect = visualRect(modelIndex).adjusted(1,1,-1,-1);
			if (!rect.isEmpty())
			{
				viewport()->repaint(rect);
				return true;
			}
		}
	}
	return false;
}

void RostersView::expandIndexParents(IRosterIndex *AIndex)
{
	QModelIndex index = FRostersModel->modelIndexByRosterIndex(AIndex);
	index = mapFromModel(index);
	expandIndexParents(index);
}

void RostersView::expandIndexParents(const QModelIndex &AIndex)
{
	QModelIndex index = AIndex;
	while (index.parent().isValid())
	{
		expand(index.parent());
		index = index.parent();
	}
}

bool RostersView::editRosterIndex(IRosterIndex *AIndex, int ADataRole)
{
	QModelIndex index = FRostersModel!=NULL ? mapFromModel(FRostersModel->modelIndexByRosterIndex(AIndex)) : QModelIndex();
	if (index.isValid() && state()==NoState && !visualRect(index).isEmpty())
	{
		for (QMultiMap<int,IRostersEditHandler *>::const_iterator it=FEditHandlers.constBegin(); it!=FEditHandlers.constEnd(); ++it)
		{
			IRostersEditHandler *handler = it.value();
			quint32 labelId = handler->rosterEditLabel(it.key(),ADataRole,index);
			if (labelId != AdvancedDelegateItem::NullId)
			{
				FAdvancedItemDelegate->setEditRole(ADataRole);
				FAdvancedItemDelegate->setEditProxy(handler->rosterEditProxy(it.key(),ADataRole,index));

				if (edit(index,AllEditTriggers,NULL))
					return true;

				FAdvancedItemDelegate->setEditProxy(NULL);
				FAdvancedItemDelegate->setEditRole(Qt::EditRole);
			}
		}
	}
	return false;
}

bool RostersView::singleClickOnIndex(IRosterIndex *AIndex, const QMouseEvent *AEvent)
{
	bool hooked = false;
	if (AIndex!=NULL && AEvent!=NULL)
	{
		QMultiMap<int,IRostersClickHooker *>::const_iterator it = FClickHookers.constBegin();
		while (!hooked && it!=FClickHookers.constEnd())
		{
			hooked = it.value()->rosterIndexSingleClicked(it.key(),AIndex,AEvent);
			++it;
		}
	}
	return hooked;
}

bool RostersView::doubleClickOnIndex(IRosterIndex *AIndex, const QMouseEvent *AEvent)
{
	bool hooked = false;
	if (AIndex!=NULL && AEvent!=NULL)
	{
		QMultiMap<int,IRostersClickHooker *>::const_iterator it = FClickHookers.constBegin();
		while (!hooked && it!=FClickHookers.constEnd())
		{
			hooked = it.value()->rosterIndexDoubleClicked(it.key(),AIndex,AEvent);
			++it;
		}
	}
	return hooked;
}

bool RostersView::keyPressForIndex(const QList<IRosterIndex *> &AIndexes, const QKeyEvent *AEvent)
{
	bool hooked = false;
	if (!AIndexes.isEmpty() && AEvent!=NULL)
	{
		QMultiMap<int,IRostersKeyHooker *>::const_iterator it = FKeyHookers.constBegin();
		while (!hooked && it!=FKeyHookers.constEnd())
		{
			hooked = it.value()->rosterKeyPressed(it.key(),AIndexes,AEvent);
			++it;
		}
	}
	return hooked;
}

bool RostersView::keyReleaseForIndex(const QList<IRosterIndex *> &AIndexes, const QKeyEvent *AEvent)
{
	bool hooked = false;
	if (!AIndexes.isEmpty() && AEvent!=NULL)
	{
		QMultiMap<int,IRostersKeyHooker *>::const_iterator it = FKeyHookers.constBegin();
		while (!hooked && it!=FKeyHookers.constEnd())
		{
			hooked = it.value()->rosterKeyReleased(it.key(),AIndexes,AEvent);
			++it;
		}
	}
	return hooked;
}

void RostersView::toolTipsForIndex(IRosterIndex *AIndex, const QHelpEvent *AEvent, QMap<int, QString> &AToolTips)
{
	if (AIndex != NULL)
	{
		quint32 labelId = AdvancedDelegateItem::DisplayId;
		if (FRostersModel && AEvent!=NULL)
			labelId = labelAt(AEvent->pos(),mapFromModel(FRostersModel->modelIndexByRosterIndex(AIndex)));

		emit indexToolTips(AIndex,labelId,AToolTips);
		if (labelId!=AdvancedDelegateItem::DisplayId && AToolTips.isEmpty())
			emit indexToolTips(AIndex,AdvancedDelegateItem::DisplayId,AToolTips);
	}
}


void RostersView::contextMenuForIndex(const QList<IRosterIndex *> &AIndexes, const QContextMenuEvent *AEvent, Menu *AMenu)
{
	if (!AIndexes.isEmpty())
	{
		Menu *clipMenu = new Menu(AMenu);
		clipMenu->setTitle(tr("Copy to clipboard"));
		clipMenu->setIcon(RSR_STORAGE_MENUICONS, MNI_ROSTERVIEW_CLIPBOARD);

		quint32 labelId = AdvancedDelegateItem::DisplayId;
		if (FRostersModel && AEvent!=NULL)
			labelId = labelAt(AEvent->pos(),indexAt(AEvent->pos()));

		emit indexContextMenu(AIndexes,labelId,AMenu);
		clipboardMenuForIndex(AIndexes,AEvent,clipMenu);

		if (labelId!=AdvancedDelegateItem::DisplayId && AMenu->isEmpty())
		{
			clipMenu->clear();
			emit indexContextMenu(AIndexes,AdvancedDelegateItem::DisplayId,AMenu);
			clipboardMenuForIndex(AIndexes,NULL,clipMenu);
		}

		if (!clipMenu->isEmpty())
			AMenu->addAction(clipMenu->menuAction(),AG_RVCM_ROSTERSVIEW_CLIPBOARD,true);
		else
			delete clipMenu;
	}
}

void RostersView::clipboardMenuForIndex(const QList<IRosterIndex *> &AIndexes, const QContextMenuEvent *AEvent, Menu *AMenu)
{
	if (!AIndexes.isEmpty() && AMenu!=NULL)
	{
		quint32 labelId = AdvancedDelegateItem::DisplayId;
		if (FRostersModel && AEvent!=NULL)
			labelId = labelAt(AEvent->pos(),indexAt(AEvent->pos()));

		if (labelId==AdvancedDelegateItem::DisplayId && AIndexes.count()==1)
		{
			IRosterIndex *index = AIndexes.first();
			if (!index->data(RDR_FULL_JID).toString().isEmpty())
			{
				Action *action = new Action(AMenu);
				action->setText(tr("Jabber ID"));
				action->setData(ADR_CLIPBOARD_DATA, Jid(index->data(RDR_FULL_JID).toString()).uBare());
				action->setShortcutId(SCT_ROSTERVIEW_COPYJID);
				connect(action,SIGNAL(triggered(bool)),SLOT(onCopyToClipboardActionTriggered(bool)));
				AMenu->addAction(action, AG_DEFAULT, true);
			}

			if (!index->data(RDR_STATUS).toString().isEmpty())
			{
				Action *action = new Action(AMenu);
				action->setText(tr("Status"));
				action->setData(ADR_CLIPBOARD_DATA, index->data(RDR_STATUS));
				action->setShortcutId(SCT_ROSTERVIEW_COPYSTATUS);
				connect(action,SIGNAL(triggered(bool)),SLOT(onCopyToClipboardActionTriggered(bool)));
				AMenu->addAction(action, AG_DEFAULT, true);
			}

			if (!index->data(RDR_NAME).toString().isEmpty())
			{
				Action *action = new Action(AMenu);
				action->setText(tr("Name"));
				action->setData(ADR_CLIPBOARD_DATA, index->data(RDR_NAME));
				action->setShortcutId(SCT_ROSTERVIEW_COPYNAME);
				connect(action,SIGNAL(triggered(bool)),SLOT(onCopyToClipboardActionTriggered(bool)));
				AMenu->addAction(action, AG_DEFAULT, true);
			}
		}

		emit indexClipboardMenu(AIndexes,labelId,AMenu);
	}
}

bool RostersView::hasMultiSelection() const
{
	return FRostersModel!=NULL ? selectedIndexes().count()>1 : false;
}

bool RostersView::isSelectionAcceptable(const QList<IRosterIndex *> &AIndexes)
{
	if (AIndexes.count() > 1)
	{
		bool accepted = false;
		emit indexMultiSelection(AIndexes,accepted);
		return accepted;
	}
	return true;
}

QList<IRosterIndex *> RostersView::selectedRosterIndexes() const
{
	QList<IRosterIndex *> rosterIndexes;
	if (FRostersModel)
	{
		foreach(QModelIndex modelIndex, selectionModel()->selectedIndexes())
		{
			IRosterIndex *index = FRostersModel->rosterIndexByModelIndex(mapToModel(modelIndex));
			if (index)
				rosterIndexes.append(index);
		}
	}
	return rosterIndexes;
}

bool RostersView::setSelectedRosterIndexes(const QList<IRosterIndex *> &AIndexes, bool APartial)
{
	if (FRostersModel)
	{
		bool accepted = APartial || isSelectionAcceptable(AIndexes);
		if (accepted)
		{
			QSet<IRosterIndex *> curSelected = selectedRosterIndexes().toSet();
			QSet<IRosterIndex *> newSelected = AIndexes.toSet() - curSelected;
			QSet<IRosterIndex *> oldSelected = curSelected - AIndexes.toSet();

			foreach(IRosterIndex *index, oldSelected)
			{
				QModelIndex mindex = mapFromModel(FRostersModel->modelIndexByRosterIndex(index));
				if (mindex.isValid())
					selectionModel()->select(mindex, QItemSelectionModel::Deselect);
			}

			foreach(IRosterIndex *index, newSelected)
			{
				QModelIndex mindex = mapFromModel(FRostersModel->modelIndexByRosterIndex(index));
				if (mindex.isValid())
					selectionModel()->select(mindex, QItemSelectionModel::Select);
			}
		}
		return accepted;
	}
	return false;
}

QMap<int, QStringList > RostersView::indexesRolesMap(const QList<IRosterIndex *> &AIndexes, const QList<int> &ARoles, int AUniqueRole) const
{
	QMap<int, QStringList > map;
	foreach(IRosterIndex *index, AIndexes)
	{
		if (AUniqueRole<0 || !map[AUniqueRole].contains(index->data(AUniqueRole).toString()))
		{
			foreach(int role, ARoles)
				map[role].append(index->data(role).toString());
		}
	}
	return map;
}

void RostersView::insertProxyModel(QAbstractProxyModel *AProxyModel, int AOrder)
{
	if (AProxyModel && !FProxyModels.values().contains(AProxyModel))
	{
		emit proxyModelAboutToBeInserted(AProxyModel,AOrder);

		bool changeViewModel = FProxyModels.upperBound(AOrder) == FProxyModels.end();

		if (changeViewModel)
			emit viewModelAboutToBeChanged(AProxyModel);

		QList<IRosterIndex *> selIndexes = selectedRosterIndexes();
		if (selectionModel())
			selectionModel()->clear();

		FProxyModels.insert(AOrder,AProxyModel);
		QList<QAbstractProxyModel *> proxies = FProxyModels.values();
		int index = proxies.indexOf(AProxyModel);

		QAbstractProxyModel *before = proxies.value(index-1,NULL);
		QAbstractProxyModel *after = proxies.value(index+1,NULL);

		if (before)
		{
			AProxyModel->setSourceModel(before);
		}
		else
		{
			AProxyModel->setSourceModel(FRostersModel!=NULL ? FRostersModel->instance() : NULL);
		}
		if (after)
		{
			after->setSourceModel(NULL);  //?????????????? ?????? QSortFilterProxyModel, ?????????????????????? ?? removeProxyModel
			after->setSourceModel(AProxyModel);
		}
		else
		{
			QTreeView::setModel(AProxyModel);
		}

		setSelectedRosterIndexes(selIndexes);

		if (changeViewModel)
			emit viewModelChanged(model());

		emit proxyModelInserted(AProxyModel);
	}
}

QList<QAbstractProxyModel *> RostersView::proxyModels() const
{
	return FProxyModels.values();
}

void RostersView::removeProxyModel(QAbstractProxyModel *AProxyModel)
{
	if (FProxyModels.values().contains(AProxyModel))
	{
		emit proxyModelAboutToBeRemoved(AProxyModel);

		QList<QAbstractProxyModel *> proxies = FProxyModels.values();
		int index = proxies.indexOf(AProxyModel);

		QAbstractProxyModel *before = proxies.value(index-1,NULL);
		QAbstractProxyModel *after = proxies.value(index+1,NULL);

		bool changeViewModel = after==NULL;
		if (changeViewModel)
		{
			if (before!=NULL)
				emit viewModelAboutToBeChanged(before);
			else
				emit viewModelAboutToBeChanged(FRostersModel!=NULL ? FRostersModel->instance() : NULL);
		}

		QList<IRosterIndex *> selIndexes = selectedRosterIndexes();
		if (selectionModel())
			selectionModel()->clear();

		FProxyModels.remove(FProxyModels.key(AProxyModel),AProxyModel);

		if (after == NULL && before == NULL)
		{
			QTreeView::setModel(FRostersModel!=NULL ? FRostersModel->instance() : NULL);
		}
		else if (after == NULL)
		{
			QTreeView::setModel(before);
		}
		else if (before == NULL)
		{
			after->setSourceModel(NULL);
			after->setSourceModel(FRostersModel!=NULL ? FRostersModel->instance() : NULL);
		}
		else
		{
			after->setSourceModel(NULL);
			after->setSourceModel(before);
		}

		AProxyModel->setSourceModel(NULL);

		setSelectedRosterIndexes(selIndexes);

		if (changeViewModel)
			emit viewModelChanged(model());

		emit proxyModelRemoved(AProxyModel);
	}
}

QModelIndex RostersView::mapToModel(const QModelIndex &AProxyIndex) const
{
	QModelIndex index = AProxyIndex;
	if (!FProxyModels.isEmpty())
	{
		QMap<int, QAbstractProxyModel *>::const_iterator it = FProxyModels.constEnd();
		do
		{
			--it;
			index = it.value()->mapToSource(index);
		} while (it != FProxyModels.constBegin());
	}
	return index;
}

QModelIndex RostersView::mapFromModel(const QModelIndex &AModelIndex) const
{
	QModelIndex index = AModelIndex;
	if (!FProxyModels.isEmpty())
	{
		QMap<int, QAbstractProxyModel *>::const_iterator it = FProxyModels.constBegin();
		while (it != FProxyModels.constEnd())
		{
			index = it.value()->mapFromSource(index);
			++it;
		}
	}
	return index;
}

QModelIndex RostersView::mapToProxy(QAbstractProxyModel *AProxyModel, const QModelIndex &AModelIndex) const
{
	QModelIndex index = AModelIndex;
	if (!FProxyModels.isEmpty())
	{
		QMap<int,QAbstractProxyModel *>::const_iterator it = FProxyModels.constBegin();
		while (it!=FProxyModels.constEnd())
		{
			index = it.value()->mapFromSource(index);
			if (it.value() == AProxyModel)
				return index;
			++it;
		}
	}
	return index;
}

QModelIndex RostersView::mapFromProxy(QAbstractProxyModel *AProxyModel, const QModelIndex &AProxyIndex) const
{
	QModelIndex index = AProxyIndex;
	if (!FProxyModels.isEmpty())
	{
		bool doMap = false;
		QMap<int, QAbstractProxyModel *>::const_iterator it = FProxyModels.constEnd();
		do
		{
			--it;
			if (it.value() == AProxyModel)
				doMap = true;
			if (doMap)
				index = it.value()->mapToSource(index);
		} while (it != FProxyModels.constBegin());
	}
	return index;
}

AdvancedDelegateItem RostersView::registeredLabel(quint32 ALabelId) const
{
	return FLabelItems.value(ALabelId);
}

quint32 RostersView::registerLabel(const AdvancedDelegateItem &ALabel)
{
	if (ALabel.d->flags & AdvancedDelegateItem::Blink)
		appendBlinkItem(ALabel.d->id,0);
	else
		removeBlinkItem(ALabel.d->id,0);

	if (FLabelItems.contains(ALabel.d->id))
		emit rosterDataChanged(NULL, RDR_LABEL_ITEMS);

	FLabelItems.insert(ALabel.d->id,ALabel);
	return ALabel.d->id;
}

void RostersView::insertLabel(quint32 ALabelId, IRosterIndex *AIndex)
{
	if (FLabelItems.contains(ALabelId) && !FIndexLabels.contains(AIndex,ALabelId))
	{
		FIndexLabels.insertMulti(AIndex,ALabelId);
		emit rosterDataChanged(AIndex,RDR_LABEL_ITEMS);
	}
}

void RostersView::removeLabel(quint32 ALabelId, IRosterIndex *AIndex)
{
	if (AIndex == NULL)
	{
		foreach(IRosterIndex *index, FIndexLabels.keys(ALabelId))
			removeLabel(ALabelId,index);
	}
	else if (FIndexLabels.contains(AIndex,ALabelId))
	{
		FIndexLabels.remove(AIndex,ALabelId);
		emit rosterDataChanged(AIndex,RDR_LABEL_ITEMS);
	}
}

quint32 RostersView::labelAt(const QPoint &APoint, const QModelIndex &AIndex) const
{
	return FAdvancedItemDelegate->itemAt(APoint,indexOption(viewOptions(),AIndex),AIndex);
}

QRect RostersView::labelRect(quint32 ALabeld, const QModelIndex &AIndex) const
{
	return FAdvancedItemDelegate->itemRect(ALabeld,indexOption(viewOptions(),AIndex),AIndex);
}

int RostersView::activeNotify(IRosterIndex *AIndex) const
{
	return FActiveNotifies.value(AIndex,-1);
}

QList<int> RostersView::notifyQueue(IRosterIndex *AIndex) const
{
	QMultiMap<int, int> queue;
	foreach(int notifyId, FIndexNotifies.values(AIndex))
		queue.insertMulti(FNotifyItems.value(notifyId).order, notifyId);
	return queue.values();
}

IRostersNotify RostersView::notifyById(int ANotifyId) const
{
	return FNotifyItems.value(ANotifyId);
}

QList<IRosterIndex *> RostersView::notifyIndexes(int ANotifyId) const
{
	return FIndexNotifies.keys(ANotifyId);
}

int RostersView::insertNotify(const IRostersNotify &ANotify, const QList<IRosterIndex *> &AIndexes)
{
	int notifyId = -1;
	while(notifyId<=0 || FNotifyItems.contains(notifyId))
		notifyId = qrand();

	foreach(IRosterIndex *index, AIndexes)
	{
		FNotifyUpdates += index;
		FIndexNotifies.insertMulti(index, notifyId);
	}

	if (ANotify.flags & IRostersNotify::Blink)
		appendBlinkItem(0,notifyId);

	if (ANotify.timeout > 0)
	{
		QTimer *timer = new QTimer(this);
		timer->start(ANotify.timeout);
		FNotifyTimer.insert(timer,notifyId);
		connect(timer,SIGNAL(timeout()),SLOT(onRemoveIndexNotifyTimeout()));
	}

	FNotifyItems.insert(notifyId, ANotify);
	QTimer::singleShot(0,this,SLOT(onUpdateIndexNotifyTimeout()));
	emit notifyInserted(notifyId);

	return notifyId;
}

void RostersView::activateNotify(int ANotifyId)
{
	if (FNotifyItems.contains(ANotifyId))
	{
		emit notifyActivated(ANotifyId);
	}
}

void RostersView::removeNotify(int ANotifyId)
{
	if (FNotifyItems.contains(ANotifyId))
	{
		foreach(IRosterIndex *index, FIndexNotifies.keys(ANotifyId))
		{
			FNotifyUpdates += index;
			FIndexNotifies.remove(index,ANotifyId);
		}
		removeBlinkItem(0,ANotifyId);

		QTimer *timer = FNotifyTimer.key(ANotifyId,NULL);
		if (timer)
		{
			timer->deleteLater();
			FNotifyTimer.remove(timer);
		}

		FNotifyItems.remove(ANotifyId);
		QTimer::singleShot(0,this,SLOT(onUpdateIndexNotifyTimeout()));

		emit notifyRemoved(ANotifyId);
	}
}

QList<IRostersDragDropHandler *> RostersView::dragDropHandlers() const
{
	return FDragDropHandlers;
}

void RostersView::insertDragDropHandler(IRostersDragDropHandler *AHandler)
{
	if (!FDragDropHandlers.contains(AHandler))
		FDragDropHandlers.append(AHandler);
}

void RostersView::removeDragDropHandler(IRostersDragDropHandler *AHandler)
{
	if (FDragDropHandlers.contains(AHandler))
		FDragDropHandlers.removeAll(AHandler);
}

QMultiMap<int, IRostersLabelHolder *> RostersView::labelHolders() const
{
	return FLabelHolders;
}

void RostersView::insertLabelHolder(int AOrder, IRostersLabelHolder *AHolder)
{
	if (AHolder)
	{
		if (!FLabelHolders.values().contains(AHolder))
			connect(AHolder->instance(),SIGNAL(rosterLabelChanged(quint32, IRosterIndex *)),SLOT(onRosterLabelChanged(quint32, IRosterIndex *)));
		FLabelHolders.insertMulti(AOrder,AHolder);
	}
}

void RostersView::removeLabelHolder(int AOrder, IRostersLabelHolder *AHolder)
{
	if (AHolder)
	{
		FLabelHolders.remove(AOrder,AHolder);
		if (!FLabelHolders.values().contains(AHolder))
			disconnect(AHolder->instance(),SIGNAL(rosterLabelChanged(quint32, IRosterIndex *)),this,SLOT(onRosterLabelChanged(quint32, IRosterIndex *)));
	}
}

QMultiMap<int, IRostersClickHooker *> RostersView::clickHookers() const
{
	return FClickHookers;
}

void RostersView::insertClickHooker(int AOrder, IRostersClickHooker *AHooker)
{
	if (AHooker)
		FClickHookers.insertMulti(AOrder,AHooker);
}

void RostersView::removeClickHooker(int AOrder, IRostersClickHooker *AHooker)
{
	FClickHookers.remove(AOrder,AHooker);
}

QMultiMap<int, IRostersKeyHooker *> RostersView::keyHookers() const
{
	return FKeyHookers;
}

void RostersView::insertKeyHooker(int AOrder, IRostersKeyHooker *AHooker)
{
	if (AHooker)
		FKeyHookers.insertMulti(AOrder,AHooker);
}

void RostersView::removeKeyHooker(int AOrder, IRostersKeyHooker *AHooker)
{
	FKeyHookers.remove(AOrder,AHooker);
}

QMultiMap<int, IRostersEditHandler *> RostersView::editHandlers() const
{
	return FEditHandlers;
}

void RostersView::insertEditHandler(int AOrder, IRostersEditHandler *AHandler)
{
	if (AHandler)
		FEditHandlers.insertMulti(AOrder,AHandler);
}

void RostersView::removeEditHandler(int AOrder, IRostersEditHandler *AHandler)
{
	FEditHandlers.remove(AOrder,AHandler);
}

void RostersView::clearLabels()
{
	foreach(quint32 labelId, FLabelItems.keys())
		removeLabel(labelId);
}

void RostersView::appendBlinkItem(quint32 ALabelId, int ANotifyId)
{
	if (ALabelId > 0)
		FBlinkLabels += ALabelId;
	if (ANotifyId > 0)
		FBlinkNotifies += ANotifyId;
}

void RostersView::removeBlinkItem(quint32 ALabelId, int ANotifyId)
{
	FBlinkLabels -= ALabelId;
	FBlinkNotifies -= ANotifyId;
}

void RostersView::setDropIndicatorRect(const QRect &ARect)
{
	if (FDropIndicatorRect != ARect)
	{
		FDropIndicatorRect = ARect;
		viewport()->update();
	}
}

QStyleOptionViewItemV4 RostersView::indexOption(const QStyleOptionViewItem &AOption, const QModelIndex &AIndex) const
{
	QStyleOptionViewItemV4 option = AOption;
	
	if (wordWrap())
		option.features = QStyleOptionViewItemV2::WrapText;
	option.widget = this;
	option.locale = locale();
	option.locale.setNumberOptions(QLocale::OmitGroupSeparator);

	option.index = AIndex;
	option.rect = visualRect(AIndex);
	if (isExpanded(AIndex))
		option.state |= QStyle::State_Open;
	if (hasFocus() && currentIndex()==AIndex)
		option.state |= QStyle::State_HasFocus;
	if (selectedIndexes().contains(AIndex))
		option.state |= QStyle::State_Selected;
	if ((AIndex.flags() & Qt::ItemIsEnabled) == 0)
		option.state &= ~QStyle::State_Enabled;
	if (indexAt(viewport()->mapFromGlobal(QCursor::pos())) == AIndex)
		option.state |= QStyle::State_MouseOver;
	if (model() && model()->hasChildren(AIndex))
		option.state |= QStyle::State_Children;

	option.showDecorationSelected = false;
	option.state &= ~(QStyle::State_Sibling|QStyle::State_Item);
	option.state |= (QStyle::State)AIndex.data(RDR_STATES_FORCE_ON).toInt();
	option.state &= ~(QStyle::State)AIndex.data(RDR_STATES_FORCE_OFF).toInt();
	
	return option;
}

void RostersView::drawBranches(QPainter *APainter, const QRect &ARect, const QModelIndex &AIndex) const
{
	Q_UNUSED(APainter);
	Q_UNUSED(ARect);
	Q_UNUSED(AIndex);
}

void RostersView::drawRow(QPainter *APainter, const QStyleOptionViewItem &AOption, const QModelIndex &AIndex) const
{
	QTreeView::drawRow(APainter,indexOption(AOption,AIndex),AIndex);
}

bool RostersView::viewportEvent(QEvent *AEvent)
{
	if (AEvent->type() == QEvent::ToolTip)
	{
		QHelpEvent *helpEvent = static_cast<QHelpEvent *>(AEvent);
		QModelIndex viewIndex = indexAt(helpEvent->pos());
		if (FRostersModel && viewIndex.isValid())
		{
			IRosterIndex *index = FRostersModel->rosterIndexByModelIndex(mapToModel(viewIndex));
			if (index != NULL)
			{
				QMap<int,QString> toolTipsMap;
				toolTipsForIndex(index,helpEvent,toolTipsMap);
				if (!toolTipsMap.isEmpty())
				{
					QString tooltip = QString("<span>%1</span>").arg(QStringList(toolTipsMap.values()).join("<p/>"));
					QToolTip::showText(helpEvent->globalPos(),tooltip,this);
				}
				return true;
			}
		}
	}
	return QTreeView::viewportEvent(AEvent);
}

void RostersView::resizeEvent(QResizeEvent *AEvent)
{
	if (model() && model()->columnCount()>0)
		header()->resizeSection(0,AEvent->size().width());
	QTreeView::resizeEvent(AEvent);
}

bool RostersView::edit(const QModelIndex &AIndex, EditTrigger ATrigger, QEvent *AEvent)
{
	return QTreeView::edit(AIndex,ATrigger,AEvent);
}

void RostersView::paintEvent(QPaintEvent *AEvent)
{
	QTreeView::paintEvent(AEvent);
	if (!FDropIndicatorRect.isNull())
	{
		QStyleOption option;
		option.init(this);
		option.rect = FDropIndicatorRect.adjusted(0,0,-1,-1);
		QPainter painter(viewport());
		style()->drawPrimitive(QStyle::PE_IndicatorItemViewItemDrop, &option, &painter, this);
	}
}

void RostersView::contextMenuEvent(QContextMenuEvent *AEvent)
{
	QList<IRosterIndex *> indexes = selectedRosterIndexes();
	if (!indexes.isEmpty())
	{
		Menu *menu = new Menu(this);
		menu->setAttribute(Qt::WA_DeleteOnClose, true);
		contextMenuForIndex(indexes,AEvent,menu);

		if (!menu->isEmpty())
			menu->popup(AEvent->globalPos());
		else
			delete menu;
	}
}

void RostersView::mouseDoubleClickEvent(QMouseEvent *AEvent)
{
	bool hooked = false;
	if (viewport()->rect().contains(AEvent->pos()) && selectedIndexes().count()==1)
	{
		QModelIndex viewIndex = indexAt(AEvent->pos());
		if (FRostersModel && viewIndex.isValid())
		{
			IRosterIndex *index = FRostersModel->rosterIndexByModelIndex(mapToModel(viewIndex));
			if (index != NULL)
			{
				int notifyId = FActiveNotifies.value(index,-1);
				if (notifyId<0 || (FNotifyItems.value(notifyId).flags & IRostersNotify::HookClicks)==0)
				{
					hooked = doubleClickOnIndex(index,AEvent);
				}
				else
				{
					hooked = true;
					emit notifyActivated(notifyId);
				}
			}
		}
	}
	if (!hooked)
	{
		QTreeView::mouseDoubleClickEvent(AEvent);
	}
}

void RostersView::mousePressEvent(QMouseEvent *AEvent)
{
	FStartDragFailed = false;
	FPressedPos = AEvent->pos();
	if (viewport()->rect().contains(FPressedPos))
	{
		FPressedIndex = indexAt(FPressedPos);
		if (FPressedIndex.isValid())
		{
			FPressedLabel = labelAt(AEvent->pos(),FPressedIndex);
			if (AEvent->button()==Qt::LeftButton && FPressedLabel==AdvancedDelegateItem::BranchId)
				setExpanded(FPressedIndex,!isExpanded(FPressedIndex));
		}
	}
	QTreeView::mousePressEvent(AEvent);
}

void RostersView::mouseMoveEvent(QMouseEvent *AEvent)
{
	if (FRostersModel && !FStartDragFailed && AEvent->buttons()!=Qt::NoButton && FPressedIndex.isValid() && 
		(AEvent->pos()-FPressedPos).manhattanLength()>QApplication::startDragDistance() && selectedIndexes().count()==1)
	{
		IRosterIndex *index = FRostersModel->rosterIndexByModelIndex(mapToModel(FPressedIndex));
		
		QDrag *drag = new QDrag(this);
		drag->setMimeData(new QMimeData);

		QByteArray data;
		QDataStream stream(&data,QIODevice::WriteOnly);
		operator<<(stream,index->data());
		drag->mimeData()->setData(DDT_ROSTERSVIEW_INDEX_DATA,data);

		Qt::DropActions actions = Qt::IgnoreAction;
		foreach(IRostersDragDropHandler *handler, FDragDropHandlers)
			actions |= handler->rosterDragStart(AEvent,index,drag);

		if (actions != Qt::IgnoreAction)
		{
			QAbstractItemDelegate *itemDeletage = itemDelegate(FPressedIndex);
			if (itemDeletage)
			{
				QStyleOptionViewItemV4 option = indexOption(viewOptions(),FPressedIndex);
				QPoint indexPos = option.rect.topLeft();
				option.state &= ~QStyle::State_Selected;
				option.state &= ~QStyle::State_MouseOver;
				option.rect = QRect(QPoint(0,0),option.rect.size());
				QPixmap pixmap(option.rect.size());
				QPainter painter(&pixmap);
				painter.fillRect(option.rect,style()->standardPalette().color(QPalette::Normal,QPalette::Base));
				itemDeletage->paint(&painter,option,FPressedIndex);
				painter.drawRect(option.rect.adjusted(0,0,-1,-1));
				drag->setPixmap(pixmap);
				drag->setHotSpot(FPressedPos - indexPos);
			}

			setState(DraggingState);
			drag->exec(actions);
			setState(NoState);
		}
		else
		{
			FStartDragFailed = true;
		}
	}
	else
	{
		QTreeView::mouseMoveEvent(AEvent);
	}
}

void RostersView::mouseReleaseEvent(QMouseEvent *AEvent)
{
	bool isClick = (FPressedPos-AEvent->pos()).manhattanLength() < QApplication::startDragDistance();
	if (isClick && AEvent->button()==Qt::LeftButton && viewport()->rect().contains(AEvent->pos()))
	{
		QModelIndex viewIndex = indexAt(AEvent->pos());
		quint32 labelId = labelAt(AEvent->pos(),viewIndex);
		if (FRostersModel && FPressedIndex.isValid() && FPressedIndex==viewIndex && FPressedLabel==labelId)
		{
			IRosterIndex *index = FRostersModel->rosterIndexByModelIndex(mapToModel(viewIndex));
			if (index)
				singleClickOnIndex(index,AEvent);
		}
	}

	FPressedPos = QPoint();
	FPressedIndex = QModelIndex();
	FPressedLabel = AdvancedDelegateItem::NullId;

	QTreeView::mouseReleaseEvent(AEvent);
}

void RostersView::keyPressEvent(QKeyEvent *AEvent)
{
	if (state()!=NoState || !keyPressForIndex(selectedRosterIndexes(),AEvent))
		QTreeView::keyPressEvent(AEvent);
}

void RostersView::keyReleaseEvent(QKeyEvent *AEvent)
{
	if (state()!=NoState || !keyReleaseForIndex(selectedRosterIndexes(),AEvent))
		QTreeView::keyReleaseEvent(AEvent);
}

void RostersView::dropEvent(QDropEvent *AEvent)
{
	IRosterIndex *index = FRostersModel!=NULL ? FRostersModel->rosterIndexByModelIndex(mapToModel(indexAt(AEvent->pos()))) : NULL;
	if (index)
	{
		Menu *dropMenu = new Menu(this);
		
		bool accepted = false;
		foreach(IRostersDragDropHandler *handler, FActiveDragHandlers)
			if (handler->rosterDropAction(AEvent,index,dropMenu))
				accepted = true;
		
		if (accepted && !dropMenu->isEmpty())
		{
			if (dropMenu->exec(mapToGlobal(AEvent->pos())))
				AEvent->acceptProposedAction();
			else
				AEvent->ignore();
		}
		else
		{
			AEvent->ignore();
		}
		delete dropMenu;
	}
	else
	{
		AEvent->ignore();
	}
	stopAutoScroll();
	setDropIndicatorRect(QRect());
}

void RostersView::dragEnterEvent(QDragEnterEvent *AEvent)
{
	FActiveDragHandlers.clear();
	foreach (IRostersDragDropHandler *handler, FDragDropHandlers)
		if (handler->rosterDragEnter(AEvent))
			FActiveDragHandlers.append(handler);

	if (!FActiveDragHandlers.isEmpty())
	{
		if (hasAutoScroll())
			startAutoScroll();
		AEvent->acceptProposedAction();
	}
	else
	{
		AEvent->ignore();
	}
}

void RostersView::dragMoveEvent(QDragMoveEvent *AEvent)
{
	QModelIndex modelIndex = indexAt(AEvent->pos());
	IRosterIndex *index = FRostersModel!=NULL ? FRostersModel->rosterIndexByModelIndex(mapToModel(modelIndex)) : NULL;
	if (index)
	{
		bool accepted = false;
		foreach(IRostersDragDropHandler *handler, FActiveDragHandlers)
			if (handler->rosterDragMove(AEvent,index))
				accepted = true;
		
		if (accepted)
			AEvent->acceptProposedAction();
		else
			AEvent->ignore();
		
		if (!isExpanded(modelIndex))
			FDragExpandTimer.start();
		else
			FDragExpandTimer.stop();
	}
	setDropIndicatorRect(visualRect(modelIndex));
}

void RostersView::dragLeaveEvent(QDragLeaveEvent *AEvent)
{
	foreach(IRostersDragDropHandler *handler, FActiveDragHandlers)
		handler->rosterDragLeave(AEvent);
	stopAutoScroll();
	setDropIndicatorRect(QRect());
}

void RostersView::closeEditor(QWidget *AEditor, QAbstractItemDelegate::EndEditHint AHint)
{
	FAdvancedItemDelegate->setEditProxy(NULL);
	FAdvancedItemDelegate->setEditRole(Qt::EditRole);
	QTreeView::closeEditor(AEditor,AHint);
}

void RostersView::onRosterIndexToolTips(IRosterIndex *AIndex, quint32 ALabelId, QMap<int,QString> &AToolTips)
{
	if (ALabelId == AdvancedDelegateItem::DisplayId)
	{
		QString name = AIndex->data(RDR_NAME).toString();
		if (!name.isEmpty())
			AToolTips.insert(RTTO_CONTACT_NAME, Qt::escape(name));

		Jid jid = AIndex->data(RDR_FULL_JID).toString();
		if (!jid.isEmpty())
			AToolTips.insert(RTTO_CONTACT_JID, Qt::escape(jid.uFull()));

		QString priority = AIndex->data(RDR_PRIORITY).toString();
		if (!priority.isEmpty())
			AToolTips.insert(RTTO_CONTACT_PRIORITY, tr("Priority: %1").arg(priority.toInt()));

		QString ask = AIndex->data(RDR_ASK).toString();
		QString subscription = AIndex->data(RDR_SUBSCRIBTION).toString();
		if (!subscription.isEmpty())
			AToolTips.insert(RTTO_CONTACT_SUBSCRIPTION, tr("Subscription: %1 %2").arg(Qt::escape(subscription)).arg(Qt::escape(ask)));

		QString status = AIndex->data(RDR_STATUS).toString();
		if (!status.isEmpty())
			AToolTips.insert(RTTO_CONTACT_STATUS, QString("%1 <div style='margin-left:10px;'>%2</div>").arg(tr("Status:")).arg(Qt::escape(status).replace("\n","<br>")));
	}
}

void RostersView::onSelectionChanged(const QItemSelection &ASelected, const QItemSelection &ADeselected)
{
	if (!isSelectionAcceptable(selectedRosterIndexes()))
	{
		selectionModel()->blockSignals(true);
		selectionModel()->select(ASelected,QItemSelectionModel::Deselect);
		selectionModel()->select(ADeselected,QItemSelectionModel::Select);
		selectionModel()->blockSignals(false);
	}
}

void RostersView::onRosterLabelChanged(quint32 ALabelId, IRosterIndex *AIndex)
{
	Q_UNUSED(ALabelId);
	emit rosterDataChanged(AIndex,RDR_LABEL_ITEMS);
}

void RostersView::onCopyToClipboardActionTriggered(bool)
{
	Action *action = qobject_cast<Action *>(sender());
	if (action)
	{
		QApplication::clipboard()->setText(action->data(ADR_CLIPBOARD_DATA).toString());
	}
}

void RostersView::onIndexDestroyed(IRosterIndex *AIndex)
{
	FIndexLabels.remove(AIndex);
	FIndexNotifies.remove(AIndex);
	FActiveNotifies.remove(AIndex);
	FNotifyUpdates -= AIndex;
}

void RostersView::onUpdateIndexNotifyTimeout()
{
	foreach(IRosterIndex *index, FNotifyUpdates)
	{
		int curNotify = activeNotify(index);
		int newNotify = notifyQueue(index).value(0,-1);
		if (curNotify != newNotify)
		{
			if (newNotify > 0)
				FActiveNotifies.insert(index,newNotify);
			else
				FActiveNotifies.remove(index);

			const IRostersNotify &notify = FNotifyItems.value(newNotify);
			if(notify.flags & IRostersNotify::ExpandParents)
				expandIndexParents(index);

			emit rosterDataChanged(index,RDR_ALLWAYS_VISIBLE);
			emit rosterDataChanged(index,Qt::DecorationRole);
			emit rosterDataChanged(index,Qt::BackgroundRole);
		}
	}
	FNotifyUpdates.clear();
}

void RostersView::onRemoveIndexNotifyTimeout()
{
	QTimer *timer = qobject_cast<QTimer *>(sender());
	timer->stop();
	timer->deleteLater();
	removeNotify(FNotifyTimer.value(timer));
}

void RostersView::onUpdateBlinkLabels()
{
	foreach(quint32 labelId, FBlinkLabels)
		foreach(IRosterIndex *index, FIndexLabels.keys(labelId))
			repaintRosterIndex(index);

	foreach(int notifyId, FBlinkNotifies)
		foreach(IRosterIndex *index, FActiveNotifies.keys(notifyId))
			repaintRosterIndex(index);
}

void RostersView::onDragExpandTimer()
{
	QModelIndex index = indexAt(FDropIndicatorRect.center());
	setExpanded(index,true);
}

void RostersView::onShortcutActivated(const QString &AId, QWidget *AWidget)
{
	if (!hasMultiSelection())
	{
		QModelIndex index = currentIndex();
		if (AId==SCT_ROSTERVIEW_COPYJID && AWidget==this)
		{
			if (!index.data(RDR_FULL_JID).toString().isEmpty())
				QApplication::clipboard()->setText(index.data(RDR_FULL_JID).toString());
		}
		else if (AId==SCT_ROSTERVIEW_COPYNAME && AWidget==this)
		{
			if (!index.data(RDR_NAME).toString().isEmpty())
				QApplication::clipboard()->setText(index.data(RDR_NAME).toString());
		}
		else if (AId==SCT_ROSTERVIEW_COPYSTATUS && AWidget==this)
		{
			if (!index.data(RDR_STATUS).toString().isEmpty())
				QApplication::clipboard()->setText(index.data(RDR_STATUS).toString());
		}
	}
}
