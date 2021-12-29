/********************************************************************************
** Form generated from reading UI file 'addcontactdialog.ui'
**
** Created: Sat Jan 26 02:05:43 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONTACTDIALOG_H
#define UI_ADDCONTACTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddContactDialogClass
{
public:
    QVBoxLayout *lytMainLayout;
    QFormLayout *formLayout;
    QLabel *lblContact;
    QLineEdit *lneContact;
    QLabel *lblNickName;
    QLineEdit *lneNickName;
    QLabel *lblGroup;
    QComboBox *cmbGroup;
    QLabel *lblGroupDelim;
    QGroupBox *grbSubscription;
    QVBoxLayout *verticalLayout;
    QCheckBox *chbSubscribe;
    QTextEdit *tedMessage;
    QDialogButtonBox *dbbButtons;

    void setupUi(QDialog *AddContactDialogClass)
    {
        if (AddContactDialogClass->objectName().isEmpty())
            AddContactDialogClass->setObjectName(QString::fromUtf8("AddContactDialogClass"));
        AddContactDialogClass->resize(369, 291);
        lytMainLayout = new QVBoxLayout(AddContactDialogClass);
        lytMainLayout->setSpacing(6);
        lytMainLayout->setContentsMargins(5, 5, 5, 5);
        lytMainLayout->setObjectName(QString::fromUtf8("lytMainLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lblContact = new QLabel(AddContactDialogClass);
        lblContact->setObjectName(QString::fromUtf8("lblContact"));
        lblContact->setTextFormat(Qt::PlainText);

        formLayout->setWidget(0, QFormLayout::LabelRole, lblContact);

        lneContact = new QLineEdit(AddContactDialogClass);
        lneContact->setObjectName(QString::fromUtf8("lneContact"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lneContact);

        lblNickName = new QLabel(AddContactDialogClass);
        lblNickName->setObjectName(QString::fromUtf8("lblNickName"));
        lblNickName->setTextFormat(Qt::PlainText);

        formLayout->setWidget(1, QFormLayout::LabelRole, lblNickName);

        lneNickName = new QLineEdit(AddContactDialogClass);
        lneNickName->setObjectName(QString::fromUtf8("lneNickName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lneNickName);

        lblGroup = new QLabel(AddContactDialogClass);
        lblGroup->setObjectName(QString::fromUtf8("lblGroup"));
        lblGroup->setTextFormat(Qt::PlainText);

        formLayout->setWidget(2, QFormLayout::LabelRole, lblGroup);

        cmbGroup = new QComboBox(AddContactDialogClass);
        cmbGroup->setObjectName(QString::fromUtf8("cmbGroup"));
        cmbGroup->setEditable(true);
        cmbGroup->setDuplicatesEnabled(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, cmbGroup);

        lblGroupDelim = new QLabel(AddContactDialogClass);
        lblGroupDelim->setObjectName(QString::fromUtf8("lblGroupDelim"));
        lblGroupDelim->setTextFormat(Qt::PlainText);

        formLayout->setWidget(3, QFormLayout::FieldRole, lblGroupDelim);


        lytMainLayout->addLayout(formLayout);

        grbSubscription = new QGroupBox(AddContactDialogClass);
        grbSubscription->setObjectName(QString::fromUtf8("grbSubscription"));
        verticalLayout = new QVBoxLayout(grbSubscription);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        chbSubscribe = new QCheckBox(grbSubscription);
        chbSubscribe->setObjectName(QString::fromUtf8("chbSubscribe"));
        chbSubscribe->setChecked(true);

        verticalLayout->addWidget(chbSubscribe);

        tedMessage = new QTextEdit(grbSubscription);
        tedMessage->setObjectName(QString::fromUtf8("tedMessage"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tedMessage->sizePolicy().hasHeightForWidth());
        tedMessage->setSizePolicy(sizePolicy);
        tedMessage->setAcceptRichText(false);

        verticalLayout->addWidget(tedMessage);


        lytMainLayout->addWidget(grbSubscription);

        dbbButtons = new QDialogButtonBox(AddContactDialogClass);
        dbbButtons->setObjectName(QString::fromUtf8("dbbButtons"));
        dbbButtons->setOrientation(Qt::Horizontal);
        dbbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        lytMainLayout->addWidget(dbbButtons);

#ifndef QT_NO_SHORTCUT
        lblContact->setBuddy(lneContact);
        lblNickName->setBuddy(lneNickName);
        lblGroup->setBuddy(cmbGroup);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lneContact, lneNickName);
        QWidget::setTabOrder(lneNickName, cmbGroup);
        QWidget::setTabOrder(cmbGroup, chbSubscribe);
        QWidget::setTabOrder(chbSubscribe, tedMessage);
        QWidget::setTabOrder(tedMessage, dbbButtons);

        retranslateUi(AddContactDialogClass);
        QObject::connect(chbSubscribe, SIGNAL(clicked(bool)), tedMessage, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AddContactDialogClass);
    } // setupUi

    void retranslateUi(QDialog *AddContactDialogClass)
    {
        lblContact->setText(QApplication::translate("AddContactDialogClass", "Contact:", 0, QApplication::UnicodeUTF8));
        lblNickName->setText(QApplication::translate("AddContactDialogClass", "Nick:", 0, QApplication::UnicodeUTF8));
        lblGroup->setText(QApplication::translate("AddContactDialogClass", "Group:", 0, QApplication::UnicodeUTF8));
        lblGroupDelim->setText(QString());
        grbSubscription->setTitle(QApplication::translate("AddContactDialogClass", "Subscription", 0, QApplication::UnicodeUTF8));
        chbSubscribe->setText(QApplication::translate("AddContactDialogClass", "Subscribe to contact presence", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(AddContactDialogClass);
    } // retranslateUi

};

namespace Ui {
    class AddContactDialogClass: public Ui_AddContactDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONTACTDIALOG_H
