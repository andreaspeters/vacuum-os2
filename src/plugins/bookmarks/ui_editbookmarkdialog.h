/********************************************************************************
** Form generated from reading UI file 'editbookmarkdialog.ui'
**
** Created: Sat Jan 26 02:17:50 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITBOOKMARKDIALOG_H
#define UI_EDITBOOKMARKDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditBookmarkDialogClass
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *lblName;
    QLineEdit *lneName;
    QGroupBox *grbConference;
    QGridLayout *gridLayout;
    QLabel *lblRoomJid;
    QLineEdit *lneRoom;
    QLabel *lblNick;
    QLineEdit *lneNick;
    QLabel *lblPassword;
    QLineEdit *lnePassword;
    QCheckBox *chbAutoJoin;
    QGroupBox *grbURL;
    QHBoxLayout *hboxLayout1;
    QLabel *lblUrl;
    QLineEdit *lneUrl;
    QDialogButtonBox *bbxButtons;

    void setupUi(QDialog *EditBookmarkDialogClass)
    {
        if (EditBookmarkDialogClass->objectName().isEmpty())
            EditBookmarkDialogClass->setObjectName(QString::fromUtf8("EditBookmarkDialogClass"));
        EditBookmarkDialogClass->resize(448, 255);
        vboxLayout = new QVBoxLayout(EditBookmarkDialogClass);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(3, 3, 3, 3);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lblName = new QLabel(EditBookmarkDialogClass);
        lblName->setObjectName(QString::fromUtf8("lblName"));
        lblName->setTextFormat(Qt::PlainText);

        hboxLayout->addWidget(lblName);

        lneName = new QLineEdit(EditBookmarkDialogClass);
        lneName->setObjectName(QString::fromUtf8("lneName"));

        hboxLayout->addWidget(lneName);


        vboxLayout->addLayout(hboxLayout);

        grbConference = new QGroupBox(EditBookmarkDialogClass);
        grbConference->setObjectName(QString::fromUtf8("grbConference"));
        grbConference->setCheckable(true);
        gridLayout = new QGridLayout(grbConference);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblRoomJid = new QLabel(grbConference);
        lblRoomJid->setObjectName(QString::fromUtf8("lblRoomJid"));
        lblRoomJid->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblRoomJid, 0, 0, 1, 1);

        lneRoom = new QLineEdit(grbConference);
        lneRoom->setObjectName(QString::fromUtf8("lneRoom"));

        gridLayout->addWidget(lneRoom, 0, 1, 1, 1);

        lblNick = new QLabel(grbConference);
        lblNick->setObjectName(QString::fromUtf8("lblNick"));
        lblNick->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblNick, 1, 0, 1, 1);

        lneNick = new QLineEdit(grbConference);
        lneNick->setObjectName(QString::fromUtf8("lneNick"));

        gridLayout->addWidget(lneNick, 1, 1, 1, 1);

        lblPassword = new QLabel(grbConference);
        lblPassword->setObjectName(QString::fromUtf8("lblPassword"));
        lblPassword->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblPassword, 2, 0, 1, 1);

        lnePassword = new QLineEdit(grbConference);
        lnePassword->setObjectName(QString::fromUtf8("lnePassword"));
        lnePassword->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout->addWidget(lnePassword, 2, 1, 1, 1);

        chbAutoJoin = new QCheckBox(grbConference);
        chbAutoJoin->setObjectName(QString::fromUtf8("chbAutoJoin"));

        gridLayout->addWidget(chbAutoJoin, 3, 0, 1, 2);


        vboxLayout->addWidget(grbConference);

        grbURL = new QGroupBox(EditBookmarkDialogClass);
        grbURL->setObjectName(QString::fromUtf8("grbURL"));
        grbURL->setCheckable(true);
        grbURL->setChecked(false);
        hboxLayout1 = new QHBoxLayout(grbURL);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(11, 11, 11, 11);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        lblUrl = new QLabel(grbURL);
        lblUrl->setObjectName(QString::fromUtf8("lblUrl"));
        lblUrl->setTextFormat(Qt::PlainText);

        hboxLayout1->addWidget(lblUrl);

        lneUrl = new QLineEdit(grbURL);
        lneUrl->setObjectName(QString::fromUtf8("lneUrl"));

        hboxLayout1->addWidget(lneUrl);


        vboxLayout->addWidget(grbURL);

        bbxButtons = new QDialogButtonBox(EditBookmarkDialogClass);
        bbxButtons->setObjectName(QString::fromUtf8("bbxButtons"));
        bbxButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(bbxButtons);

        QWidget::setTabOrder(lneName, grbConference);
        QWidget::setTabOrder(grbConference, lneRoom);
        QWidget::setTabOrder(lneRoom, lneNick);
        QWidget::setTabOrder(lneNick, lnePassword);
        QWidget::setTabOrder(lnePassword, chbAutoJoin);
        QWidget::setTabOrder(chbAutoJoin, grbURL);
        QWidget::setTabOrder(grbURL, lneUrl);
        QWidget::setTabOrder(lneUrl, bbxButtons);

        retranslateUi(EditBookmarkDialogClass);
        QObject::connect(bbxButtons, SIGNAL(rejected()), EditBookmarkDialogClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditBookmarkDialogClass);
    } // setupUi

    void retranslateUi(QDialog *EditBookmarkDialogClass)
    {
        EditBookmarkDialogClass->setWindowTitle(QApplication::translate("EditBookmarkDialogClass", "Edit bookmark", 0, QApplication::UnicodeUTF8));
        lblName->setText(QApplication::translate("EditBookmarkDialogClass", "Name:", 0, QApplication::UnicodeUTF8));
        grbConference->setTitle(QApplication::translate("EditBookmarkDialogClass", "Conference bookmark", 0, QApplication::UnicodeUTF8));
        lblRoomJid->setText(QApplication::translate("EditBookmarkDialogClass", "Room:", 0, QApplication::UnicodeUTF8));
        lblNick->setText(QApplication::translate("EditBookmarkDialogClass", "Nick:", 0, QApplication::UnicodeUTF8));
        lblPassword->setText(QApplication::translate("EditBookmarkDialogClass", "Password:", 0, QApplication::UnicodeUTF8));
        chbAutoJoin->setText(QApplication::translate("EditBookmarkDialogClass", "Auto join", 0, QApplication::UnicodeUTF8));
        grbURL->setTitle(QApplication::translate("EditBookmarkDialogClass", "URL bookmark", 0, QApplication::UnicodeUTF8));
        lblUrl->setText(QApplication::translate("EditBookmarkDialogClass", "URL:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditBookmarkDialogClass: public Ui_EditBookmarkDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITBOOKMARKDIALOG_H
