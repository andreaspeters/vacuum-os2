/********************************************************************************
** Form generated from reading UI file 'accountsoptions.ui'
**
** Created: Sat Jan 26 02:06:05 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTSOPTIONS_H
#define UI_ACCOUNTSOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountsOptionsClass
{
public:
    QHBoxLayout *hboxLayout;
    QTreeWidget *trwAccounts;
    QVBoxLayout *vboxLayout;
    QPushButton *pbtAdd;
    QPushButton *pbtRemove;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *AccountsOptionsClass)
    {
        if (AccountsOptionsClass->objectName().isEmpty())
            AccountsOptionsClass->setObjectName(QString::fromUtf8("AccountsOptionsClass"));
        AccountsOptionsClass->resize(336, 196);
        hboxLayout = new QHBoxLayout(AccountsOptionsClass);
        hboxLayout->setSpacing(3);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        trwAccounts = new QTreeWidget(AccountsOptionsClass);
        trwAccounts->setObjectName(QString::fromUtf8("trwAccounts"));
        trwAccounts->setRootIsDecorated(false);
        trwAccounts->setItemsExpandable(false);
        trwAccounts->setSortingEnabled(true);
        trwAccounts->setColumnCount(0);

        hboxLayout->addWidget(trwAccounts);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(3);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        pbtAdd = new QPushButton(AccountsOptionsClass);
        pbtAdd->setObjectName(QString::fromUtf8("pbtAdd"));

        vboxLayout->addWidget(pbtAdd);

        pbtRemove = new QPushButton(AccountsOptionsClass);
        pbtRemove->setObjectName(QString::fromUtf8("pbtRemove"));

        vboxLayout->addWidget(pbtRemove);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout);


        retranslateUi(AccountsOptionsClass);

        QMetaObject::connectSlotsByName(AccountsOptionsClass);
    } // setupUi

    void retranslateUi(QWidget *AccountsOptionsClass)
    {
        pbtAdd->setText(QApplication::translate("AccountsOptionsClass", "Add", 0, QApplication::UnicodeUTF8));
        pbtRemove->setText(QApplication::translate("AccountsOptionsClass", "Remove", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(AccountsOptionsClass);
    } // retranslateUi

};

namespace Ui {
    class AccountsOptionsClass: public Ui_AccountsOptionsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTSOPTIONS_H
