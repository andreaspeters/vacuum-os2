/********************************************************************************
** Form generated from reading UI file 'shortcutoptionswidget.ui'
**
** Created: Sat Jan 26 02:24:41 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTOPTIONSWIDGET_H
#define UI_SHORTCUTOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShortcutOptionsWidgetClass
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *trvShortcuts;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbtDefault;
    QPushButton *pbtClear;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbtRestoreDefaults;

    void setupUi(QWidget *ShortcutOptionsWidgetClass)
    {
        if (ShortcutOptionsWidgetClass->objectName().isEmpty())
            ShortcutOptionsWidgetClass->setObjectName(QString::fromUtf8("ShortcutOptionsWidgetClass"));
        ShortcutOptionsWidgetClass->resize(323, 274);
        verticalLayout = new QVBoxLayout(ShortcutOptionsWidgetClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        trvShortcuts = new QTreeView(ShortcutOptionsWidgetClass);
        trvShortcuts->setObjectName(QString::fromUtf8("trvShortcuts"));
        trvShortcuts->setAlternatingRowColors(true);
        trvShortcuts->setIndentation(10);
        trvShortcuts->setUniformRowHeights(true);
        trvShortcuts->setSortingEnabled(true);
        trvShortcuts->setAllColumnsShowFocus(true);
        trvShortcuts->header()->setStretchLastSection(false);

        verticalLayout->addWidget(trvShortcuts);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbtDefault = new QPushButton(ShortcutOptionsWidgetClass);
        pbtDefault->setObjectName(QString::fromUtf8("pbtDefault"));

        horizontalLayout->addWidget(pbtDefault);

        pbtClear = new QPushButton(ShortcutOptionsWidgetClass);
        pbtClear->setObjectName(QString::fromUtf8("pbtClear"));

        horizontalLayout->addWidget(pbtClear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbtRestoreDefaults = new QPushButton(ShortcutOptionsWidgetClass);
        pbtRestoreDefaults->setObjectName(QString::fromUtf8("pbtRestoreDefaults"));

        horizontalLayout->addWidget(pbtRestoreDefaults);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ShortcutOptionsWidgetClass);

        QMetaObject::connectSlotsByName(ShortcutOptionsWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *ShortcutOptionsWidgetClass)
    {
        pbtDefault->setText(QApplication::translate("ShortcutOptionsWidgetClass", "Default", 0, QApplication::UnicodeUTF8));
        pbtClear->setText(QApplication::translate("ShortcutOptionsWidgetClass", "Clear", 0, QApplication::UnicodeUTF8));
        pbtRestoreDefaults->setText(QApplication::translate("ShortcutOptionsWidgetClass", "Restore Defaults", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ShortcutOptionsWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class ShortcutOptionsWidgetClass: public Ui_ShortcutOptionsWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUTOPTIONSWIDGET_H
