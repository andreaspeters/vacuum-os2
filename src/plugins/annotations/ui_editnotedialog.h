/********************************************************************************
** Form generated from reading UI file 'editnotedialog.ui'
**
** Created: Sat Jan 26 02:22:00 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITNOTEDIALOG_H
#define UI_EDITNOTEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditNoteDialogClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblCreated;
    QLabel *lblCreatedValue;
    QLabel *lblModified;
    QLabel *lblModifiedValue;
    QPlainTextEdit *pteNote;
    QDialogButtonBox *dbbButtons;

    void setupUi(QDialog *EditNoteDialogClass)
    {
        if (EditNoteDialogClass->objectName().isEmpty())
            EditNoteDialogClass->setObjectName(QString::fromUtf8("EditNoteDialogClass"));
        EditNoteDialogClass->resize(353, 245);
        verticalLayout = new QVBoxLayout(EditNoteDialogClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblCreated = new QLabel(EditNoteDialogClass);
        lblCreated->setObjectName(QString::fromUtf8("lblCreated"));
        lblCreated->setTextFormat(Qt::PlainText);

        horizontalLayout->addWidget(lblCreated);

        lblCreatedValue = new QLabel(EditNoteDialogClass);
        lblCreatedValue->setObjectName(QString::fromUtf8("lblCreatedValue"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblCreatedValue->sizePolicy().hasHeightForWidth());
        lblCreatedValue->setSizePolicy(sizePolicy);
        lblCreatedValue->setFrameShape(QFrame::Panel);
        lblCreatedValue->setFrameShadow(QFrame::Sunken);
        lblCreatedValue->setTextFormat(Qt::PlainText);

        horizontalLayout->addWidget(lblCreatedValue);

        lblModified = new QLabel(EditNoteDialogClass);
        lblModified->setObjectName(QString::fromUtf8("lblModified"));
        lblModified->setTextFormat(Qt::PlainText);

        horizontalLayout->addWidget(lblModified);

        lblModifiedValue = new QLabel(EditNoteDialogClass);
        lblModifiedValue->setObjectName(QString::fromUtf8("lblModifiedValue"));
        sizePolicy.setHeightForWidth(lblModifiedValue->sizePolicy().hasHeightForWidth());
        lblModifiedValue->setSizePolicy(sizePolicy);
        lblModifiedValue->setFrameShape(QFrame::Panel);
        lblModifiedValue->setFrameShadow(QFrame::Sunken);
        lblModifiedValue->setTextFormat(Qt::PlainText);

        horizontalLayout->addWidget(lblModifiedValue);


        verticalLayout->addLayout(horizontalLayout);

        pteNote = new QPlainTextEdit(EditNoteDialogClass);
        pteNote->setObjectName(QString::fromUtf8("pteNote"));

        verticalLayout->addWidget(pteNote);

        dbbButtons = new QDialogButtonBox(EditNoteDialogClass);
        dbbButtons->setObjectName(QString::fromUtf8("dbbButtons"));
        dbbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(dbbButtons);


        retranslateUi(EditNoteDialogClass);

        QMetaObject::connectSlotsByName(EditNoteDialogClass);
    } // setupUi

    void retranslateUi(QDialog *EditNoteDialogClass)
    {
        lblCreated->setText(QApplication::translate("EditNoteDialogClass", "Created:", 0, QApplication::UnicodeUTF8));
        lblCreatedValue->setText(QString());
        lblModified->setText(QApplication::translate("EditNoteDialogClass", "Modified:", 0, QApplication::UnicodeUTF8));
        lblModifiedValue->setText(QString());
        Q_UNUSED(EditNoteDialogClass);
    } // retranslateUi

};

namespace Ui {
    class EditNoteDialogClass: public Ui_EditNoteDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITNOTEDIALOG_H
