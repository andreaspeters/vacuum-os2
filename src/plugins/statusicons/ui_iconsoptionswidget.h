/********************************************************************************
** Form generated from reading UI file 'iconsoptionswidget.ui'
**
** Created: Sat Jan 26 02:14:19 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICONSOPTIONSWIDGET_H
#define UI_ICONSOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IconsOptionsWidgetClass
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tabDefault;
    QVBoxLayout *vboxLayout1;
    QListWidget *lwtDefaultIconset;
    QWidget *tabContact;
    QVBoxLayout *vboxLayout2;
    QTableWidget *twtDefaultRules;
    QWidget *tabService;
    QVBoxLayout *vboxLayout3;
    QTableWidget *twtUserRules;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *pbtAddUserRule;
    QPushButton *pbtDeleteUserRule;

    void setupUi(QWidget *IconsOptionsWidgetClass)
    {
        if (IconsOptionsWidgetClass->objectName().isEmpty())
            IconsOptionsWidgetClass->setObjectName(QString::fromUtf8("IconsOptionsWidgetClass"));
        IconsOptionsWidgetClass->resize(472, 307);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(IconsOptionsWidgetClass->sizePolicy().hasHeightForWidth());
        IconsOptionsWidgetClass->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(IconsOptionsWidgetClass);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(IconsOptionsWidgetClass);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabDefault = new QWidget();
        tabDefault->setObjectName(QString::fromUtf8("tabDefault"));
        vboxLayout1 = new QVBoxLayout(tabDefault);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        lwtDefaultIconset = new QListWidget(tabDefault);
        lwtDefaultIconset->setObjectName(QString::fromUtf8("lwtDefaultIconset"));
        lwtDefaultIconset->setSelectionMode(QAbstractItemView::NoSelection);
        lwtDefaultIconset->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

        vboxLayout1->addWidget(lwtDefaultIconset);

        tabWidget->addTab(tabDefault, QString());
        tabContact = new QWidget();
        tabContact->setObjectName(QString::fromUtf8("tabContact"));
        vboxLayout2 = new QVBoxLayout(tabContact);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(11, 11, 11, 11);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        twtDefaultRules = new QTableWidget(tabContact);
        if (twtDefaultRules->columnCount() < 2)
            twtDefaultRules->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twtDefaultRules->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twtDefaultRules->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        twtDefaultRules->setObjectName(QString::fromUtf8("twtDefaultRules"));
        twtDefaultRules->setEditTriggers(QAbstractItemView::NoEditTriggers);
        twtDefaultRules->setSelectionMode(QAbstractItemView::NoSelection);
        twtDefaultRules->setColumnCount(2);

        vboxLayout2->addWidget(twtDefaultRules);

        tabWidget->addTab(tabContact, QString());
        tabService = new QWidget();
        tabService->setObjectName(QString::fromUtf8("tabService"));
        vboxLayout3 = new QVBoxLayout(tabService);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setContentsMargins(11, 11, 11, 11);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        twtUserRules = new QTableWidget(tabService);
        if (twtUserRules->columnCount() < 2)
            twtUserRules->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twtUserRules->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twtUserRules->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        twtUserRules->setObjectName(QString::fromUtf8("twtUserRules"));
        twtUserRules->setSelectionMode(QAbstractItemView::SingleSelection);
        twtUserRules->setSelectionBehavior(QAbstractItemView::SelectRows);
        twtUserRules->setColumnCount(2);

        vboxLayout3->addWidget(twtUserRules);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        pbtAddUserRule = new QPushButton(tabService);
        pbtAddUserRule->setObjectName(QString::fromUtf8("pbtAddUserRule"));

        hboxLayout->addWidget(pbtAddUserRule);

        pbtDeleteUserRule = new QPushButton(tabService);
        pbtDeleteUserRule->setObjectName(QString::fromUtf8("pbtDeleteUserRule"));

        hboxLayout->addWidget(pbtDeleteUserRule);


        vboxLayout3->addLayout(hboxLayout);

        tabWidget->addTab(tabService, QString());

        vboxLayout->addWidget(tabWidget);


        retranslateUi(IconsOptionsWidgetClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(IconsOptionsWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *IconsOptionsWidgetClass)
    {
        tabWidget->setTabText(tabWidget->indexOf(tabDefault), QApplication::translate("IconsOptionsWidgetClass", "Default iconset", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = twtDefaultRules->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("IconsOptionsWidgetClass", "RegExp", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = twtDefaultRules->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("IconsOptionsWidgetClass", "Iconset", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabContact), QApplication::translate("IconsOptionsWidgetClass", "Default rules", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = twtUserRules->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("IconsOptionsWidgetClass", "RegExp", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = twtUserRules->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("IconsOptionsWidgetClass", "Iconset", 0, QApplication::UnicodeUTF8));
        pbtAddUserRule->setText(QApplication::translate("IconsOptionsWidgetClass", "Add", 0, QApplication::UnicodeUTF8));
        pbtDeleteUserRule->setText(QApplication::translate("IconsOptionsWidgetClass", "Delete", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabService), QApplication::translate("IconsOptionsWidgetClass", "User rules", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(IconsOptionsWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class IconsOptionsWidgetClass: public Ui_IconsOptionsWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICONSOPTIONSWIDGET_H
