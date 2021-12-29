/********************************************************************************
** Form generated from reading UI file 'notifyoptionswidget.ui'
**
** Created: Sat Jan 26 02:21:04 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFYOPTIONSWIDGET_H
#define UI_NOTIFYOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotifyOptionsWidgetClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblPopupTimeout;
    QSpinBox *spbPopupTimeout;
    QSpacerItem *horizontalSpacer;
    QTreeView *trvNotifies;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbtRestoreDefaults;

    void setupUi(QWidget *NotifyOptionsWidgetClass)
    {
        if (NotifyOptionsWidgetClass->objectName().isEmpty())
            NotifyOptionsWidgetClass->setObjectName(QString::fromUtf8("NotifyOptionsWidgetClass"));
        NotifyOptionsWidgetClass->resize(402, 314);
        verticalLayout = new QVBoxLayout(NotifyOptionsWidgetClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblPopupTimeout = new QLabel(NotifyOptionsWidgetClass);
        lblPopupTimeout->setObjectName(QString::fromUtf8("lblPopupTimeout"));

        horizontalLayout_2->addWidget(lblPopupTimeout);

        spbPopupTimeout = new QSpinBox(NotifyOptionsWidgetClass);
        spbPopupTimeout->setObjectName(QString::fromUtf8("spbPopupTimeout"));
        spbPopupTimeout->setMaximum(60);

        horizontalLayout_2->addWidget(spbPopupTimeout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        trvNotifies = new QTreeView(NotifyOptionsWidgetClass);
        trvNotifies->setObjectName(QString::fromUtf8("trvNotifies"));
        trvNotifies->setUniformRowHeights(true);
        trvNotifies->setSortingEnabled(true);
        trvNotifies->setAllColumnsShowFocus(true);
        trvNotifies->header()->setStretchLastSection(false);

        verticalLayout->addWidget(trvNotifies);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pbtRestoreDefaults = new QPushButton(NotifyOptionsWidgetClass);
        pbtRestoreDefaults->setObjectName(QString::fromUtf8("pbtRestoreDefaults"));

        horizontalLayout->addWidget(pbtRestoreDefaults);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(NotifyOptionsWidgetClass);

        QMetaObject::connectSlotsByName(NotifyOptionsWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *NotifyOptionsWidgetClass)
    {
        lblPopupTimeout->setText(QApplication::translate("NotifyOptionsWidgetClass", "Time to display a pop-up window (0 - always visible):", 0, QApplication::UnicodeUTF8));
        spbPopupTimeout->setSuffix(QApplication::translate("NotifyOptionsWidgetClass", " seconds", 0, QApplication::UnicodeUTF8));
        pbtRestoreDefaults->setText(QApplication::translate("NotifyOptionsWidgetClass", "Restore Defaults", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(NotifyOptionsWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class NotifyOptionsWidgetClass: public Ui_NotifyOptionsWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFYOPTIONSWIDGET_H
