/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created: Sat Jan 26 01:40:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDialogClass
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *lblProfile;
    QComboBox *cmbProfile;
    QLabel *lblPassword;
    QLineEdit *lnePassword;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbtProfiles;
    QDialogButtonBox *dbbButtons;

    void setupUi(QDialog *LoginDialogClass)
    {
        if (LoginDialogClass->objectName().isEmpty())
            LoginDialogClass->setObjectName(QString::fromUtf8("LoginDialogClass"));
        LoginDialogClass->resize(292, 101);
        verticalLayout = new QVBoxLayout(LoginDialogClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lblProfile = new QLabel(LoginDialogClass);
        lblProfile->setObjectName(QString::fromUtf8("lblProfile"));
        lblProfile->setTextFormat(Qt::PlainText);

        formLayout->setWidget(0, QFormLayout::LabelRole, lblProfile);

        cmbProfile = new QComboBox(LoginDialogClass);
        cmbProfile->setObjectName(QString::fromUtf8("cmbProfile"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cmbProfile);

        lblPassword = new QLabel(LoginDialogClass);
        lblPassword->setObjectName(QString::fromUtf8("lblPassword"));
        lblPassword->setTextFormat(Qt::PlainText);

        formLayout->setWidget(1, QFormLayout::LabelRole, lblPassword);

        lnePassword = new QLineEdit(LoginDialogClass);
        lnePassword->setObjectName(QString::fromUtf8("lnePassword"));
        lnePassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lnePassword);


        verticalLayout->addLayout(formLayout);

        line = new QFrame(LoginDialogClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbtProfiles = new QPushButton(LoginDialogClass);
        pbtProfiles->setObjectName(QString::fromUtf8("pbtProfiles"));

        horizontalLayout->addWidget(pbtProfiles);

        dbbButtons = new QDialogButtonBox(LoginDialogClass);
        dbbButtons->setObjectName(QString::fromUtf8("dbbButtons"));
        dbbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open);

        horizontalLayout->addWidget(dbbButtons);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(cmbProfile, lnePassword);
        QWidget::setTabOrder(lnePassword, pbtProfiles);
        QWidget::setTabOrder(pbtProfiles, dbbButtons);

        retranslateUi(LoginDialogClass);

        QMetaObject::connectSlotsByName(LoginDialogClass);
    } // setupUi

    void retranslateUi(QDialog *LoginDialogClass)
    {
        LoginDialogClass->setWindowTitle(QApplication::translate("LoginDialogClass", "Open Profile", 0, QApplication::UnicodeUTF8));
        lblProfile->setText(QApplication::translate("LoginDialogClass", "Profile:", 0, QApplication::UnicodeUTF8));
        lblPassword->setText(QApplication::translate("LoginDialogClass", "Password:", 0, QApplication::UnicodeUTF8));
        pbtProfiles->setText(QApplication::translate("LoginDialogClass", "Profiles", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoginDialogClass: public Ui_LoginDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
