/********************************************************************************
** Form generated from reading UI file 'simpleoptionswidget.ui'
**
** Created: Sat Jan 26 02:12:18 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLEOPTIONSWIDGET_H
#define UI_SIMPLEOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimpleOptionsWidgetClass
{
public:
    QGridLayout *gridLayout;
    QLabel *lblMessageStyle;
    QComboBox *cmbStyle;
    QLabel *lblVariant;
    QComboBox *cmbVariant;
    QLabel *lblTextFont;
    QHBoxLayout *horizontalLayout;
    QLabel *lblFont;
    QToolButton *tlbSetFont;
    QToolButton *tlbDefaultFont;
    QLabel *lblBackground;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblBackgoundColor;
    QComboBox *cmbBackgoundColor;
    QToolButton *tlbSetImage;
    QToolButton *tlbDefaultImage;
    QCheckBox *chkEnableAnimation;

    void setupUi(QWidget *SimpleOptionsWidgetClass)
    {
        if (SimpleOptionsWidgetClass->objectName().isEmpty())
            SimpleOptionsWidgetClass->setObjectName(QString::fromUtf8("SimpleOptionsWidgetClass"));
        SimpleOptionsWidgetClass->resize(434, 125);
        gridLayout = new QGridLayout(SimpleOptionsWidgetClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblMessageStyle = new QLabel(SimpleOptionsWidgetClass);
        lblMessageStyle->setObjectName(QString::fromUtf8("lblMessageStyle"));
        lblMessageStyle->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblMessageStyle, 0, 0, 1, 1);

        cmbStyle = new QComboBox(SimpleOptionsWidgetClass);
        cmbStyle->setObjectName(QString::fromUtf8("cmbStyle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbStyle->sizePolicy().hasHeightForWidth());
        cmbStyle->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cmbStyle, 0, 1, 1, 1);

        lblVariant = new QLabel(SimpleOptionsWidgetClass);
        lblVariant->setObjectName(QString::fromUtf8("lblVariant"));
        lblVariant->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblVariant, 1, 0, 1, 1);

        cmbVariant = new QComboBox(SimpleOptionsWidgetClass);
        cmbVariant->setObjectName(QString::fromUtf8("cmbVariant"));
        sizePolicy.setHeightForWidth(cmbVariant->sizePolicy().hasHeightForWidth());
        cmbVariant->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cmbVariant, 1, 1, 1, 1);

        lblTextFont = new QLabel(SimpleOptionsWidgetClass);
        lblTextFont->setObjectName(QString::fromUtf8("lblTextFont"));
        lblTextFont->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblTextFont, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblFont = new QLabel(SimpleOptionsWidgetClass);
        lblFont->setObjectName(QString::fromUtf8("lblFont"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblFont->sizePolicy().hasHeightForWidth());
        lblFont->setSizePolicy(sizePolicy1);
        lblFont->setFrameShape(QFrame::Panel);
        lblFont->setFrameShadow(QFrame::Sunken);
        lblFont->setTextFormat(Qt::PlainText);

        horizontalLayout->addWidget(lblFont);

        tlbSetFont = new QToolButton(SimpleOptionsWidgetClass);
        tlbSetFont->setObjectName(QString::fromUtf8("tlbSetFont"));
        tlbSetFont->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(tlbSetFont);

        tlbDefaultFont = new QToolButton(SimpleOptionsWidgetClass);
        tlbDefaultFont->setObjectName(QString::fromUtf8("tlbDefaultFont"));

        horizontalLayout->addWidget(tlbDefaultFont);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        lblBackground = new QLabel(SimpleOptionsWidgetClass);
        lblBackground->setObjectName(QString::fromUtf8("lblBackground"));
        lblBackground->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblBackground, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblBackgoundColor = new QLabel(SimpleOptionsWidgetClass);
        lblBackgoundColor->setObjectName(QString::fromUtf8("lblBackgoundColor"));
        lblBackgoundColor->setTextFormat(Qt::PlainText);

        horizontalLayout_2->addWidget(lblBackgoundColor);

        cmbBackgoundColor = new QComboBox(SimpleOptionsWidgetClass);
        cmbBackgoundColor->setObjectName(QString::fromUtf8("cmbBackgoundColor"));
        sizePolicy.setHeightForWidth(cmbBackgoundColor->sizePolicy().hasHeightForWidth());
        cmbBackgoundColor->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(cmbBackgoundColor);

        tlbSetImage = new QToolButton(SimpleOptionsWidgetClass);
        tlbSetImage->setObjectName(QString::fromUtf8("tlbSetImage"));

        horizontalLayout_2->addWidget(tlbSetImage);

        tlbDefaultImage = new QToolButton(SimpleOptionsWidgetClass);
        tlbDefaultImage->setObjectName(QString::fromUtf8("tlbDefaultImage"));

        horizontalLayout_2->addWidget(tlbDefaultImage);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        chkEnableAnimation = new QCheckBox(SimpleOptionsWidgetClass);
        chkEnableAnimation->setObjectName(QString::fromUtf8("chkEnableAnimation"));

        gridLayout->addWidget(chkEnableAnimation, 4, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        lblMessageStyle->setBuddy(cmbStyle);
        lblVariant->setBuddy(cmbVariant);
        lblBackgoundColor->setBuddy(cmbBackgoundColor);
#endif // QT_NO_SHORTCUT

        retranslateUi(SimpleOptionsWidgetClass);

        QMetaObject::connectSlotsByName(SimpleOptionsWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *SimpleOptionsWidgetClass)
    {
        lblMessageStyle->setText(QApplication::translate("SimpleOptionsWidgetClass", "Message Style:", 0, QApplication::UnicodeUTF8));
        lblVariant->setText(QApplication::translate("SimpleOptionsWidgetClass", "Variant:", 0, QApplication::UnicodeUTF8));
        lblTextFont->setText(QApplication::translate("SimpleOptionsWidgetClass", "Text Font:", 0, QApplication::UnicodeUTF8));
        tlbSetFont->setText(QApplication::translate("SimpleOptionsWidgetClass", "Set Font...", 0, QApplication::UnicodeUTF8));
        tlbDefaultFont->setText(QApplication::translate("SimpleOptionsWidgetClass", "Default", 0, QApplication::UnicodeUTF8));
        lblBackground->setText(QApplication::translate("SimpleOptionsWidgetClass", "Background:", 0, QApplication::UnicodeUTF8));
        lblBackgoundColor->setText(QApplication::translate("SimpleOptionsWidgetClass", "Color:", 0, QApplication::UnicodeUTF8));
        tlbSetImage->setText(QApplication::translate("SimpleOptionsWidgetClass", "Set Image...", 0, QApplication::UnicodeUTF8));
        tlbDefaultImage->setText(QApplication::translate("SimpleOptionsWidgetClass", "Default", 0, QApplication::UnicodeUTF8));
        chkEnableAnimation->setText(QApplication::translate("SimpleOptionsWidgetClass", "Enable animation (may be slow)", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SimpleOptionsWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class SimpleOptionsWidgetClass: public Ui_SimpleOptionsWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLEOPTIONSWIDGET_H
