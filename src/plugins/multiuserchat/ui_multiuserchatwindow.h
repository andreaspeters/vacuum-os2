/********************************************************************************
** Form generated from reading UI file 'multiuserchatwindow.ui'
**
** Created: Sat Jan 26 02:15:37 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIUSERCHATWINDOW_H
#define UI_MULTIUSERCHATWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultiUserChatWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblRoom;
    QLabel *lblAccount;
    QSplitter *sprHSplitter;
    QWidget *wdtView;
    QListView *ltvUsers;
    QWidget *wdtToolBar;
    QWidget *wdtEdit;

    void setupUi(QMainWindow *MultiUserChatWindowClass)
    {
        if (MultiUserChatWindowClass->objectName().isEmpty())
            MultiUserChatWindowClass->setObjectName(QString::fromUtf8("MultiUserChatWindowClass"));
        MultiUserChatWindowClass->resize(552, 353);
        centralWidget = new QWidget(MultiUserChatWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblRoom = new QLabel(widget);
        lblRoom->setObjectName(QString::fromUtf8("lblRoom"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblRoom->sizePolicy().hasHeightForWidth());
        lblRoom->setSizePolicy(sizePolicy1);
        lblRoom->setTextFormat(Qt::RichText);
        lblRoom->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(lblRoom);

        lblAccount = new QLabel(widget);
        lblAccount->setObjectName(QString::fromUtf8("lblAccount"));
        lblAccount->setTextFormat(Qt::PlainText);
        lblAccount->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(lblAccount);


        verticalLayout->addWidget(widget);

        sprHSplitter = new QSplitter(centralWidget);
        sprHSplitter->setObjectName(QString::fromUtf8("sprHSplitter"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sprHSplitter->sizePolicy().hasHeightForWidth());
        sprHSplitter->setSizePolicy(sizePolicy2);
        sprHSplitter->setOrientation(Qt::Horizontal);
        sprHSplitter->setChildrenCollapsible(false);
        wdtView = new QWidget(sprHSplitter);
        wdtView->setObjectName(QString::fromUtf8("wdtView"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(wdtView->sizePolicy().hasHeightForWidth());
        wdtView->setSizePolicy(sizePolicy3);
        sprHSplitter->addWidget(wdtView);
        ltvUsers = new QListView(sprHSplitter);
        ltvUsers->setObjectName(QString::fromUtf8("ltvUsers"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ltvUsers->sizePolicy().hasHeightForWidth());
        ltvUsers->setSizePolicy(sizePolicy4);
        ltvUsers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ltvUsers->setUniformItemSizes(true);
        sprHSplitter->addWidget(ltvUsers);

        verticalLayout->addWidget(sprHSplitter);

        wdtToolBar = new QWidget(centralWidget);
        wdtToolBar->setObjectName(QString::fromUtf8("wdtToolBar"));

        verticalLayout->addWidget(wdtToolBar);

        wdtEdit = new QWidget(centralWidget);
        wdtEdit->setObjectName(QString::fromUtf8("wdtEdit"));

        verticalLayout->addWidget(wdtEdit);

        MultiUserChatWindowClass->setCentralWidget(centralWidget);

        retranslateUi(MultiUserChatWindowClass);

        QMetaObject::connectSlotsByName(MultiUserChatWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MultiUserChatWindowClass)
    {
        Q_UNUSED(MultiUserChatWindowClass);
    } // retranslateUi

};

namespace Ui {
    class MultiUserChatWindowClass: public Ui_MultiUserChatWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIUSERCHATWINDOW_H
