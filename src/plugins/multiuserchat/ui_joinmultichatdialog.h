/********************************************************************************
** Form generated from reading UI file 'joinmultichatdialog.ui'
**
** Created: Sat Jan 26 02:15:37 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINMULTICHATDIALOG_H
#define UI_JOINMULTICHATDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_JoinMultiChatDialogClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hltIdentity;
    QLabel *lblIdentity;
    QComboBox *cmbStreamJid;
    QFrame *line;
    QHBoxLayout *hltHistory;
    QLabel *lblHistory;
    QComboBox *cmbHistory;
    QToolButton *tlbDeleteHistory;
    QGroupBox *grbConference;
    QGridLayout *gridLayout;
    QLabel *lblRoom;
    QLineEdit *lneRoom;
    QLabel *lblService;
    QLineEdit *lneService;
    QLabel *lblNick;
    QLineEdit *lneNick;
    QToolButton *tlbResolveNick;
    QLabel *lblPassword;
    QLineEdit *lnePassword;
    QDialogButtonBox *btbButtons;

    void setupUi(QDialog *JoinMultiChatDialogClass)
    {
        if (JoinMultiChatDialogClass->objectName().isEmpty())
            JoinMultiChatDialogClass->setObjectName(QString::fromUtf8("JoinMultiChatDialogClass"));
        JoinMultiChatDialogClass->resize(378, 247);
        verticalLayout = new QVBoxLayout(JoinMultiChatDialogClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hltIdentity = new QHBoxLayout();
        hltIdentity->setSpacing(6);
        hltIdentity->setObjectName(QString::fromUtf8("hltIdentity"));
        lblIdentity = new QLabel(JoinMultiChatDialogClass);
        lblIdentity->setObjectName(QString::fromUtf8("lblIdentity"));
        lblIdentity->setTextFormat(Qt::PlainText);

        hltIdentity->addWidget(lblIdentity);

        cmbStreamJid = new QComboBox(JoinMultiChatDialogClass);
        cmbStreamJid->setObjectName(QString::fromUtf8("cmbStreamJid"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbStreamJid->sizePolicy().hasHeightForWidth());
        cmbStreamJid->setSizePolicy(sizePolicy);
        cmbStreamJid->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        hltIdentity->addWidget(cmbStreamJid);


        verticalLayout->addLayout(hltIdentity);

        line = new QFrame(JoinMultiChatDialogClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        hltHistory = new QHBoxLayout();
        hltHistory->setSpacing(6);
        hltHistory->setObjectName(QString::fromUtf8("hltHistory"));
        lblHistory = new QLabel(JoinMultiChatDialogClass);
        lblHistory->setObjectName(QString::fromUtf8("lblHistory"));
        lblHistory->setTextFormat(Qt::PlainText);

        hltHistory->addWidget(lblHistory);

        cmbHistory = new QComboBox(JoinMultiChatDialogClass);
        cmbHistory->setObjectName(QString::fromUtf8("cmbHistory"));
        sizePolicy.setHeightForWidth(cmbHistory->sizePolicy().hasHeightForWidth());
        cmbHistory->setSizePolicy(sizePolicy);
        cmbHistory->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        hltHistory->addWidget(cmbHistory);

        tlbDeleteHistory = new QToolButton(JoinMultiChatDialogClass);
        tlbDeleteHistory->setObjectName(QString::fromUtf8("tlbDeleteHistory"));
        tlbDeleteHistory->setAutoRaise(true);

        hltHistory->addWidget(tlbDeleteHistory);


        verticalLayout->addLayout(hltHistory);

        grbConference = new QGroupBox(JoinMultiChatDialogClass);
        grbConference->setObjectName(QString::fromUtf8("grbConference"));
        gridLayout = new QGridLayout(grbConference);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblRoom = new QLabel(grbConference);
        lblRoom->setObjectName(QString::fromUtf8("lblRoom"));

        gridLayout->addWidget(lblRoom, 0, 0, 1, 1);

        lneRoom = new QLineEdit(grbConference);
        lneRoom->setObjectName(QString::fromUtf8("lneRoom"));

        gridLayout->addWidget(lneRoom, 0, 1, 1, 2);

        lblService = new QLabel(grbConference);
        lblService->setObjectName(QString::fromUtf8("lblService"));
        lblService->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblService, 1, 0, 1, 1);

        lneService = new QLineEdit(grbConference);
        lneService->setObjectName(QString::fromUtf8("lneService"));

        gridLayout->addWidget(lneService, 1, 1, 1, 2);

        lblNick = new QLabel(grbConference);
        lblNick->setObjectName(QString::fromUtf8("lblNick"));
        lblNick->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblNick, 2, 0, 1, 1);

        lneNick = new QLineEdit(grbConference);
        lneNick->setObjectName(QString::fromUtf8("lneNick"));

        gridLayout->addWidget(lneNick, 2, 1, 1, 1);

        tlbResolveNick = new QToolButton(grbConference);
        tlbResolveNick->setObjectName(QString::fromUtf8("tlbResolveNick"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tlbResolveNick->sizePolicy().hasHeightForWidth());
        tlbResolveNick->setSizePolicy(sizePolicy1);
        tlbResolveNick->setAutoRaise(true);

        gridLayout->addWidget(tlbResolveNick, 2, 2, 1, 1);

        lblPassword = new QLabel(grbConference);
        lblPassword->setObjectName(QString::fromUtf8("lblPassword"));
        lblPassword->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblPassword, 3, 0, 1, 1);

        lnePassword = new QLineEdit(grbConference);
        lnePassword->setObjectName(QString::fromUtf8("lnePassword"));
        lnePassword->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout->addWidget(lnePassword, 3, 1, 1, 2);


        verticalLayout->addWidget(grbConference);

        btbButtons = new QDialogButtonBox(JoinMultiChatDialogClass);
        btbButtons->setObjectName(QString::fromUtf8("btbButtons"));
        btbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(btbButtons);

#ifndef QT_NO_SHORTCUT
        lblIdentity->setBuddy(cmbStreamJid);
        lblHistory->setBuddy(cmbHistory);
        lblService->setBuddy(lneService);
        lblNick->setBuddy(lneNick);
        lblPassword->setBuddy(lnePassword);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lneRoom, lneService);
        QWidget::setTabOrder(lneService, lneNick);
        QWidget::setTabOrder(lneNick, tlbResolveNick);
        QWidget::setTabOrder(tlbResolveNick, lnePassword);
        QWidget::setTabOrder(lnePassword, btbButtons);
        QWidget::setTabOrder(btbButtons, cmbStreamJid);
        QWidget::setTabOrder(cmbStreamJid, cmbHistory);
        QWidget::setTabOrder(cmbHistory, tlbDeleteHistory);

        retranslateUi(JoinMultiChatDialogClass);
        QObject::connect(btbButtons, SIGNAL(rejected()), JoinMultiChatDialogClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(JoinMultiChatDialogClass);
    } // setupUi

    void retranslateUi(QDialog *JoinMultiChatDialogClass)
    {
        lblIdentity->setText(QApplication::translate("JoinMultiChatDialogClass", "Identity:", 0, QApplication::UnicodeUTF8));
        lblHistory->setText(QApplication::translate("JoinMultiChatDialogClass", "History:", 0, QApplication::UnicodeUTF8));
        tlbDeleteHistory->setText(QApplication::translate("JoinMultiChatDialogClass", "Delete", 0, QApplication::UnicodeUTF8));
        grbConference->setTitle(QApplication::translate("JoinMultiChatDialogClass", "Conference Parameters", 0, QApplication::UnicodeUTF8));
        lblRoom->setText(QApplication::translate("JoinMultiChatDialogClass", "Room:", 0, QApplication::UnicodeUTF8));
        lblService->setText(QApplication::translate("JoinMultiChatDialogClass", "Service:", 0, QApplication::UnicodeUTF8));
        lblNick->setText(QApplication::translate("JoinMultiChatDialogClass", "Nick:", 0, QApplication::UnicodeUTF8));
        tlbResolveNick->setText(QApplication::translate("JoinMultiChatDialogClass", "Resolve", 0, QApplication::UnicodeUTF8));
        lblPassword->setText(QApplication::translate("JoinMultiChatDialogClass", "Password:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(JoinMultiChatDialogClass);
    } // retranslateUi

};

namespace Ui {
    class JoinMultiChatDialogClass: public Ui_JoinMultiChatDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINMULTICHATDIALOG_H
