/********************************************************************************
** Form generated from reading UI file 'edituserslistdialog.ui'
**
** Created: Sat Jan 26 02:15:37 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITUSERSLISTDIALOG_H
#define UI_EDITUSERSLISTDIALOG_H

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

class Ui_EditUsersListDialogClass
{
public:
    QVBoxLayout *vboxLayout;
    QTableWidget *tbwTable;
    QHBoxLayout *hboxLayout;
    QPushButton *pbtAdd;
    QPushButton *pbtDelete;
    QSpacerItem *spacerItem;
    QDialogButtonBox *btbButtons;

    void setupUi(QDialog *EditUsersListDialogClass)
    {
        if (EditUsersListDialogClass->objectName().isEmpty())
            EditUsersListDialogClass->setObjectName(QString::fromUtf8("EditUsersListDialogClass"));
        EditUsersListDialogClass->resize(412, 382);
        vboxLayout = new QVBoxLayout(EditUsersListDialogClass);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(5, 5, 5, 5);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tbwTable = new QTableWidget(EditUsersListDialogClass);
        if (tbwTable->columnCount() < 2)
            tbwTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbwTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tbwTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tbwTable->setObjectName(QString::fromUtf8("tbwTable"));
        tbwTable->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tbwTable->setAlternatingRowColors(true);
        tbwTable->setSelectionMode(QAbstractItemView::SingleSelection);
        tbwTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbwTable->setSortingEnabled(true);
        tbwTable->setColumnCount(2);

        vboxLayout->addWidget(tbwTable);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        pbtAdd = new QPushButton(EditUsersListDialogClass);
        pbtAdd->setObjectName(QString::fromUtf8("pbtAdd"));

        hboxLayout->addWidget(pbtAdd);

        pbtDelete = new QPushButton(EditUsersListDialogClass);
        pbtDelete->setObjectName(QString::fromUtf8("pbtDelete"));

        hboxLayout->addWidget(pbtDelete);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btbButtons = new QDialogButtonBox(EditUsersListDialogClass);
        btbButtons->setObjectName(QString::fromUtf8("btbButtons"));
        btbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(btbButtons);


        vboxLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(tbwTable, pbtAdd);
        QWidget::setTabOrder(pbtAdd, pbtDelete);
        QWidget::setTabOrder(pbtDelete, btbButtons);

        retranslateUi(EditUsersListDialogClass);
        QObject::connect(btbButtons, SIGNAL(accepted()), EditUsersListDialogClass, SLOT(accept()));
        QObject::connect(btbButtons, SIGNAL(rejected()), EditUsersListDialogClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditUsersListDialogClass);
    } // setupUi

    void retranslateUi(QDialog *EditUsersListDialogClass)
    {
        QTableWidgetItem *___qtablewidgetitem = tbwTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditUsersListDialogClass", "Jid", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tbwTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditUsersListDialogClass", "Reason", 0, QApplication::UnicodeUTF8));
        pbtAdd->setText(QApplication::translate("EditUsersListDialogClass", "Add", 0, QApplication::UnicodeUTF8));
        pbtDelete->setText(QApplication::translate("EditUsersListDialogClass", "Delete", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(EditUsersListDialogClass);
    } // retranslateUi

};

namespace Ui {
    class EditUsersListDialogClass: public Ui_EditUsersListDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITUSERSLISTDIALOG_H
