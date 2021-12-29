/********************************************************************************
** Form generated from reading UI file 'editwidget.ui'
**
** Created: Sat Jan 26 02:06:43 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWIDGET_H
#define UI_EDITWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>
#include "messageeditor.h"

QT_BEGIN_NAMESPACE

class Ui_EditWidgetClass
{
public:
    QHBoxLayout *horizontalLayout;
    MessageEditor *medEditor;
    QWidget *wdtSendToolBar;

    void setupUi(QWidget *EditWidgetClass)
    {
        if (EditWidgetClass->objectName().isEmpty())
            EditWidgetClass->setObjectName(QString::fromUtf8("EditWidgetClass"));
        EditWidgetClass->resize(506, 71);
        horizontalLayout = new QHBoxLayout(EditWidgetClass);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        medEditor = new MessageEditor(EditWidgetClass);
        medEditor->setObjectName(QString::fromUtf8("medEditor"));

        horizontalLayout->addWidget(medEditor);

        wdtSendToolBar = new QWidget(EditWidgetClass);
        wdtSendToolBar->setObjectName(QString::fromUtf8("wdtSendToolBar"));

        horizontalLayout->addWidget(wdtSendToolBar);


        retranslateUi(EditWidgetClass);

        QMetaObject::connectSlotsByName(EditWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *EditWidgetClass)
    {
        Q_UNUSED(EditWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class EditWidgetClass: public Ui_EditWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWIDGET_H
