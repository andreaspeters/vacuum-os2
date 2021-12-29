/********************************************************************************
** Form generated from reading UI file 'adiumoptionswidget.ui'
**
** Created: Sat Jan 26 02:08:13 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADIUMOPTIONSWIDGET_H
#define UI_ADIUMOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdiumOptionsWidgetClass
{
public:
    QGridLayout *gridLayout;
    QLabel *lblMessageStyle;
    QComboBox *cmbStyle;
    QLabel *lblVariant;
    QComboBox *cmbVariant;
    QLabel *lblTextFont;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblFont;
    QToolButton *tlbSetFont;
    QToolButton *tlbDefaultFont;
    QLabel *lblBackground;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblBackgoundColor;
    QComboBox *cmbBackgoundColor;
    QToolButton *tlbDefaultImage;
    QHBoxLayout *horizontalLayout;
    QToolButton *tlbSetImage;
    QLabel *lblImageLayout;
    QComboBox *cmbImageLayout;

    void setupUi(QWidget *AdiumOptionsWidgetClass)
    {
        if (AdiumOptionsWidgetClass->objectName().isEmpty())
            AdiumOptionsWidgetClass->setObjectName(QString::fromUtf8("AdiumOptionsWidgetClass"));
        AdiumOptionsWidgetClass->resize(465, 129);
        gridLayout = new QGridLayout(AdiumOptionsWidgetClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblMessageStyle = new QLabel(AdiumOptionsWidgetClass);
        lblMessageStyle->setObjectName(QString::fromUtf8("lblMessageStyle"));
        lblMessageStyle->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblMessageStyle, 0, 0, 1, 1);

        cmbStyle = new QComboBox(AdiumOptionsWidgetClass);
        cmbStyle->setObjectName(QString::fromUtf8("cmbStyle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbStyle->sizePolicy().hasHeightForWidth());
        cmbStyle->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cmbStyle, 0, 1, 1, 1);

        lblVariant = new QLabel(AdiumOptionsWidgetClass);
        lblVariant->setObjectName(QString::fromUtf8("lblVariant"));
        lblVariant->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblVariant, 1, 0, 1, 1);

        cmbVariant = new QComboBox(AdiumOptionsWidgetClass);
        cmbVariant->setObjectName(QString::fromUtf8("cmbVariant"));
        sizePolicy.setHeightForWidth(cmbVariant->sizePolicy().hasHeightForWidth());
        cmbVariant->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cmbVariant, 1, 1, 1, 1);

        lblTextFont = new QLabel(AdiumOptionsWidgetClass);
        lblTextFont->setObjectName(QString::fromUtf8("lblTextFont"));
        lblTextFont->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblTextFont, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lblFont = new QLabel(AdiumOptionsWidgetClass);
        lblFont->setObjectName(QString::fromUtf8("lblFont"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblFont->sizePolicy().hasHeightForWidth());
        lblFont->setSizePolicy(sizePolicy1);
        lblFont->setFrameShape(QFrame::Panel);
        lblFont->setFrameShadow(QFrame::Sunken);
        lblFont->setTextFormat(Qt::PlainText);

        horizontalLayout_4->addWidget(lblFont);

        tlbSetFont = new QToolButton(AdiumOptionsWidgetClass);
        tlbSetFont->setObjectName(QString::fromUtf8("tlbSetFont"));
        tlbSetFont->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_4->addWidget(tlbSetFont);

        tlbDefaultFont = new QToolButton(AdiumOptionsWidgetClass);
        tlbDefaultFont->setObjectName(QString::fromUtf8("tlbDefaultFont"));

        horizontalLayout_4->addWidget(tlbDefaultFont);


        gridLayout->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        lblBackground = new QLabel(AdiumOptionsWidgetClass);
        lblBackground->setObjectName(QString::fromUtf8("lblBackground"));
        lblBackground->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblBackground, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblBackgoundColor = new QLabel(AdiumOptionsWidgetClass);
        lblBackgoundColor->setObjectName(QString::fromUtf8("lblBackgoundColor"));
        lblBackgoundColor->setTextFormat(Qt::PlainText);

        horizontalLayout_2->addWidget(lblBackgoundColor);

        cmbBackgoundColor = new QComboBox(AdiumOptionsWidgetClass);
        cmbBackgoundColor->setObjectName(QString::fromUtf8("cmbBackgoundColor"));
        sizePolicy.setHeightForWidth(cmbBackgoundColor->sizePolicy().hasHeightForWidth());
        cmbBackgoundColor->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(cmbBackgoundColor);

        tlbDefaultImage = new QToolButton(AdiumOptionsWidgetClass);
        tlbDefaultImage->setObjectName(QString::fromUtf8("tlbDefaultImage"));

        horizontalLayout_2->addWidget(tlbDefaultImage);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tlbSetImage = new QToolButton(AdiumOptionsWidgetClass);
        tlbSetImage->setObjectName(QString::fromUtf8("tlbSetImage"));

        horizontalLayout->addWidget(tlbSetImage);

        lblImageLayout = new QLabel(AdiumOptionsWidgetClass);
        lblImageLayout->setObjectName(QString::fromUtf8("lblImageLayout"));
        lblImageLayout->setTextFormat(Qt::PlainText);

        horizontalLayout->addWidget(lblImageLayout);

        cmbImageLayout = new QComboBox(AdiumOptionsWidgetClass);
        cmbImageLayout->setObjectName(QString::fromUtf8("cmbImageLayout"));
        sizePolicy.setHeightForWidth(cmbImageLayout->sizePolicy().hasHeightForWidth());
        cmbImageLayout->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cmbImageLayout);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        lblMessageStyle->setBuddy(cmbStyle);
        lblVariant->setBuddy(cmbVariant);
        lblBackgoundColor->setBuddy(cmbBackgoundColor);
        lblImageLayout->setBuddy(cmbImageLayout);
#endif // QT_NO_SHORTCUT

        retranslateUi(AdiumOptionsWidgetClass);

        QMetaObject::connectSlotsByName(AdiumOptionsWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *AdiumOptionsWidgetClass)
    {
        lblMessageStyle->setText(QApplication::translate("AdiumOptionsWidgetClass", "Message Style:", 0, QApplication::UnicodeUTF8));
        lblVariant->setText(QApplication::translate("AdiumOptionsWidgetClass", "Variant:", 0, QApplication::UnicodeUTF8));
        lblTextFont->setText(QApplication::translate("AdiumOptionsWidgetClass", "Text Font:", 0, QApplication::UnicodeUTF8));
        tlbSetFont->setText(QApplication::translate("AdiumOptionsWidgetClass", "Set Font...", 0, QApplication::UnicodeUTF8));
        tlbDefaultFont->setText(QApplication::translate("AdiumOptionsWidgetClass", "Default", 0, QApplication::UnicodeUTF8));
        lblBackground->setText(QApplication::translate("AdiumOptionsWidgetClass", "Background:", 0, QApplication::UnicodeUTF8));
        lblBackgoundColor->setText(QApplication::translate("AdiumOptionsWidgetClass", "Color:", 0, QApplication::UnicodeUTF8));
        tlbDefaultImage->setText(QApplication::translate("AdiumOptionsWidgetClass", "Default", 0, QApplication::UnicodeUTF8));
        tlbSetImage->setText(QApplication::translate("AdiumOptionsWidgetClass", "Set Image...", 0, QApplication::UnicodeUTF8));
        lblImageLayout->setText(QApplication::translate("AdiumOptionsWidgetClass", "Layout:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(AdiumOptionsWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class AdiumOptionsWidgetClass: public Ui_AdiumOptionsWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADIUMOPTIONSWIDGET_H
