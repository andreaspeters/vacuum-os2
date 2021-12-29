/********************************************************************************
** Form generated from reading UI file 'viewwidget.ui'
**
** Created: Sat Jan 26 02:06:43 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWWIDGET_H
#define UI_VIEWWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewWidgetClass
{
public:
    QVBoxLayout *vblLayout;
    QFrame *wdtViewer;

    void setupUi(QWidget *ViewWidgetClass)
    {
        if (ViewWidgetClass->objectName().isEmpty())
            ViewWidgetClass->setObjectName(QString::fromUtf8("ViewWidgetClass"));
        ViewWidgetClass->resize(510, 299);
        vblLayout = new QVBoxLayout(ViewWidgetClass);
        vblLayout->setSpacing(6);
        vblLayout->setContentsMargins(0, 0, 0, 0);
        vblLayout->setObjectName(QString::fromUtf8("vblLayout"));
        wdtViewer = new QFrame(ViewWidgetClass);
        wdtViewer->setObjectName(QString::fromUtf8("wdtViewer"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wdtViewer->sizePolicy().hasHeightForWidth());
        wdtViewer->setSizePolicy(sizePolicy);
        wdtViewer->setFrameShape(QFrame::StyledPanel);
        wdtViewer->setFrameShadow(QFrame::Sunken);

        vblLayout->addWidget(wdtViewer);


        retranslateUi(ViewWidgetClass);

        QMetaObject::connectSlotsByName(ViewWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *ViewWidgetClass)
    {
        Q_UNUSED(ViewWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class ViewWidgetClass: public Ui_ViewWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWWIDGET_H
