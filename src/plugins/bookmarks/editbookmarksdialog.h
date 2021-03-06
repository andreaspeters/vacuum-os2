#ifndef EDITBOOKMARKSDIALOG_H
#define EDITBOOKMARKSDIALOG_H

#include <QList>
#include <QDialog>
#include <definitions/resources.h>
#include <definitions/menuicons.h>
#include <interfaces/ibookmarks.h>
#include <utils/iconstorage.h>
#include "ui_editbookmarksdialog.h"

class EditBookmarksDialog :
			public QDialog
{
	Q_OBJECT;
public:
	EditBookmarksDialog(IBookmarks *ABookmarks, const Jid &AStreamJid, const QList<IBookmark> &AList, QWidget *AParent = NULL);
	~EditBookmarksDialog();
	const Jid  &streamJid() const { return FStreamJid; }
signals:
	void dialogDestroyed();
protected:
	IBookmark getBookmarkFromRow(int ARow) const;
	void setBookmarkToRow(int ARow, const IBookmark &ABookmark);
protected slots:
	void onEditButtonClicked();
	void onDialogAccepted();
	void onTableItemDoubleClicked(QTableWidgetItem *AItem);
	void onSortingStateChange(int AColumn);
private:
	Ui::EditBookmarksDialogClass ui;
private:
	IBookmarks *FBookmarks;
private:
	Jid FStreamJid;
	QString FRequestId;
	int FLastSortSection;
};

#endif // EDITBOOKMARKSDIALOG_H
