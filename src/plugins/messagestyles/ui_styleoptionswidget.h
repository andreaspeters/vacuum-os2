/********************************************************************************
** Form generated from reading UI file 'styleoptionswidget.ui'
**
** Created: Sat Jan 26 02:08:00 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STYLEOPTIONSWIDGET_H
#define UI_STYLEOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StyleOptionsWidgetClass
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *lblMessageType;
    QComboBox *cmbMessageType;
    QLabel *lblStyleEngine;
    QComboBox *cmbStyleEngine;
    QWidget *wdtStyleOptions;
    QFrame *frmExample;

    void setupUi(QWidget *StyleOptionsWidgetClass)
    {
        if (StyleOptionsWidgetClass->objectName().isEmpty())
            StyleOptionsWidgetClass->setObjectName(QString::fromUtf8("StyleOptionsWidgetClass"));
        StyleOptionsWidgetClass->resize(484, 201);
        verticalLayout = new QVBoxLayout(StyleOptionsWidgetClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblMessageType = new QLabel(StyleOptionsWidgetClass);
        lblMessageType->setObjectName(QString::fromUtf8("lblMessageType"));
        lblMessageType->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblMessageType, 0, 0, 1, 1);

        cmbMessageType = new QComboBox(StyleOptionsWidgetClass);
        cmbMessageType->setObjectName(QString::fromUtf8("cmbMessageType"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbMessageType->sizePolicy().hasHeightForWidth());
        cmbMessageType->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cmbMessageType, 0, 1, 1, 1);

        lblStyleEngine = new QLabel(StyleOptionsWidgetClass);
        lblStyleEngine->setObjectName(QString::fromUtf8("lblStyleEngine"));
        lblStyleEngine->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblStyleEngine, 1, 0, 1, 1);

        cmbStyleEngine = new QComboBox(StyleOptionsWidgetClass);
        cmbStyleEngine->setObjectName(QString::fromUtf8("cmbStyleEngine"));
        sizePolicy.setHeightForWidth(cmbStyleEngine->sizePolicy().hasHeightForWidth());
        cmbStyleEngine->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cmbStyleEngine, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        wdtStyleOptions = new QWidget(StyleOptionsWidgetClass);
        wdtStyleOptions->setObjectName(QString::fromUtf8("wdtStyleOptions"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wdtStyleOptions->sizePolicy().hasHeightForWidth());
        wdtStyleOptions->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(wdtStyleOptions);

        frmExample = new QFrame(StyleOptionsWidgetClass);
        frmExample->setObjectName(QString::fromUtf8("frmExample"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frmExample->sizePolicy().hasHeightForWidth());
        frmExample->setSizePolicy(sizePolicy2);
        frmExample->setFrameShape(QFrame::StyledPanel);
        frmExample->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(frmExample);


        retranslateUi(StyleOptionsWidgetClass);

        QMetaObject::connectSlotsByName(StyleOptionsWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *StyleOptionsWidgetClass)
    {
        lblMessageType->setText(QApplication::translate("StyleOptionsWidgetClass", "Message type:", 0, QApplication::UnicodeUTF8));
        lblStyleEngine->setText(QApplication::translate("StyleOptionsWidgetClass", "Style engine:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(StyleOptionsWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class StyleOptionsWidgetClass: public Ui_StyleOptionsWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STYLEOPTIONSWIDGET_H
