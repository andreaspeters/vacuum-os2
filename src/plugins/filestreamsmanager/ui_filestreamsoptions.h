/********************************************************************************
** Form generated from reading UI file 'filestreamsoptions.ui'
**
** Created: Sat Jan 26 02:22:42 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESTREAMSOPTIONS_H
#define UI_FILESTREAMSOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileStreamsOptionsClass
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblDirectory;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lneDirectory;
    QPushButton *pbtDirectory;
    QCheckBox *chbGroupBySender;
    QLabel *lblMethod;
    QComboBox *cmbMethod;
    QGroupBox *grbMethods;

    void setupUi(QWidget *FileStreamsOptionsClass)
    {
        if (FileStreamsOptionsClass->objectName().isEmpty())
            FileStreamsOptionsClass->setObjectName(QString::fromUtf8("FileStreamsOptionsClass"));
        FileStreamsOptionsClass->resize(444, 132);
        verticalLayout = new QVBoxLayout(FileStreamsOptionsClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblDirectory = new QLabel(FileStreamsOptionsClass);
        lblDirectory->setObjectName(QString::fromUtf8("lblDirectory"));
        lblDirectory->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(lblDirectory);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lneDirectory = new QLineEdit(FileStreamsOptionsClass);
        lneDirectory->setObjectName(QString::fromUtf8("lneDirectory"));

        horizontalLayout->addWidget(lneDirectory);

        pbtDirectory = new QPushButton(FileStreamsOptionsClass);
        pbtDirectory->setObjectName(QString::fromUtf8("pbtDirectory"));
        pbtDirectory->setMaximumSize(QSize(25, 16777215));

        horizontalLayout->addWidget(pbtDirectory);


        verticalLayout->addLayout(horizontalLayout);

        chbGroupBySender = new QCheckBox(FileStreamsOptionsClass);
        chbGroupBySender->setObjectName(QString::fromUtf8("chbGroupBySender"));

        verticalLayout->addWidget(chbGroupBySender);

        lblMethod = new QLabel(FileStreamsOptionsClass);
        lblMethod->setObjectName(QString::fromUtf8("lblMethod"));
        lblMethod->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(lblMethod);

        cmbMethod = new QComboBox(FileStreamsOptionsClass);
        cmbMethod->setObjectName(QString::fromUtf8("cmbMethod"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbMethod->sizePolicy().hasHeightForWidth());
        cmbMethod->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(cmbMethod);

        grbMethods = new QGroupBox(FileStreamsOptionsClass);
        grbMethods->setObjectName(QString::fromUtf8("grbMethods"));

        verticalLayout->addWidget(grbMethods);


        retranslateUi(FileStreamsOptionsClass);

        QMetaObject::connectSlotsByName(FileStreamsOptionsClass);
    } // setupUi

    void retranslateUi(QWidget *FileStreamsOptionsClass)
    {
        lblDirectory->setText(QApplication::translate("FileStreamsOptionsClass", "Default Downloads Directory:", 0, QApplication::UnicodeUTF8));
        pbtDirectory->setText(QApplication::translate("FileStreamsOptionsClass", "...", 0, QApplication::UnicodeUTF8));
        chbGroupBySender->setText(QApplication::translate("FileStreamsOptionsClass", "Group downloads by sender", 0, QApplication::UnicodeUTF8));
        lblMethod->setText(QApplication::translate("FileStreamsOptionsClass", "Default Data Stream:", 0, QApplication::UnicodeUTF8));
        grbMethods->setTitle(QApplication::translate("FileStreamsOptionsClass", "Acceptable Data Streams", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(FileStreamsOptionsClass);
    } // retranslateUi

};

namespace Ui {
    class FileStreamsOptionsClass: public Ui_FileStreamsOptionsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESTREAMSOPTIONS_H
