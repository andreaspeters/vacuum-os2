/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created: Sat Jan 26 02:18:17 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialogClass
{
public:
    QVBoxLayout *vboxLayout;
    QStackedWidget *stwForm;
    QWidget *spgForm;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QLabel *lblInstuctions;
    QLabel *lblUserName;
    QLineEdit *lneUserName;
    QLabel *lblPassword;
    QLineEdit *lnePassword;
    QLabel *lblEmail;
    QLineEdit *lneEMail;
    QSpacerItem *spacerItem1;
    QWidget *spgDataForm;
    QFrame *frame;
    QDialogButtonBox *dbbButtons;

    void setupUi(QDialog *RegisterDialogClass)
    {
        if (RegisterDialogClass->objectName().isEmpty())
            RegisterDialogClass->setObjectName(QString::fromUtf8("RegisterDialogClass"));
        RegisterDialogClass->resize(500, 325);
        vboxLayout = new QVBoxLayout(RegisterDialogClass);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(5, 5, 5, 5);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        stwForm = new QStackedWidget(RegisterDialogClass);
        stwForm->setObjectName(QString::fromUtf8("stwForm"));
        spgForm = new QWidget();
        spgForm->setObjectName(QString::fromUtf8("spgForm"));
        gridLayout = new QGridLayout(spgForm);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 0, 0, 1, 1);

        lblInstuctions = new QLabel(spgForm);
        lblInstuctions->setObjectName(QString::fromUtf8("lblInstuctions"));
        lblInstuctions->setTextFormat(Qt::PlainText);
        lblInstuctions->setAlignment(Qt::AlignCenter);
        lblInstuctions->setWordWrap(true);

        gridLayout->addWidget(lblInstuctions, 1, 0, 1, 2);

        lblUserName = new QLabel(spgForm);
        lblUserName->setObjectName(QString::fromUtf8("lblUserName"));
        lblUserName->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblUserName, 2, 0, 1, 1);

        lneUserName = new QLineEdit(spgForm);
        lneUserName->setObjectName(QString::fromUtf8("lneUserName"));

        gridLayout->addWidget(lneUserName, 2, 1, 1, 1);

        lblPassword = new QLabel(spgForm);
        lblPassword->setObjectName(QString::fromUtf8("lblPassword"));
        lblPassword->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblPassword, 3, 0, 1, 1);

        lnePassword = new QLineEdit(spgForm);
        lnePassword->setObjectName(QString::fromUtf8("lnePassword"));
        lnePassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lnePassword, 3, 1, 1, 1);

        lblEmail = new QLabel(spgForm);
        lblEmail->setObjectName(QString::fromUtf8("lblEmail"));
        lblEmail->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblEmail, 4, 0, 1, 1);

        lneEMail = new QLineEdit(spgForm);
        lneEMail->setObjectName(QString::fromUtf8("lneEMail"));

        gridLayout->addWidget(lneEMail, 4, 1, 1, 1);

        spacerItem1 = new QSpacerItem(52, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 5, 0, 1, 1);

        stwForm->addWidget(spgForm);
        spgDataForm = new QWidget();
        spgDataForm->setObjectName(QString::fromUtf8("spgDataForm"));
        stwForm->addWidget(spgDataForm);

        vboxLayout->addWidget(stwForm);

        frame = new QFrame(RegisterDialogClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Raised);

        vboxLayout->addWidget(frame);

        dbbButtons = new QDialogButtonBox(RegisterDialogClass);
        dbbButtons->setObjectName(QString::fromUtf8("dbbButtons"));
        dbbButtons->setStandardButtons(QDialogButtonBox::Cancel);

        vboxLayout->addWidget(dbbButtons);

#ifndef QT_NO_SHORTCUT
        lblUserName->setBuddy(lneUserName);
        lblPassword->setBuddy(lnePassword);
        lblEmail->setBuddy(lneEMail);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lneUserName, lnePassword);
        QWidget::setTabOrder(lnePassword, lneEMail);
        QWidget::setTabOrder(lneEMail, dbbButtons);

        retranslateUi(RegisterDialogClass);

        stwForm->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RegisterDialogClass);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialogClass)
    {
        lblUserName->setText(QApplication::translate("RegisterDialogClass", "Username:", 0, QApplication::UnicodeUTF8));
        lblPassword->setText(QApplication::translate("RegisterDialogClass", "Password:", 0, QApplication::UnicodeUTF8));
        lblEmail->setText(QApplication::translate("RegisterDialogClass", "Email:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(RegisterDialogClass);
    } // retranslateUi

};

namespace Ui {
    class RegisterDialogClass: public Ui_RegisterDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
