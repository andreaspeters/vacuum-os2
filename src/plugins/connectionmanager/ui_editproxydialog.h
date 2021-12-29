/********************************************************************************
** Form generated from reading UI file 'editproxydialog.ui'
**
** Created: Sat Jan 26 02:13:17 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROXYDIALOG_H
#define UI_EDITPROXYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditProxyDialogClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *ltwProxyList;
    QWidget *wdtProperties;
    QFormLayout *formLayout;
    QLabel *lblName;
    QLineEdit *lneName;
    QLabel *lblType;
    QComboBox *cmbType;
    QLabel *lblHost;
    QLineEdit *lneHost;
    QLabel *lblPort;
    QSpinBox *spbPort;
    QLabel *lblUser;
    QLineEdit *lneUser;
    QLabel *lblPassword;
    QLineEdit *lnePassword;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblDefault;
    QComboBox *cmbDefault;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbtAdd;
    QPushButton *pbtDelete;
    QDialogButtonBox *btbButtons;

    void setupUi(QDialog *EditProxyDialogClass)
    {
        if (EditProxyDialogClass->objectName().isEmpty())
            EditProxyDialogClass->setObjectName(QString::fromUtf8("EditProxyDialogClass"));
        EditProxyDialogClass->resize(382, 224);
        verticalLayout = new QVBoxLayout(EditProxyDialogClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ltwProxyList = new QListWidget(EditProxyDialogClass);
        ltwProxyList->setObjectName(QString::fromUtf8("ltwProxyList"));

        horizontalLayout_2->addWidget(ltwProxyList);

        wdtProperties = new QWidget(EditProxyDialogClass);
        wdtProperties->setObjectName(QString::fromUtf8("wdtProperties"));
        formLayout = new QFormLayout(wdtProperties);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lblName = new QLabel(wdtProperties);
        lblName->setObjectName(QString::fromUtf8("lblName"));
        lblName->setTextFormat(Qt::PlainText);

        formLayout->setWidget(0, QFormLayout::LabelRole, lblName);

        lneName = new QLineEdit(wdtProperties);
        lneName->setObjectName(QString::fromUtf8("lneName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lneName);

        lblType = new QLabel(wdtProperties);
        lblType->setObjectName(QString::fromUtf8("lblType"));
        lblType->setTextFormat(Qt::PlainText);

        formLayout->setWidget(1, QFormLayout::LabelRole, lblType);

        cmbType = new QComboBox(wdtProperties);
        cmbType->setObjectName(QString::fromUtf8("cmbType"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cmbType);

        lblHost = new QLabel(wdtProperties);
        lblHost->setObjectName(QString::fromUtf8("lblHost"));
        lblHost->setTextFormat(Qt::PlainText);

        formLayout->setWidget(2, QFormLayout::LabelRole, lblHost);

        lneHost = new QLineEdit(wdtProperties);
        lneHost->setObjectName(QString::fromUtf8("lneHost"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lneHost);

        lblPort = new QLabel(wdtProperties);
        lblPort->setObjectName(QString::fromUtf8("lblPort"));
        lblPort->setTextFormat(Qt::PlainText);

        formLayout->setWidget(3, QFormLayout::LabelRole, lblPort);

        spbPort = new QSpinBox(wdtProperties);
        spbPort->setObjectName(QString::fromUtf8("spbPort"));
        spbPort->setMaximum(65535);
        spbPort->setValue(0);

        formLayout->setWidget(3, QFormLayout::FieldRole, spbPort);

        lblUser = new QLabel(wdtProperties);
        lblUser->setObjectName(QString::fromUtf8("lblUser"));
        lblUser->setTextFormat(Qt::PlainText);

        formLayout->setWidget(4, QFormLayout::LabelRole, lblUser);

        lneUser = new QLineEdit(wdtProperties);
        lneUser->setObjectName(QString::fromUtf8("lneUser"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lneUser);

        lblPassword = new QLabel(wdtProperties);
        lblPassword->setObjectName(QString::fromUtf8("lblPassword"));
        lblPassword->setTextFormat(Qt::PlainText);

        formLayout->setWidget(5, QFormLayout::LabelRole, lblPassword);

        lnePassword = new QLineEdit(wdtProperties);
        lnePassword->setObjectName(QString::fromUtf8("lnePassword"));
        lnePassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(5, QFormLayout::FieldRole, lnePassword);


        horizontalLayout_2->addWidget(wdtProperties);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lblDefault = new QLabel(EditProxyDialogClass);
        lblDefault->setObjectName(QString::fromUtf8("lblDefault"));
        lblDefault->setTextFormat(Qt::PlainText);

        horizontalLayout_3->addWidget(lblDefault);

        cmbDefault = new QComboBox(EditProxyDialogClass);
        cmbDefault->setObjectName(QString::fromUtf8("cmbDefault"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbDefault->sizePolicy().hasHeightForWidth());
        cmbDefault->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(cmbDefault);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbtAdd = new QPushButton(EditProxyDialogClass);
        pbtAdd->setObjectName(QString::fromUtf8("pbtAdd"));

        horizontalLayout->addWidget(pbtAdd);

        pbtDelete = new QPushButton(EditProxyDialogClass);
        pbtDelete->setObjectName(QString::fromUtf8("pbtDelete"));

        horizontalLayout->addWidget(pbtDelete);

        btbButtons = new QDialogButtonBox(EditProxyDialogClass);
        btbButtons->setObjectName(QString::fromUtf8("btbButtons"));
        btbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(btbButtons);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        lblName->setBuddy(lneName);
        lblType->setBuddy(cmbType);
        lblHost->setBuddy(lneHost);
        lblPort->setBuddy(spbPort);
        lblUser->setBuddy(lneUser);
        lblPassword->setBuddy(lnePassword);
        lblDefault->setBuddy(cmbDefault);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(ltwProxyList, lneName);
        QWidget::setTabOrder(lneName, cmbType);
        QWidget::setTabOrder(cmbType, lneHost);
        QWidget::setTabOrder(lneHost, spbPort);
        QWidget::setTabOrder(spbPort, lneUser);
        QWidget::setTabOrder(lneUser, lnePassword);
        QWidget::setTabOrder(lnePassword, cmbDefault);
        QWidget::setTabOrder(cmbDefault, pbtAdd);
        QWidget::setTabOrder(pbtAdd, pbtDelete);
        QWidget::setTabOrder(pbtDelete, btbButtons);

        retranslateUi(EditProxyDialogClass);

        QMetaObject::connectSlotsByName(EditProxyDialogClass);
    } // setupUi

    void retranslateUi(QDialog *EditProxyDialogClass)
    {
        EditProxyDialogClass->setWindowTitle(QApplication::translate("EditProxyDialogClass", "Proxy Manager", 0, QApplication::UnicodeUTF8));
        lblName->setText(QApplication::translate("EditProxyDialogClass", "Name:", 0, QApplication::UnicodeUTF8));
        lblType->setText(QApplication::translate("EditProxyDialogClass", "Type:", 0, QApplication::UnicodeUTF8));
        lblHost->setText(QApplication::translate("EditProxyDialogClass", "Host:", 0, QApplication::UnicodeUTF8));
        lblPort->setText(QApplication::translate("EditProxyDialogClass", "Port:", 0, QApplication::UnicodeUTF8));
        lblUser->setText(QApplication::translate("EditProxyDialogClass", "User:", 0, QApplication::UnicodeUTF8));
        lblPassword->setText(QApplication::translate("EditProxyDialogClass", "Password:", 0, QApplication::UnicodeUTF8));
        lblDefault->setText(QApplication::translate("EditProxyDialogClass", "Default Proxy:", 0, QApplication::UnicodeUTF8));
        pbtAdd->setText(QApplication::translate("EditProxyDialogClass", "Add", 0, QApplication::UnicodeUTF8));
        pbtDelete->setText(QApplication::translate("EditProxyDialogClass", "Delete", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditProxyDialogClass: public Ui_EditProxyDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROXYDIALOG_H
