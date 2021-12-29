/********************************************************************************
** Form generated from reading UI file 'accountoptions.ui'
**
** Created: Sat Jan 26 02:06:05 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTOPTIONS_H
#define UI_ACCOUNTOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountOptionsClass
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *lblName;
    QLineEdit *lneName;
    QGroupBox *grbAccount;
    QVBoxLayout *vboxLayout1;
    QGridLayout *gridLayout;
    QLineEdit *lneResource;
    QLabel *lblExampleJabberId;
    QLabel *lblJabberId;
    QLineEdit *lneJabberId;
    QLabel *lblResource;
    QLabel *lblPassword;
    QLineEdit *lnePassword;
    QLabel *lblExampleResource;

    void setupUi(QWidget *AccountOptionsClass)
    {
        if (AccountOptionsClass->objectName().isEmpty())
            AccountOptionsClass->setObjectName(QString::fromUtf8("AccountOptionsClass"));
        AccountOptionsClass->resize(394, 165);
        vboxLayout = new QVBoxLayout(AccountOptionsClass);
        vboxLayout->setSpacing(3);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(3);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lblName = new QLabel(AccountOptionsClass);
        lblName->setObjectName(QString::fromUtf8("lblName"));
        lblName->setTextFormat(Qt::PlainText);

        hboxLayout->addWidget(lblName);

        lneName = new QLineEdit(AccountOptionsClass);
        lneName->setObjectName(QString::fromUtf8("lneName"));

        hboxLayout->addWidget(lneName);


        vboxLayout->addLayout(hboxLayout);

        grbAccount = new QGroupBox(AccountOptionsClass);
        grbAccount->setObjectName(QString::fromUtf8("grbAccount"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(grbAccount->sizePolicy().hasHeightForWidth());
        grbAccount->setSizePolicy(sizePolicy);
        vboxLayout1 = new QVBoxLayout(grbAccount);
        vboxLayout1->setSpacing(3);
        vboxLayout1->setContentsMargins(4, 4, 4, 4);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lneResource = new QLineEdit(grbAccount);
        lneResource->setObjectName(QString::fromUtf8("lneResource"));

        gridLayout->addWidget(lneResource, 2, 1, 1, 1);

        lblExampleJabberId = new QLabel(grbAccount);
        lblExampleJabberId->setObjectName(QString::fromUtf8("lblExampleJabberId"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblExampleJabberId->sizePolicy().hasHeightForWidth());
        lblExampleJabberId->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(8);
        font.setItalic(true);
        lblExampleJabberId->setFont(font);
        lblExampleJabberId->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblExampleJabberId, 1, 1, 1, 1);

        lblJabberId = new QLabel(grbAccount);
        lblJabberId->setObjectName(QString::fromUtf8("lblJabberId"));
        lblJabberId->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblJabberId, 0, 0, 1, 1);

        lneJabberId = new QLineEdit(grbAccount);
        lneJabberId->setObjectName(QString::fromUtf8("lneJabberId"));

        gridLayout->addWidget(lneJabberId, 0, 1, 1, 1);

        lblResource = new QLabel(grbAccount);
        lblResource->setObjectName(QString::fromUtf8("lblResource"));
        lblResource->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblResource, 2, 0, 1, 1);

        lblPassword = new QLabel(grbAccount);
        lblPassword->setObjectName(QString::fromUtf8("lblPassword"));
        lblPassword->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblPassword, 4, 0, 1, 1);

        lnePassword = new QLineEdit(grbAccount);
        lnePassword->setObjectName(QString::fromUtf8("lnePassword"));
        lnePassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lnePassword, 4, 1, 1, 1);

        lblExampleResource = new QLabel(grbAccount);
        lblExampleResource->setObjectName(QString::fromUtf8("lblExampleResource"));
        sizePolicy1.setHeightForWidth(lblExampleResource->sizePolicy().hasHeightForWidth());
        lblExampleResource->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setItalic(true);
        lblExampleResource->setFont(font1);
        lblExampleResource->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblExampleResource, 3, 1, 1, 1);


        vboxLayout1->addLayout(gridLayout);


        vboxLayout->addWidget(grbAccount);

#ifndef QT_NO_SHORTCUT
        lblName->setBuddy(lneName);
        lblJabberId->setBuddy(lneJabberId);
        lblResource->setBuddy(lneResource);
        lblPassword->setBuddy(lnePassword);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lneName, lneJabberId);
        QWidget::setTabOrder(lneJabberId, lneResource);
        QWidget::setTabOrder(lneResource, lnePassword);

        retranslateUi(AccountOptionsClass);

        QMetaObject::connectSlotsByName(AccountOptionsClass);
    } // setupUi

    void retranslateUi(QWidget *AccountOptionsClass)
    {
        lblName->setText(QApplication::translate("AccountOptionsClass", "Account Name:", 0, QApplication::UnicodeUTF8));
        grbAccount->setTitle(QApplication::translate("AccountOptionsClass", "Account", 0, QApplication::UnicodeUTF8));
        lblExampleJabberId->setText(QApplication::translate("AccountOptionsClass", "Example: romeo@example.net", 0, QApplication::UnicodeUTF8));
        lblJabberId->setText(QApplication::translate("AccountOptionsClass", "Jabber ID:", 0, QApplication::UnicodeUTF8));
        lblResource->setText(QApplication::translate("AccountOptionsClass", "Resource:", 0, QApplication::UnicodeUTF8));
        lblPassword->setText(QApplication::translate("AccountOptionsClass", "Password:", 0, QApplication::UnicodeUTF8));
        lblExampleResource->setText(QApplication::translate("AccountOptionsClass", "Example: home; office; notebook", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(AccountOptionsClass);
    } // retranslateUi

};

namespace Ui {
    class AccountOptionsClass: public Ui_AccountOptionsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTOPTIONS_H
