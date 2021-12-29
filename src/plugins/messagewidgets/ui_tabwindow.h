/********************************************************************************
** Form generated from reading UI file 'tabwindow.ui'
**
** Created: Sat Jan 26 02:06:43 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABWINDOW_H
#define UI_TABWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "tabwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TabWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *vboxLayout;
    TabWidget *twtTabs;
    QWidget *tab;

    void setupUi(QMainWindow *TabWindowClass)
    {
        if (TabWindowClass->objectName().isEmpty())
            TabWindowClass->setObjectName(QString::fromUtf8("TabWindowClass"));
        TabWindowClass->resize(393, 262);
        centralWidget = new QWidget(TabWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        vboxLayout = new QVBoxLayout(centralWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        twtTabs = new TabWidget(centralWidget);
        twtTabs->setObjectName(QString::fromUtf8("twtTabs"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        twtTabs->addTab(tab, QString());

        vboxLayout->addWidget(twtTabs);

        TabWindowClass->setCentralWidget(centralWidget);

        retranslateUi(TabWindowClass);

        QMetaObject::connectSlotsByName(TabWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *TabWindowClass)
    {
        twtTabs->setTabText(twtTabs->indexOf(tab), QApplication::translate("TabWindowClass", "Tab 1", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(TabWindowClass);
    } // retranslateUi

};

namespace Ui {
    class TabWindowClass: public Ui_TabWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABWINDOW_H
