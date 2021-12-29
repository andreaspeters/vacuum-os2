/********************************************************************************
** Form generated from reading UI file 'editbookmarksdialog.ui'
**
** Created: Sat Jan 26 02:17:50 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITBOOKMARKSDIALOG_H
#define UI_EDITBOOKMARKSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditBookmarksDialogClass
{
public:
    QHBoxLayout *hboxLayout;
    QTableWidget *tbwBookmarks;
    QVBoxLayout *vboxLayout;
    QPushButton *pbtAdd;
    QPushButton *pbtEdit;
    QPushButton *pbtDelete;
    QSpacerItem *spacerItem;
    QPushButton *pbtMoveUp;
    QPushButton *pbtMoveDown;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *bbxButtons;

    void setupUi(QDialog *EditBookmarksDialogClass)
    {
        if (EditBookmarksDialogClass->objectName().isEmpty())
            EditBookmarksDialogClass->setObjectName(QString::fromUtf8("EditBookmarksDialogClass"));
        EditBookmarksDialogClass->resize(553, 311);
        hboxLayout = new QHBoxLayout(EditBookmarksDialogClass);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(3, 3, 3, 3);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        tbwBookmarks = new QTableWidget(EditBookmarksDialogClass);
        if (tbwBookmarks->columnCount() < 4)
            tbwBookmarks->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbwBookmarks->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tbwBookmarks->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tbwBookmarks->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QFont font;
        font.setKerning(false);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setText(QString::fromUtf8("Sort"));
        __qtablewidgetitem3->setFont(font);
        tbwBookmarks->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tbwBookmarks->setObjectName(QString::fromUtf8("tbwBookmarks"));
        tbwBookmarks->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tbwBookmarks->setAlternatingRowColors(true);
        tbwBookmarks->setSelectionMode(QAbstractItemView::SingleSelection);
        tbwBookmarks->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbwBookmarks->setSortingEnabled(false);
        tbwBookmarks->setCornerButtonEnabled(false);
        tbwBookmarks->setColumnCount(4);
        tbwBookmarks->horizontalHeader()->setHighlightSections(false);
        tbwBookmarks->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));

        hboxLayout->addWidget(tbwBookmarks);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        pbtAdd = new QPushButton(EditBookmarksDialogClass);
        pbtAdd->setObjectName(QString::fromUtf8("pbtAdd"));

        vboxLayout->addWidget(pbtAdd);

        pbtEdit = new QPushButton(EditBookmarksDialogClass);
        pbtEdit->setObjectName(QString::fromUtf8("pbtEdit"));

        vboxLayout->addWidget(pbtEdit);

        pbtDelete = new QPushButton(EditBookmarksDialogClass);
        pbtDelete->setObjectName(QString::fromUtf8("pbtDelete"));

        vboxLayout->addWidget(pbtDelete);

        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        pbtMoveUp = new QPushButton(EditBookmarksDialogClass);
        pbtMoveUp->setObjectName(QString::fromUtf8("pbtMoveUp"));

        vboxLayout->addWidget(pbtMoveUp);

        pbtMoveDown = new QPushButton(EditBookmarksDialogClass);
        pbtMoveDown->setObjectName(QString::fromUtf8("pbtMoveDown"));

        vboxLayout->addWidget(pbtMoveDown);

        spacerItem1 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        bbxButtons = new QDialogButtonBox(EditBookmarksDialogClass);
        bbxButtons->setObjectName(QString::fromUtf8("bbxButtons"));
        bbxButtons->setOrientation(Qt::Vertical);
        bbxButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        vboxLayout->addWidget(bbxButtons);


        hboxLayout->addLayout(vboxLayout);

        QWidget::setTabOrder(tbwBookmarks, pbtAdd);
        QWidget::setTabOrder(pbtAdd, pbtEdit);
        QWidget::setTabOrder(pbtEdit, pbtDelete);
        QWidget::setTabOrder(pbtDelete, pbtMoveUp);
        QWidget::setTabOrder(pbtMoveUp, pbtMoveDown);
        QWidget::setTabOrder(pbtMoveDown, bbxButtons);

        retranslateUi(EditBookmarksDialogClass);
        QObject::connect(bbxButtons, SIGNAL(rejected()), EditBookmarksDialogClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditBookmarksDialogClass);
    } // setupUi

    void retranslateUi(QDialog *EditBookmarksDialogClass)
    {
        EditBookmarksDialogClass->setWindowTitle(QApplication::translate("EditBookmarksDialogClass", "Edit bookmarks", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tbwBookmarks->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditBookmarksDialogClass", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tbwBookmarks->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditBookmarksDialogClass", "JID/URL", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tbwBookmarks->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EditBookmarksDialogClass", "Nick", 0, QApplication::UnicodeUTF8));
        pbtAdd->setText(QApplication::translate("EditBookmarksDialogClass", "Add", 0, QApplication::UnicodeUTF8));
        pbtEdit->setText(QApplication::translate("EditBookmarksDialogClass", "Edit", 0, QApplication::UnicodeUTF8));
        pbtDelete->setText(QApplication::translate("EditBookmarksDialogClass", "Delete", 0, QApplication::UnicodeUTF8));
        pbtMoveUp->setText(QApplication::translate("EditBookmarksDialogClass", "Up", 0, QApplication::UnicodeUTF8));
        pbtMoveDown->setText(QApplication::translate("EditBookmarksDialogClass", "Down", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditBookmarksDialogClass: public Ui_EditBookmarksDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITBOOKMARKSDIALOG_H
