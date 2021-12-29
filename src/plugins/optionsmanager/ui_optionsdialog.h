/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created: Sat Jan 26 01:40:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QScrollArea>
#include <QtGui/QSplitter>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionsDialogClass
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *sprSplitter;
    QTreeView *trvNodes;
    QScrollArea *scaScroll;
    QWidget *scrollAreaWidgetContents;
    QDialogButtonBox *dbbButtons;

    void setupUi(QDialog *OptionsDialogClass)
    {
        if (OptionsDialogClass->objectName().isEmpty())
            OptionsDialogClass->setObjectName(QString::fromUtf8("OptionsDialogClass"));
        OptionsDialogClass->resize(508, 498);
        verticalLayout = new QVBoxLayout(OptionsDialogClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        sprSplitter = new QSplitter(OptionsDialogClass);
        sprSplitter->setObjectName(QString::fromUtf8("sprSplitter"));
        sprSplitter->setOrientation(Qt::Horizontal);
        trvNodes = new QTreeView(sprSplitter);
        trvNodes->setObjectName(QString::fromUtf8("trvNodes"));
        trvNodes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        trvNodes->setTextElideMode(Qt::ElideNone);
        trvNodes->setIndentation(12);
        trvNodes->setSortingEnabled(true);
        sprSplitter->addWidget(trvNodes);
        trvNodes->header()->setVisible(false);
        scaScroll = new QScrollArea(sprSplitter);
        scaScroll->setObjectName(QString::fromUtf8("scaScroll"));
        scaScroll->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 70, 453));
        scaScroll->setWidget(scrollAreaWidgetContents);
        sprSplitter->addWidget(scaScroll);

        verticalLayout->addWidget(sprSplitter);

        dbbButtons = new QDialogButtonBox(OptionsDialogClass);
        dbbButtons->setObjectName(QString::fromUtf8("dbbButtons"));
        dbbButtons->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout->addWidget(dbbButtons);

        QWidget::setTabOrder(trvNodes, dbbButtons);

        retranslateUi(OptionsDialogClass);

        QMetaObject::connectSlotsByName(OptionsDialogClass);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialogClass)
    {
        Q_UNUSED(OptionsDialogClass);
    } // retranslateUi

};

namespace Ui {
    class OptionsDialogClass: public Ui_OptionsDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
