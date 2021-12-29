/********************************************************************************
** Form generated from reading UI file 'emoticonsoptions.ui'
**
** Created: Sat Jan 26 02:14:33 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMOTICONSOPTIONS_H
#define UI_EMOTICONSOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmoticonsOptionsClass
{
public:
    QHBoxLayout *hboxLayout;
    QListWidget *lwtEmoticons;
    QWidget *wdtButtons;
    QVBoxLayout *vboxLayout;
    QToolButton *tbtUp;
    QToolButton *tbtDown;

    void setupUi(QWidget *EmoticonsOptionsClass)
    {
        if (EmoticonsOptionsClass->objectName().isEmpty())
            EmoticonsOptionsClass->setObjectName(QString::fromUtf8("EmoticonsOptionsClass"));
        EmoticonsOptionsClass->resize(262, 234);
        hboxLayout = new QHBoxLayout(EmoticonsOptionsClass);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lwtEmoticons = new QListWidget(EmoticonsOptionsClass);
        lwtEmoticons->setObjectName(QString::fromUtf8("lwtEmoticons"));

        hboxLayout->addWidget(lwtEmoticons);

        wdtButtons = new QWidget(EmoticonsOptionsClass);
        wdtButtons->setObjectName(QString::fromUtf8("wdtButtons"));
        vboxLayout = new QVBoxLayout(wdtButtons);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tbtUp = new QToolButton(wdtButtons);
        tbtUp->setObjectName(QString::fromUtf8("tbtUp"));

        vboxLayout->addWidget(tbtUp);

        tbtDown = new QToolButton(wdtButtons);
        tbtDown->setObjectName(QString::fromUtf8("tbtDown"));

        vboxLayout->addWidget(tbtDown);


        hboxLayout->addWidget(wdtButtons);


        retranslateUi(EmoticonsOptionsClass);

        QMetaObject::connectSlotsByName(EmoticonsOptionsClass);
    } // setupUi

    void retranslateUi(QWidget *EmoticonsOptionsClass)
    {
        tbtUp->setText(QString());
        tbtDown->setText(QString());
        Q_UNUSED(EmoticonsOptionsClass);
    } // retranslateUi

};

namespace Ui {
    class EmoticonsOptionsClass: public Ui_EmoticonsOptionsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMOTICONSOPTIONS_H
