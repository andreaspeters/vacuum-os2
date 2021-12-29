/********************************************************************************
** Form generated from reading UI file 'edititemdialog.ui'
**
** Created: Sat Jan 26 02:15:09 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITITEMDIALOG_H
#define UI_EDITITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditItemDialogClass
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *lblLabel;
    QLineEdit *lneEdit;
    QGroupBox *grbTags;
    QDialogButtonBox *btbButtons;

    void setupUi(QDialog *EditItemDialogClass)
    {
        if (EditItemDialogClass->objectName().isEmpty())
            EditItemDialogClass->setObjectName(QString::fromUtf8("EditItemDialogClass"));
        EditItemDialogClass->setWindowModality(Qt::WindowModal);
        EditItemDialogClass->resize(309, 175);
        vboxLayout = new QVBoxLayout(EditItemDialogClass);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(2, 2, 2, 2);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        lblLabel = new QLabel(EditItemDialogClass);
        lblLabel->setObjectName(QString::fromUtf8("lblLabel"));
        lblLabel->setTextFormat(Qt::PlainText);

        vboxLayout->addWidget(lblLabel);

        lneEdit = new QLineEdit(EditItemDialogClass);
        lneEdit->setObjectName(QString::fromUtf8("lneEdit"));

        vboxLayout->addWidget(lneEdit);

        grbTags = new QGroupBox(EditItemDialogClass);
        grbTags->setObjectName(QString::fromUtf8("grbTags"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(grbTags->sizePolicy().hasHeightForWidth());
        grbTags->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(grbTags);

        btbButtons = new QDialogButtonBox(EditItemDialogClass);
        btbButtons->setObjectName(QString::fromUtf8("btbButtons"));
        btbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(btbButtons);


        retranslateUi(EditItemDialogClass);
        QObject::connect(btbButtons, SIGNAL(accepted()), EditItemDialogClass, SLOT(accept()));
        QObject::connect(btbButtons, SIGNAL(rejected()), EditItemDialogClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditItemDialogClass);
    } // setupUi

    void retranslateUi(QDialog *EditItemDialogClass)
    {
        EditItemDialogClass->setWindowTitle(QApplication::translate("EditItemDialogClass", "Edit item", 0, QApplication::UnicodeUTF8));
        lblLabel->setText(QApplication::translate("EditItemDialogClass", "Edit item", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditItemDialogClass: public Ui_EditItemDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITITEMDIALOG_H
