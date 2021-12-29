/********************************************************************************
** Form generated from reading UI file 'notifywidget.ui'
**
** Created: Sat Jan 26 02:21:04 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFYWIDGET_H
#define UI_NOTIFYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "notifytextbrowser.h"

QT_BEGIN_NAMESPACE

class Ui_NotifyWidgetClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frmWindowFrame;
    QVBoxLayout *verticalLayout;
    QLabel *lblCaption;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblIcon;
    QLabel *lblTitle;
    QHBoxLayout *horizontalLayout;
    QLabel *lblImage;
    NotifyTextBrowser *ntbText;

    void setupUi(QWidget *NotifyWidgetClass)
    {
        if (NotifyWidgetClass->objectName().isEmpty())
            NotifyWidgetClass->setObjectName(QString::fromUtf8("NotifyWidgetClass"));
        NotifyWidgetClass->resize(273, 121);
        verticalLayout_2 = new QVBoxLayout(NotifyWidgetClass);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frmWindowFrame = new QFrame(NotifyWidgetClass);
        frmWindowFrame->setObjectName(QString::fromUtf8("frmWindowFrame"));
        frmWindowFrame->setFrameShape(QFrame::Box);
        frmWindowFrame->setLineWidth(1);
        verticalLayout = new QVBoxLayout(frmWindowFrame);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblCaption = new QLabel(frmWindowFrame);
        lblCaption->setObjectName(QString::fromUtf8("lblCaption"));
        lblCaption->setText(QString::fromUtf8("Caption"));
        lblCaption->setTextFormat(Qt::PlainText);
        lblCaption->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lblCaption);

        line = new QFrame(frmWindowFrame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblIcon = new QLabel(frmWindowFrame);
        lblIcon->setObjectName(QString::fromUtf8("lblIcon"));
        lblIcon->setText(QString::fromUtf8("Icon"));
        lblIcon->setTextFormat(Qt::PlainText);

        horizontalLayout_2->addWidget(lblIcon);

        lblTitle = new QLabel(frmWindowFrame);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblTitle->sizePolicy().hasHeightForWidth());
        lblTitle->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setText(QString::fromUtf8("Title"));
        lblTitle->setTextFormat(Qt::PlainText);

        horizontalLayout_2->addWidget(lblTitle);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblImage = new QLabel(frmWindowFrame);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setEnabled(true);
        lblImage->setMinimumSize(QSize(32, 32));
        lblImage->setMaximumSize(QSize(32, 32));
        lblImage->setText(QString::fromUtf8("Image"));
        lblImage->setTextFormat(Qt::PlainText);
        lblImage->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lblImage);

        ntbText = new NotifyTextBrowser(frmWindowFrame);
        ntbText->setObjectName(QString::fromUtf8("ntbText"));
        ntbText->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        ntbText->setFocusPolicy(Qt::NoFocus);
        ntbText->setFrameShape(QFrame::NoFrame);
        ntbText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ntbText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ntbText->setTextInteractionFlags(Qt::NoTextInteraction);
        ntbText->setOpenLinks(false);

        horizontalLayout->addWidget(ntbText);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(frmWindowFrame);


        retranslateUi(NotifyWidgetClass);

        QMetaObject::connectSlotsByName(NotifyWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *NotifyWidgetClass)
    {
        Q_UNUSED(NotifyWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class NotifyWidgetClass: public Ui_NotifyWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFYWIDGET_H
