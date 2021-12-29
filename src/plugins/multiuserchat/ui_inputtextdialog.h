/********************************************************************************
** Form generated from reading UI file 'inputtextdialog.ui'
**
** Created: Sat Jan 26 02:15:37 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTTEXTDIALOG_H
#define UI_INPUTTEXTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InputTextDialogClass
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblCaptionl;
    QPlainTextEdit *pteText;
    QDialogButtonBox *dbbButtons;

    void setupUi(QDialog *InputTextDialogClass)
    {
        if (InputTextDialogClass->objectName().isEmpty())
            InputTextDialogClass->setObjectName(QString::fromUtf8("InputTextDialogClass"));
        InputTextDialogClass->setWindowModality(Qt::WindowModal);
        InputTextDialogClass->resize(359, 179);
        verticalLayout = new QVBoxLayout(InputTextDialogClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 3);
        lblCaptionl = new QLabel(InputTextDialogClass);
        lblCaptionl->setObjectName(QString::fromUtf8("lblCaptionl"));
        lblCaptionl->setTextFormat(Qt::PlainText);
        lblCaptionl->setWordWrap(true);

        verticalLayout->addWidget(lblCaptionl);

        pteText = new QPlainTextEdit(InputTextDialogClass);
        pteText->setObjectName(QString::fromUtf8("pteText"));

        verticalLayout->addWidget(pteText);

        dbbButtons = new QDialogButtonBox(InputTextDialogClass);
        dbbButtons->setObjectName(QString::fromUtf8("dbbButtons"));
        dbbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(dbbButtons);


        retranslateUi(InputTextDialogClass);

        QMetaObject::connectSlotsByName(InputTextDialogClass);
    } // setupUi

    void retranslateUi(QDialog *InputTextDialogClass)
    {
        Q_UNUSED(InputTextDialogClass);
    } // retranslateUi

};

namespace Ui {
    class InputTextDialogClass: public Ui_InputTextDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTTEXTDIALOG_H
