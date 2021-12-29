/********************************************************************************
** Form generated from reading UI file 'messengeroptions.ui'
**
** Created: Sat Jan 26 02:06:43 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSENGEROPTIONS_H
#define UI_MESSENGEROPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessengerOptionsClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblEditorMinimumLines;
    QSpinBox *spbEditorMinimumLines;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *lblCleanChatTimeout;
    QSpinBox *spbCleanChatTimeout;
    QLabel *lblNoClean;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *MessengerOptionsClass)
    {
        if (MessengerOptionsClass->objectName().isEmpty())
            MessengerOptionsClass->setObjectName(QString::fromUtf8("MessengerOptionsClass"));
        MessengerOptionsClass->resize(422, 50);
        verticalLayout = new QVBoxLayout(MessengerOptionsClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblEditorMinimumLines = new QLabel(MessengerOptionsClass);
        lblEditorMinimumLines->setObjectName(QString::fromUtf8("lblEditorMinimumLines"));

        horizontalLayout_2->addWidget(lblEditorMinimumLines);

        spbEditorMinimumLines = new QSpinBox(MessengerOptionsClass);
        spbEditorMinimumLines->setObjectName(QString::fromUtf8("spbEditorMinimumLines"));
        spbEditorMinimumLines->setMinimum(1);
        spbEditorMinimumLines->setMaximum(10);

        horizontalLayout_2->addWidget(spbEditorMinimumLines);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblCleanChatTimeout = new QLabel(MessengerOptionsClass);
        lblCleanChatTimeout->setObjectName(QString::fromUtf8("lblCleanChatTimeout"));

        horizontalLayout->addWidget(lblCleanChatTimeout);

        spbCleanChatTimeout = new QSpinBox(MessengerOptionsClass);
        spbCleanChatTimeout->setObjectName(QString::fromUtf8("spbCleanChatTimeout"));
        spbCleanChatTimeout->setMaximum(60);

        horizontalLayout->addWidget(spbCleanChatTimeout);

        lblNoClean = new QLabel(MessengerOptionsClass);
        lblNoClean->setObjectName(QString::fromUtf8("lblNoClean"));

        horizontalLayout->addWidget(lblNoClean);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MessengerOptionsClass);

        QMetaObject::connectSlotsByName(MessengerOptionsClass);
    } // setupUi

    void retranslateUi(QWidget *MessengerOptionsClass)
    {
        lblEditorMinimumLines->setText(QApplication::translate("MessengerOptionsClass", "Minimum input field lines:", 0, QApplication::UnicodeUTF8));
        lblCleanChatTimeout->setText(QApplication::translate("MessengerOptionsClass", "Clean chat windows after closing in ", 0, QApplication::UnicodeUTF8));
        spbCleanChatTimeout->setSuffix(QApplication::translate("MessengerOptionsClass", " minutes", 0, QApplication::UnicodeUTF8));
        lblNoClean->setText(QApplication::translate("MessengerOptionsClass", "(0 - do not clean)", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MessengerOptionsClass);
    } // retranslateUi

};

namespace Ui {
    class MessengerOptionsClass: public Ui_MessengerOptionsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSENGEROPTIONS_H
