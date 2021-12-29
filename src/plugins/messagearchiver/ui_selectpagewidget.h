/********************************************************************************
** Form generated from reading UI file 'selectpagewidget.ui'
**
** Created: Sat Jan 26 02:19:30 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTPAGEWIDGET_H
#define UI_SELECTPAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectPageWidgetClass
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *tlbPrevious;
    QSpacerItem *horizontalSpacer;
    QToolButton *tlbMonth;
    QToolButton *tlbYear;
    QSpinBox *spbYear;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *tlbNext;

    void setupUi(QWidget *SelectPageWidgetClass)
    {
        if (SelectPageWidgetClass->objectName().isEmpty())
            SelectPageWidgetClass->setObjectName(QString::fromUtf8("SelectPageWidgetClass"));
        SelectPageWidgetClass->resize(352, 22);
        horizontalLayout = new QHBoxLayout(SelectPageWidgetClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tlbPrevious = new QToolButton(SelectPageWidgetClass);
        tlbPrevious->setObjectName(QString::fromUtf8("tlbPrevious"));
        tlbPrevious->setAutoRepeat(true);
        tlbPrevious->setAutoRaise(true);

        horizontalLayout->addWidget(tlbPrevious);

        horizontalSpacer = new QSpacerItem(86, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        tlbMonth = new QToolButton(SelectPageWidgetClass);
        tlbMonth->setObjectName(QString::fromUtf8("tlbMonth"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tlbMonth->sizePolicy().hasHeightForWidth());
        tlbMonth->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        tlbMonth->setFont(font);
        tlbMonth->setPopupMode(QToolButton::InstantPopup);
        tlbMonth->setToolButtonStyle(Qt::ToolButtonTextOnly);
        tlbMonth->setAutoRaise(true);

        horizontalLayout->addWidget(tlbMonth);

        tlbYear = new QToolButton(SelectPageWidgetClass);
        tlbYear->setObjectName(QString::fromUtf8("tlbYear"));
        sizePolicy.setHeightForWidth(tlbYear->sizePolicy().hasHeightForWidth());
        tlbYear->setSizePolicy(sizePolicy);
        tlbYear->setFont(font);
        tlbYear->setToolButtonStyle(Qt::ToolButtonTextOnly);
        tlbYear->setAutoRaise(true);

        horizontalLayout->addWidget(tlbYear);

        spbYear = new QSpinBox(SelectPageWidgetClass);
        spbYear->setObjectName(QString::fromUtf8("spbYear"));
        spbYear->setFocusPolicy(Qt::StrongFocus);
        spbYear->setFrame(false);
        spbYear->setMaximum(9999);

        horizontalLayout->addWidget(spbYear);

        horizontalSpacer_2 = new QSpacerItem(86, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        tlbNext = new QToolButton(SelectPageWidgetClass);
        tlbNext->setObjectName(QString::fromUtf8("tlbNext"));
        tlbNext->setAutoRepeat(true);
        tlbNext->setAutoRaise(true);

        horizontalLayout->addWidget(tlbNext);

        QWidget::setTabOrder(tlbPrevious, tlbMonth);
        QWidget::setTabOrder(tlbMonth, tlbYear);
        QWidget::setTabOrder(tlbYear, spbYear);
        QWidget::setTabOrder(spbYear, tlbNext);

        retranslateUi(SelectPageWidgetClass);

        QMetaObject::connectSlotsByName(SelectPageWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *SelectPageWidgetClass)
    {
        Q_UNUSED(SelectPageWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class SelectPageWidgetClass: public Ui_SelectPageWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTPAGEWIDGET_H
