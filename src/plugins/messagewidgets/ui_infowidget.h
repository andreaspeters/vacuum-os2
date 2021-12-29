/********************************************************************************
** Form generated from reading UI file 'infowidget.ui'
**
** Created: Sat Jan 26 02:06:43 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOWIDGET_H
#define UI_INFOWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoWidgetClass
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *lblAvatar;
    QGridLayout *gridLayout;
    QLabel *lblName;
    QLabel *lblAccount;
    QLabel *lblStatus;

    void setupUi(QWidget *InfoWidgetClass)
    {
        if (InfoWidgetClass->objectName().isEmpty())
            InfoWidgetClass->setObjectName(QString::fromUtf8("InfoWidgetClass"));
        InfoWidgetClass->resize(419, 41);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InfoWidgetClass->sizePolicy().hasHeightForWidth());
        InfoWidgetClass->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(InfoWidgetClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblAvatar = new QLabel(InfoWidgetClass);
        lblAvatar->setObjectName(QString::fromUtf8("lblAvatar"));
        lblAvatar->setTextFormat(Qt::PlainText);
        lblAvatar->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lblAvatar);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(3);
        lblName = new QLabel(InfoWidgetClass);
        lblName->setObjectName(QString::fromUtf8("lblName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblName->sizePolicy().hasHeightForWidth());
        lblName->setSizePolicy(sizePolicy1);
        lblName->setTextFormat(Qt::RichText);
        lblName->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lblName, 0, 0, 1, 1);

        lblAccount = new QLabel(InfoWidgetClass);
        lblAccount->setObjectName(QString::fromUtf8("lblAccount"));
        lblAccount->setTextFormat(Qt::PlainText);
        lblAccount->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lblAccount, 0, 1, 1, 1);

        lblStatus = new QLabel(InfoWidgetClass);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        sizePolicy1.setHeightForWidth(lblStatus->sizePolicy().hasHeightForWidth());
        lblStatus->setSizePolicy(sizePolicy1);
        lblStatus->setTextFormat(Qt::PlainText);
        lblStatus->setWordWrap(true);
        lblStatus->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lblStatus, 1, 0, 1, 2);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(InfoWidgetClass);

        QMetaObject::connectSlotsByName(InfoWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *InfoWidgetClass)
    {
        lblAvatar->setText(QString());
        Q_UNUSED(InfoWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class InfoWidgetClass: public Ui_InfoWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOWIDGET_H
