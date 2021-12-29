/********************************************************************************
** Form generated from reading UI file 'receiverswidget.ui'
**
** Created: Sat Jan 26 02:06:43 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVERSWIDGET_H
#define UI_RECEIVERSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReceiversWidgetClass
{
public:
    QVBoxLayout *vboxLayout;
    QTreeWidget *trwReceivers;
    QHBoxLayout *hboxLayout;
    QPushButton *pbtAdd;
    QPushButton *pbtUpdate;
    QSpacerItem *spacerItem;
    QPushButton *pbtSelectAll;
    QPushButton *pbtSelectAllOnLine;
    QPushButton *pbtSelectNone;

    void setupUi(QWidget *ReceiversWidgetClass)
    {
        if (ReceiversWidgetClass->objectName().isEmpty())
            ReceiversWidgetClass->setObjectName(QString::fromUtf8("ReceiversWidgetClass"));
        ReceiversWidgetClass->resize(440, 235);
        vboxLayout = new QVBoxLayout(ReceiversWidgetClass);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(2, 2, 2, 2);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        trwReceivers = new QTreeWidget(ReceiversWidgetClass);
        trwReceivers->setObjectName(QString::fromUtf8("trwReceivers"));
        trwReceivers->setColumnCount(0);

        vboxLayout->addWidget(trwReceivers);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        pbtAdd = new QPushButton(ReceiversWidgetClass);
        pbtAdd->setObjectName(QString::fromUtf8("pbtAdd"));

        hboxLayout->addWidget(pbtAdd);

        pbtUpdate = new QPushButton(ReceiversWidgetClass);
        pbtUpdate->setObjectName(QString::fromUtf8("pbtUpdate"));

        hboxLayout->addWidget(pbtUpdate);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        pbtSelectAll = new QPushButton(ReceiversWidgetClass);
        pbtSelectAll->setObjectName(QString::fromUtf8("pbtSelectAll"));

        hboxLayout->addWidget(pbtSelectAll);

        pbtSelectAllOnLine = new QPushButton(ReceiversWidgetClass);
        pbtSelectAllOnLine->setObjectName(QString::fromUtf8("pbtSelectAllOnLine"));

        hboxLayout->addWidget(pbtSelectAllOnLine);

        pbtSelectNone = new QPushButton(ReceiversWidgetClass);
        pbtSelectNone->setObjectName(QString::fromUtf8("pbtSelectNone"));

        hboxLayout->addWidget(pbtSelectNone);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(ReceiversWidgetClass);

        QMetaObject::connectSlotsByName(ReceiversWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *ReceiversWidgetClass)
    {
        pbtAdd->setText(QApplication::translate("ReceiversWidgetClass", "Add", 0, QApplication::UnicodeUTF8));
        pbtUpdate->setText(QApplication::translate("ReceiversWidgetClass", "Update", 0, QApplication::UnicodeUTF8));
        pbtSelectAll->setText(QApplication::translate("ReceiversWidgetClass", "All", 0, QApplication::UnicodeUTF8));
        pbtSelectAllOnLine->setText(QApplication::translate("ReceiversWidgetClass", "All Online", 0, QApplication::UnicodeUTF8));
        pbtSelectNone->setText(QApplication::translate("ReceiversWidgetClass", "None", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ReceiversWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class ReceiversWidgetClass: public Ui_ReceiversWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVERSWIDGET_H
