/********************************************************************************
** Form generated from reading UI file 'messagewindow.ui'
**
** Created: Sat Jan 26 02:06:43 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEWINDOW_H
#define UI_MESSAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *vboxLayout;
    QTabWidget *wdtTabs;
    QWidget *tabMessage;
    QVBoxLayout *verticalLayout;
    QWidget *wdtInfo;
    QWidget *wdtReceivers;
    QHBoxLayout *hboxLayout;
    QLabel *lblReceiversLabel;
    QLabel *lblReceivers;
    QWidget *wdtSubject;
    QHBoxLayout *horizontalLayout;
    QLabel *lblSubject;
    QLineEdit *lneSubject;
    QWidget *wdtToolBar;
    QWidget *wdtMessage;
    QWidget *wdtButtons;
    QHBoxLayout *hboxLayout1;
    QPushButton *pbtReply;
    QPushButton *pbtForward;
    QPushButton *pbtChat;
    QSpacerItem *spacerItem;
    QPushButton *pbtSend;
    QPushButton *pbtNext;

    void setupUi(QMainWindow *MessageWindowClass)
    {
        if (MessageWindowClass->objectName().isEmpty())
            MessageWindowClass->setObjectName(QString::fromUtf8("MessageWindowClass"));
        MessageWindowClass->resize(604, 403);
        MessageWindowClass->setIconSize(QSize(16, 16));
        MessageWindowClass->setDockNestingEnabled(true);
        centralWidget = new QWidget(MessageWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        vboxLayout = new QVBoxLayout(centralWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(2, 2, 2, 2);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        wdtTabs = new QTabWidget(centralWidget);
        wdtTabs->setObjectName(QString::fromUtf8("wdtTabs"));
        tabMessage = new QWidget();
        tabMessage->setObjectName(QString::fromUtf8("tabMessage"));
        verticalLayout = new QVBoxLayout(tabMessage);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        wdtInfo = new QWidget(tabMessage);
        wdtInfo->setObjectName(QString::fromUtf8("wdtInfo"));

        verticalLayout->addWidget(wdtInfo);

        wdtReceivers = new QWidget(tabMessage);
        wdtReceivers->setObjectName(QString::fromUtf8("wdtReceivers"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wdtReceivers->sizePolicy().hasHeightForWidth());
        wdtReceivers->setSizePolicy(sizePolicy);
        hboxLayout = new QHBoxLayout(wdtReceivers);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(2, 0, 2, 0);
        lblReceiversLabel = new QLabel(wdtReceivers);
        lblReceiversLabel->setObjectName(QString::fromUtf8("lblReceiversLabel"));
        lblReceiversLabel->setTextFormat(Qt::PlainText);

        hboxLayout->addWidget(lblReceiversLabel);

        lblReceivers = new QLabel(wdtReceivers);
        lblReceivers->setObjectName(QString::fromUtf8("lblReceivers"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblReceivers->sizePolicy().hasHeightForWidth());
        lblReceivers->setSizePolicy(sizePolicy1);
        lblReceivers->setFrameShape(QFrame::Panel);
        lblReceivers->setFrameShadow(QFrame::Sunken);
        lblReceivers->setTextFormat(Qt::PlainText);
        lblReceivers->setWordWrap(true);
        lblReceivers->setMargin(2);

        hboxLayout->addWidget(lblReceivers);


        verticalLayout->addWidget(wdtReceivers);

        wdtSubject = new QWidget(tabMessage);
        wdtSubject->setObjectName(QString::fromUtf8("wdtSubject"));
        horizontalLayout = new QHBoxLayout(wdtSubject);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblSubject = new QLabel(wdtSubject);
        lblSubject->setObjectName(QString::fromUtf8("lblSubject"));
        lblSubject->setTextFormat(Qt::PlainText);

        horizontalLayout->addWidget(lblSubject);

        lneSubject = new QLineEdit(wdtSubject);
        lneSubject->setObjectName(QString::fromUtf8("lneSubject"));

        horizontalLayout->addWidget(lneSubject);

        lneSubject->raise();
        lblSubject->raise();

        verticalLayout->addWidget(wdtSubject);

        wdtToolBar = new QWidget(tabMessage);
        wdtToolBar->setObjectName(QString::fromUtf8("wdtToolBar"));

        verticalLayout->addWidget(wdtToolBar);

        wdtMessage = new QWidget(tabMessage);
        wdtMessage->setObjectName(QString::fromUtf8("wdtMessage"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(wdtMessage->sizePolicy().hasHeightForWidth());
        wdtMessage->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(wdtMessage);

        wdtButtons = new QWidget(tabMessage);
        wdtButtons->setObjectName(QString::fromUtf8("wdtButtons"));
        hboxLayout1 = new QHBoxLayout(wdtButtons);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        pbtReply = new QPushButton(wdtButtons);
        pbtReply->setObjectName(QString::fromUtf8("pbtReply"));

        hboxLayout1->addWidget(pbtReply);

        pbtForward = new QPushButton(wdtButtons);
        pbtForward->setObjectName(QString::fromUtf8("pbtForward"));

        hboxLayout1->addWidget(pbtForward);

        pbtChat = new QPushButton(wdtButtons);
        pbtChat->setObjectName(QString::fromUtf8("pbtChat"));

        hboxLayout1->addWidget(pbtChat);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        pbtSend = new QPushButton(wdtButtons);
        pbtSend->setObjectName(QString::fromUtf8("pbtSend"));

        hboxLayout1->addWidget(pbtSend);

        pbtNext = new QPushButton(wdtButtons);
        pbtNext->setObjectName(QString::fromUtf8("pbtNext"));

        hboxLayout1->addWidget(pbtNext);


        verticalLayout->addWidget(wdtButtons);

        wdtTabs->addTab(tabMessage, QString());

        vboxLayout->addWidget(wdtTabs);

        MessageWindowClass->setCentralWidget(centralWidget);
#ifndef QT_NO_SHORTCUT
        lblSubject->setBuddy(lneSubject);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(wdtTabs, lneSubject);
        QWidget::setTabOrder(lneSubject, pbtNext);
        QWidget::setTabOrder(pbtNext, pbtSend);
        QWidget::setTabOrder(pbtSend, pbtReply);
        QWidget::setTabOrder(pbtReply, pbtChat);

        retranslateUi(MessageWindowClass);

        wdtTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MessageWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MessageWindowClass)
    {
        lblReceiversLabel->setText(QApplication::translate("MessageWindowClass", "To:", 0, QApplication::UnicodeUTF8));
        lblReceivers->setText(QString());
        lblSubject->setText(QApplication::translate("MessageWindowClass", "Subject:", 0, QApplication::UnicodeUTF8));
        pbtReply->setText(QApplication::translate("MessageWindowClass", "Reply", 0, QApplication::UnicodeUTF8));
        pbtForward->setText(QApplication::translate("MessageWindowClass", "Forward", 0, QApplication::UnicodeUTF8));
        pbtChat->setText(QApplication::translate("MessageWindowClass", "Chat", 0, QApplication::UnicodeUTF8));
        pbtSend->setText(QApplication::translate("MessageWindowClass", "Send", 0, QApplication::UnicodeUTF8));
        pbtNext->setText(QApplication::translate("MessageWindowClass", "Next", 0, QApplication::UnicodeUTF8));
        wdtTabs->setTabText(wdtTabs->indexOf(tabMessage), QApplication::translate("MessageWindowClass", "Message", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MessageWindowClass);
    } // retranslateUi

};

namespace Ui {
    class MessageWindowClass: public Ui_MessageWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEWINDOW_H
