/********************************************************************************
** Form generated from reading UI file 'clientinfodialog.ui'
**
** Created: Sat Jan 26 02:14:54 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTINFODIALOG_H
#define UI_CLIENTINFODIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClientInfoDialogClass
{
public:
    QVBoxLayout *vboxLayout;
    QTextEdit *tedText;

    void setupUi(QDialog *ClientInfoDialogClass)
    {
        if (ClientInfoDialogClass->objectName().isEmpty())
            ClientInfoDialogClass->setObjectName(QString::fromUtf8("ClientInfoDialogClass"));
        ClientInfoDialogClass->resize(408, 248);
        vboxLayout = new QVBoxLayout(ClientInfoDialogClass);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tedText = new QTextEdit(ClientInfoDialogClass);
        tedText->setObjectName(QString::fromUtf8("tedText"));
        tedText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tedText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tedText->setUndoRedoEnabled(false);
        tedText->setReadOnly(true);
        tedText->setTextInteractionFlags(Qt::TextSelectableByMouse);

        vboxLayout->addWidget(tedText);


        retranslateUi(ClientInfoDialogClass);

        QMetaObject::connectSlotsByName(ClientInfoDialogClass);
    } // setupUi

    void retranslateUi(QDialog *ClientInfoDialogClass)
    {
        Q_UNUSED(ClientInfoDialogClass);
    } // retranslateUi

};

namespace Ui {
    class ClientInfoDialogClass: public Ui_ClientInfoDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTINFODIALOG_H
