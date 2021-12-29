/********************************************************************************
** Form generated from reading UI file 'filearchiveoptions.ui'
**
** Created: Sat Jan 26 02:25:10 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEARCHIVEOPTIONS_H
#define UI_FILEARCHIVEOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileArchiveOptionsClass
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *chbLocation;
    QWidget *wdtLocation;
    QHBoxLayout *horizontalLayout;
    QLabel *lblLocation;
    QLineEdit *lneLocation;
    QToolButton *tlbLocation;

    void setupUi(QWidget *FileArchiveOptionsClass)
    {
        if (FileArchiveOptionsClass->objectName().isEmpty())
            FileArchiveOptionsClass->setObjectName(QString::fromUtf8("FileArchiveOptionsClass"));
        FileArchiveOptionsClass->resize(388, 43);
        verticalLayout = new QVBoxLayout(FileArchiveOptionsClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        chbLocation = new QCheckBox(FileArchiveOptionsClass);
        chbLocation->setObjectName(QString::fromUtf8("chbLocation"));

        verticalLayout->addWidget(chbLocation);

        wdtLocation = new QWidget(FileArchiveOptionsClass);
        wdtLocation->setObjectName(QString::fromUtf8("wdtLocation"));
        wdtLocation->setEnabled(false);
        horizontalLayout = new QHBoxLayout(wdtLocation);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 0, 0, 0);
        lblLocation = new QLabel(wdtLocation);
        lblLocation->setObjectName(QString::fromUtf8("lblLocation"));

        horizontalLayout->addWidget(lblLocation);

        lneLocation = new QLineEdit(wdtLocation);
        lneLocation->setObjectName(QString::fromUtf8("lneLocation"));
        lneLocation->setReadOnly(true);

        horizontalLayout->addWidget(lneLocation);

        tlbLocation = new QToolButton(wdtLocation);
        tlbLocation->setObjectName(QString::fromUtf8("tlbLocation"));
        tlbLocation->setText(QString::fromUtf8("..."));

        horizontalLayout->addWidget(tlbLocation);


        verticalLayout->addWidget(wdtLocation);

#ifndef QT_NO_SHORTCUT
        lblLocation->setBuddy(lneLocation);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(chbLocation, lneLocation);
        QWidget::setTabOrder(lneLocation, tlbLocation);

        retranslateUi(FileArchiveOptionsClass);
        QObject::connect(chbLocation, SIGNAL(toggled(bool)), wdtLocation, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(FileArchiveOptionsClass);
    } // setupUi

    void retranslateUi(QWidget *FileArchiveOptionsClass)
    {
        chbLocation->setText(QApplication::translate("FileArchiveOptionsClass", "Change the location of the file archive (restart required)", 0, QApplication::UnicodeUTF8));
        lblLocation->setText(QApplication::translate("FileArchiveOptionsClass", "Location:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(FileArchiveOptionsClass);
    } // retranslateUi

};

namespace Ui {
    class FileArchiveOptionsClass: public Ui_FileArchiveOptionsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEARCHIVEOPTIONS_H
