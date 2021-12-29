/********************************************************************************
** Form generated from reading UI file 'modifystatusdialog.ui'
**
** Created: Sat Jan 26 02:05:21 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSTATUSDIALOG_H
#define UI_MODIFYSTATUSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifyStatusDialogClass
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *lblStatus;
    QLabel *lblName;
    QLabel *lblPriority;
    QComboBox *cmbShow;
    QLineEdit *lneName;
    QSpinBox *spbPriority;
    QPlainTextEdit *pteText;
    QDialogButtonBox *dbbButtons;

    void setupUi(QDialog *ModifyStatusDialogClass)
    {
        if (ModifyStatusDialogClass->objectName().isEmpty())
            ModifyStatusDialogClass->setObjectName(QString::fromUtf8("ModifyStatusDialogClass"));
        ModifyStatusDialogClass->resize(413, 176);
        verticalLayout = new QVBoxLayout(ModifyStatusDialogClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblStatus = new QLabel(ModifyStatusDialogClass);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        lblStatus->setTextFormat(Qt::PlainText);
        lblStatus->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblStatus, 0, 0, 1, 1);

        lblName = new QLabel(ModifyStatusDialogClass);
        lblName->setObjectName(QString::fromUtf8("lblName"));
        lblName->setTextFormat(Qt::PlainText);
        lblName->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblName, 0, 1, 1, 1);

        lblPriority = new QLabel(ModifyStatusDialogClass);
        lblPriority->setObjectName(QString::fromUtf8("lblPriority"));
        lblPriority->setTextFormat(Qt::PlainText);
        lblPriority->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblPriority, 0, 2, 1, 1);

        cmbShow = new QComboBox(ModifyStatusDialogClass);
        cmbShow->setObjectName(QString::fromUtf8("cmbShow"));

        gridLayout->addWidget(cmbShow, 1, 0, 1, 1);

        lneName = new QLineEdit(ModifyStatusDialogClass);
        lneName->setObjectName(QString::fromUtf8("lneName"));

        gridLayout->addWidget(lneName, 1, 1, 1, 1);

        spbPriority = new QSpinBox(ModifyStatusDialogClass);
        spbPriority->setObjectName(QString::fromUtf8("spbPriority"));
        spbPriority->setMinimum(-127);
        spbPriority->setMaximum(128);

        gridLayout->addWidget(spbPriority, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        pteText = new QPlainTextEdit(ModifyStatusDialogClass);
        pteText->setObjectName(QString::fromUtf8("pteText"));
        pteText->setTabChangesFocus(true);

        verticalLayout->addWidget(pteText);

        dbbButtons = new QDialogButtonBox(ModifyStatusDialogClass);
        dbbButtons->setObjectName(QString::fromUtf8("dbbButtons"));
        dbbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(dbbButtons);

#ifndef QT_NO_SHORTCUT
        lblStatus->setBuddy(cmbShow);
        lblName->setBuddy(lneName);
        lblPriority->setBuddy(spbPriority);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cmbShow, lneName);
        QWidget::setTabOrder(lneName, spbPriority);
        QWidget::setTabOrder(spbPriority, pteText);
        QWidget::setTabOrder(pteText, dbbButtons);

        retranslateUi(ModifyStatusDialogClass);

        QMetaObject::connectSlotsByName(ModifyStatusDialogClass);
    } // setupUi

    void retranslateUi(QDialog *ModifyStatusDialogClass)
    {
        ModifyStatusDialogClass->setWindowTitle(QApplication::translate("ModifyStatusDialogClass", "Modify Status", 0, QApplication::UnicodeUTF8));
        lblStatus->setText(QApplication::translate("ModifyStatusDialogClass", "Status", 0, QApplication::UnicodeUTF8));
        lblName->setText(QApplication::translate("ModifyStatusDialogClass", "Name", 0, QApplication::UnicodeUTF8));
        lblPriority->setText(QApplication::translate("ModifyStatusDialogClass", "Priority", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModifyStatusDialogClass: public Ui_ModifyStatusDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSTATUSDIALOG_H
