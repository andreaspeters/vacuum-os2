/********************************************************************************
** Form generated from reading UI file 'statusoptionswidget.ui'
**
** Created: Sat Jan 26 02:21:27 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUSOPTIONSWIDGET_H
#define UI_STATUSOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatusOptionsWidgetClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tbwRules;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbtHelp;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbtAdd;
    QPushButton *pbtDelete;

    void setupUi(QWidget *StatusOptionsWidgetClass)
    {
        if (StatusOptionsWidgetClass->objectName().isEmpty())
            StatusOptionsWidgetClass->setObjectName(QString::fromUtf8("StatusOptionsWidgetClass"));
        StatusOptionsWidgetClass->resize(401, 464);
        verticalLayout_2 = new QVBoxLayout(StatusOptionsWidgetClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tbwRules = new QTableWidget(StatusOptionsWidgetClass);
        tbwRules->setObjectName(QString::fromUtf8("tbwRules"));
        tbwRules->setSelectionMode(QAbstractItemView::SingleSelection);
        tbwRules->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbwRules->setSortingEnabled(true);

        verticalLayout_2->addWidget(tbwRules);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbtHelp = new QPushButton(StatusOptionsWidgetClass);
        pbtHelp->setObjectName(QString::fromUtf8("pbtHelp"));

        horizontalLayout->addWidget(pbtHelp);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbtAdd = new QPushButton(StatusOptionsWidgetClass);
        pbtAdd->setObjectName(QString::fromUtf8("pbtAdd"));

        horizontalLayout->addWidget(pbtAdd);

        pbtDelete = new QPushButton(StatusOptionsWidgetClass);
        pbtDelete->setObjectName(QString::fromUtf8("pbtDelete"));

        horizontalLayout->addWidget(pbtDelete);


        verticalLayout_2->addLayout(horizontalLayout);

        QWidget::setTabOrder(tbwRules, pbtAdd);
        QWidget::setTabOrder(pbtAdd, pbtDelete);

        retranslateUi(StatusOptionsWidgetClass);

        QMetaObject::connectSlotsByName(StatusOptionsWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *StatusOptionsWidgetClass)
    {
        pbtHelp->setText(QApplication::translate("StatusOptionsWidgetClass", "Help", 0, QApplication::UnicodeUTF8));
        pbtAdd->setText(QApplication::translate("StatusOptionsWidgetClass", "Add", 0, QApplication::UnicodeUTF8));
        pbtDelete->setText(QApplication::translate("StatusOptionsWidgetClass", "Delete", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(StatusOptionsWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class StatusOptionsWidgetClass: public Ui_StatusOptionsWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUSOPTIONSWIDGET_H
