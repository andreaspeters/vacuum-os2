/********************************************************************************
** Form generated from reading UI file 'exchangeapprovedialog.ui'
**
** Created: Sat Jan 26 02:25:48 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCHANGEAPPROVEDIALOG_H
#define UI_EXCHANGEAPPROVEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExchangeApproveDialogClass
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblNotice;
    QTableWidget *tbwItems;
    QCheckBox *chbSubscribe;
    QFrame *line;
    QDialogButtonBox *btbButtons;

    void setupUi(QDialog *ExchangeApproveDialogClass)
    {
        if (ExchangeApproveDialogClass->objectName().isEmpty())
            ExchangeApproveDialogClass->setObjectName(QString::fromUtf8("ExchangeApproveDialogClass"));
        ExchangeApproveDialogClass->resize(482, 346);
        verticalLayout = new QVBoxLayout(ExchangeApproveDialogClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblNotice = new QLabel(ExchangeApproveDialogClass);
        lblNotice->setObjectName(QString::fromUtf8("lblNotice"));
        lblNotice->setText(QString::fromUtf8("lblNotice"));
        lblNotice->setTextFormat(Qt::PlainText);
        lblNotice->setAlignment(Qt::AlignCenter);
        lblNotice->setWordWrap(true);

        verticalLayout->addWidget(lblNotice);

        tbwItems = new QTableWidget(ExchangeApproveDialogClass);
        tbwItems->setObjectName(QString::fromUtf8("tbwItems"));
        tbwItems->horizontalHeader()->setHighlightSections(false);
        tbwItems->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(tbwItems);

        chbSubscribe = new QCheckBox(ExchangeApproveDialogClass);
        chbSubscribe->setObjectName(QString::fromUtf8("chbSubscribe"));

        verticalLayout->addWidget(chbSubscribe);

        line = new QFrame(ExchangeApproveDialogClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        btbButtons = new QDialogButtonBox(ExchangeApproveDialogClass);
        btbButtons->setObjectName(QString::fromUtf8("btbButtons"));
        btbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(btbButtons);


        retranslateUi(ExchangeApproveDialogClass);

        QMetaObject::connectSlotsByName(ExchangeApproveDialogClass);
    } // setupUi

    void retranslateUi(QDialog *ExchangeApproveDialogClass)
    {
        chbSubscribe->setText(QApplication::translate("ExchangeApproveDialogClass", "Send authorization request to new contacts", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ExchangeApproveDialogClass);
    } // retranslateUi

};

namespace Ui {
    class ExchangeApproveDialogClass: public Ui_ExchangeApproveDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCHANGEAPPROVEDIALOG_H
