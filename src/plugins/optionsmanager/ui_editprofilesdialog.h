/********************************************************************************
** Form generated from reading UI file 'editprofilesdialog.ui'
**
** Created: Sat Jan 26 01:40:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILESDIALOG_H
#define UI_EDITPROFILESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditProfilesDialogClass
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *lstProfiles;
    QVBoxLayout *verticalLayout;
    QPushButton *pbtAdd;
    QPushButton *pbtPassword;
    QPushButton *pbtRename;
    QPushButton *pbtDelete;
    QSpacerItem *verticalSpacer;
    QPushButton *pbtClose;

    void setupUi(QDialog *EditProfilesDialogClass)
    {
        if (EditProfilesDialogClass->objectName().isEmpty())
            EditProfilesDialogClass->setObjectName(QString::fromUtf8("EditProfilesDialogClass"));
        EditProfilesDialogClass->resize(312, 221);
        horizontalLayout = new QHBoxLayout(EditProfilesDialogClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lstProfiles = new QListWidget(EditProfilesDialogClass);
        lstProfiles->setObjectName(QString::fromUtf8("lstProfiles"));
        lstProfiles->setSelectionBehavior(QAbstractItemView::SelectRows);
        lstProfiles->setSortingEnabled(true);

        horizontalLayout->addWidget(lstProfiles);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pbtAdd = new QPushButton(EditProfilesDialogClass);
        pbtAdd->setObjectName(QString::fromUtf8("pbtAdd"));

        verticalLayout->addWidget(pbtAdd);

        pbtPassword = new QPushButton(EditProfilesDialogClass);
        pbtPassword->setObjectName(QString::fromUtf8("pbtPassword"));

        verticalLayout->addWidget(pbtPassword);

        pbtRename = new QPushButton(EditProfilesDialogClass);
        pbtRename->setObjectName(QString::fromUtf8("pbtRename"));

        verticalLayout->addWidget(pbtRename);

        pbtDelete = new QPushButton(EditProfilesDialogClass);
        pbtDelete->setObjectName(QString::fromUtf8("pbtDelete"));

        verticalLayout->addWidget(pbtDelete);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pbtClose = new QPushButton(EditProfilesDialogClass);
        pbtClose->setObjectName(QString::fromUtf8("pbtClose"));

        verticalLayout->addWidget(pbtClose);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(EditProfilesDialogClass);

        QMetaObject::connectSlotsByName(EditProfilesDialogClass);
    } // setupUi

    void retranslateUi(QDialog *EditProfilesDialogClass)
    {
        EditProfilesDialogClass->setWindowTitle(QApplication::translate("EditProfilesDialogClass", "Edit Profiles", 0, QApplication::UnicodeUTF8));
        pbtAdd->setText(QApplication::translate("EditProfilesDialogClass", "Add", 0, QApplication::UnicodeUTF8));
        pbtPassword->setText(QApplication::translate("EditProfilesDialogClass", "Password", 0, QApplication::UnicodeUTF8));
        pbtRename->setText(QApplication::translate("EditProfilesDialogClass", "Rename", 0, QApplication::UnicodeUTF8));
        pbtDelete->setText(QApplication::translate("EditProfilesDialogClass", "Delete", 0, QApplication::UnicodeUTF8));
        pbtClose->setText(QApplication::translate("EditProfilesDialogClass", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditProfilesDialogClass: public Ui_EditProfilesDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILESDIALOG_H
