/********************************************************************************
** Form generated from reading UI file 'commanddialog.ui'
**
** Created: Sat Jan 26 02:18:37 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDDIALOG_H
#define UI_COMMANDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CommandDialogClass
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *lblInfo;
    QWidget *wdtForm;
    QFrame *frame;
    QDialogButtonBox *dbbButtons;

    void setupUi(QDialog *CommandDialogClass)
    {
        if (CommandDialogClass->objectName().isEmpty())
            CommandDialogClass->setObjectName(QString::fromUtf8("CommandDialogClass"));
        CommandDialogClass->resize(500, 325);
        vboxLayout = new QVBoxLayout(CommandDialogClass);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(5, 5, 5, 5);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        lblInfo = new QLabel(CommandDialogClass);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setTextFormat(Qt::PlainText);
        lblInfo->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(lblInfo);

        wdtForm = new QWidget(CommandDialogClass);
        wdtForm->setObjectName(QString::fromUtf8("wdtForm"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wdtForm->sizePolicy().hasHeightForWidth());
        wdtForm->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(wdtForm);

        frame = new QFrame(CommandDialogClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Raised);

        vboxLayout->addWidget(frame);

        dbbButtons = new QDialogButtonBox(CommandDialogClass);
        dbbButtons->setObjectName(QString::fromUtf8("dbbButtons"));
        dbbButtons->setStandardButtons(QDialogButtonBox::Cancel);

        vboxLayout->addWidget(dbbButtons);


        retranslateUi(CommandDialogClass);

        QMetaObject::connectSlotsByName(CommandDialogClass);
    } // setupUi

    void retranslateUi(QDialog *CommandDialogClass)
    {
        Q_UNUSED(CommandDialogClass);
    } // retranslateUi

};

namespace Ui {
    class CommandDialogClass: public Ui_CommandDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDDIALOG_H
