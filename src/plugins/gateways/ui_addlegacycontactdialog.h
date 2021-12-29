/********************************************************************************
** Form generated from reading UI file 'addlegacycontactdialog.ui'
**
** Created: Sat Jan 26 02:19:09 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDLEGACYCONTACTDIALOG_H
#define UI_ADDLEGACYCONTACTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddLegacyContactDialogClass
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *lblDescription;
    QHBoxLayout *hboxLayout;
    QLabel *lblPrompt;
    QLineEdit *lnePrompt;
    QDialogButtonBox *dbbButtons;

    void setupUi(QDialog *AddLegacyContactDialogClass)
    {
        if (AddLegacyContactDialogClass->objectName().isEmpty())
            AddLegacyContactDialogClass->setObjectName(QString::fromUtf8("AddLegacyContactDialogClass"));
        AddLegacyContactDialogClass->setWindowModality(Qt::WindowModal);
        AddLegacyContactDialogClass->resize(371, 84);
        vboxLayout = new QVBoxLayout(AddLegacyContactDialogClass);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(5, 5, 5, 5);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        lblDescription = new QLabel(AddLegacyContactDialogClass);
        lblDescription->setObjectName(QString::fromUtf8("lblDescription"));
        lblDescription->setTextFormat(Qt::PlainText);
        lblDescription->setAlignment(Qt::AlignCenter);
        lblDescription->setWordWrap(true);

        vboxLayout->addWidget(lblDescription);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lblPrompt = new QLabel(AddLegacyContactDialogClass);
        lblPrompt->setObjectName(QString::fromUtf8("lblPrompt"));
        lblPrompt->setTextFormat(Qt::PlainText);

        hboxLayout->addWidget(lblPrompt);

        lnePrompt = new QLineEdit(AddLegacyContactDialogClass);
        lnePrompt->setObjectName(QString::fromUtf8("lnePrompt"));

        hboxLayout->addWidget(lnePrompt);


        vboxLayout->addLayout(hboxLayout);

        dbbButtons = new QDialogButtonBox(AddLegacyContactDialogClass);
        dbbButtons->setObjectName(QString::fromUtf8("dbbButtons"));
        dbbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(dbbButtons);


        retranslateUi(AddLegacyContactDialogClass);

        QMetaObject::connectSlotsByName(AddLegacyContactDialogClass);
    } // setupUi

    void retranslateUi(QDialog *AddLegacyContactDialogClass)
    {
        lblPrompt->setText(QApplication::translate("AddLegacyContactDialogClass", "Contact ID:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(AddLegacyContactDialogClass);
    } // retranslateUi

};

namespace Ui {
    class AddLegacyContactDialogClass: public Ui_AddLegacyContactDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDLEGACYCONTACTDIALOG_H
