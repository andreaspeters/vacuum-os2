/********************************************************************************
** Form generated from reading UI file 'inbandoptions.ui'
**
** Created: Sat Jan 26 02:23:25 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INBANDOPTIONS_H
#define UI_INBANDOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InBandOptionsClass
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grbSettings;
    QFormLayout *formLayout;
    QLabel *lblBlockSize;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spbBlockSize;
    QLabel *lblMaxBlockSize;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spbMaxBlockSize;
    QLabel *lblStanzaType;
    QComboBox *cmbStanzaType;

    void setupUi(QWidget *InBandOptionsClass)
    {
        if (InBandOptionsClass->objectName().isEmpty())
            InBandOptionsClass->setObjectName(QString::fromUtf8("InBandOptionsClass"));
        InBandOptionsClass->resize(405, 98);
        verticalLayout = new QVBoxLayout(InBandOptionsClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        grbSettings = new QGroupBox(InBandOptionsClass);
        grbSettings->setObjectName(QString::fromUtf8("grbSettings"));
        formLayout = new QFormLayout(grbSettings);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lblBlockSize = new QLabel(grbSettings);
        lblBlockSize->setObjectName(QString::fromUtf8("lblBlockSize"));
        lblBlockSize->setTextFormat(Qt::PlainText);

        formLayout->setWidget(0, QFormLayout::LabelRole, lblBlockSize);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spbBlockSize = new QSpinBox(grbSettings);
        spbBlockSize->setObjectName(QString::fromUtf8("spbBlockSize"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spbBlockSize->sizePolicy().hasHeightForWidth());
        spbBlockSize->setSizePolicy(sizePolicy);
        spbBlockSize->setMinimum(128);
        spbBlockSize->setMaximum(10240);
        spbBlockSize->setSingleStep(32);

        horizontalLayout->addWidget(spbBlockSize);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        lblMaxBlockSize = new QLabel(grbSettings);
        lblMaxBlockSize->setObjectName(QString::fromUtf8("lblMaxBlockSize"));
        lblMaxBlockSize->setTextFormat(Qt::PlainText);

        formLayout->setWidget(1, QFormLayout::LabelRole, lblMaxBlockSize);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spbMaxBlockSize = new QSpinBox(grbSettings);
        spbMaxBlockSize->setObjectName(QString::fromUtf8("spbMaxBlockSize"));
        sizePolicy.setHeightForWidth(spbMaxBlockSize->sizePolicy().hasHeightForWidth());
        spbMaxBlockSize->setSizePolicy(sizePolicy);
        spbMaxBlockSize->setMinimum(4096);
        spbMaxBlockSize->setMaximum(102400);
        spbMaxBlockSize->setSingleStep(32);
        spbMaxBlockSize->setValue(10240);

        horizontalLayout_2->addWidget(spbMaxBlockSize);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);

        lblStanzaType = new QLabel(grbSettings);
        lblStanzaType->setObjectName(QString::fromUtf8("lblStanzaType"));
        lblStanzaType->setTextFormat(Qt::PlainText);

        formLayout->setWidget(2, QFormLayout::LabelRole, lblStanzaType);

        cmbStanzaType = new QComboBox(grbSettings);
        cmbStanzaType->setObjectName(QString::fromUtf8("cmbStanzaType"));
        sizePolicy.setHeightForWidth(cmbStanzaType->sizePolicy().hasHeightForWidth());
        cmbStanzaType->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::FieldRole, cmbStanzaType);


        verticalLayout->addWidget(grbSettings);

#ifndef QT_NO_SHORTCUT
        lblBlockSize->setBuddy(spbBlockSize);
        lblMaxBlockSize->setBuddy(spbMaxBlockSize);
        lblStanzaType->setBuddy(cmbStanzaType);
#endif // QT_NO_SHORTCUT

        retranslateUi(InBandOptionsClass);

        QMetaObject::connectSlotsByName(InBandOptionsClass);
    } // setupUi

    void retranslateUi(QWidget *InBandOptionsClass)
    {
        lblBlockSize->setText(QApplication::translate("InBandOptionsClass", "Size of data in packet:", 0, QApplication::UnicodeUTF8));
        spbBlockSize->setSuffix(QApplication::translate("InBandOptionsClass", " Bytes", 0, QApplication::UnicodeUTF8));
        lblMaxBlockSize->setText(QApplication::translate("InBandOptionsClass", "Maximum size of data in packet:", 0, QApplication::UnicodeUTF8));
        spbMaxBlockSize->setSuffix(QApplication::translate("InBandOptionsClass", " Bytes", 0, QApplication::UnicodeUTF8));
        lblStanzaType->setText(QApplication::translate("InBandOptionsClass", "Packet type:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(InBandOptionsClass);
    } // retranslateUi

};

namespace Ui {
    class InBandOptionsClass: public Ui_InBandOptionsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INBANDOPTIONS_H
