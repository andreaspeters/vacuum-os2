/********************************************************************************
** Form generated from reading UI file 'chatwindow.ui'
**
** Created: Sat Jan 26 02:06:43 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *wdtInfo;
    QWidget *wdtView;
    QWidget *wdtToolBar;
    QWidget *wdtEdit;

    void setupUi(QMainWindow *ChatWindowClass)
    {
        if (ChatWindowClass->objectName().isEmpty())
            ChatWindowClass->setObjectName(QString::fromUtf8("ChatWindowClass"));
        ChatWindowClass->resize(445, 383);
        centralWidget = new QWidget(ChatWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        wdtInfo = new QWidget(centralWidget);
        wdtInfo->setObjectName(QString::fromUtf8("wdtInfo"));

        verticalLayout->addWidget(wdtInfo);

        wdtView = new QWidget(centralWidget);
        wdtView->setObjectName(QString::fromUtf8("wdtView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wdtView->sizePolicy().hasHeightForWidth());
        wdtView->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(wdtView);

        wdtToolBar = new QWidget(centralWidget);
        wdtToolBar->setObjectName(QString::fromUtf8("wdtToolBar"));

        verticalLayout->addWidget(wdtToolBar);

        wdtEdit = new QWidget(centralWidget);
        wdtEdit->setObjectName(QString::fromUtf8("wdtEdit"));

        verticalLayout->addWidget(wdtEdit);

        ChatWindowClass->setCentralWidget(centralWidget);

        retranslateUi(ChatWindowClass);

        QMetaObject::connectSlotsByName(ChatWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *ChatWindowClass)
    {
        Q_UNUSED(ChatWindowClass);
    } // retranslateUi

};

namespace Ui {
    class ChatWindowClass: public Ui_ChatWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
