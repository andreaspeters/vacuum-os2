/********************************************************************************
** Form generated from reading UI file 'proxysettingswidget.ui'
**
** Created: Sat Jan 26 02:13:17 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROXYSETTINGSWIDGET_H
#define UI_PROXYSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProxySettingsWidgetClass
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *lblProxy;
    QComboBox *cmbProxy;
    QPushButton *pbtEditProxy;

    void setupUi(QWidget *ProxySettingsWidgetClass)
    {
        if (ProxySettingsWidgetClass->objectName().isEmpty())
            ProxySettingsWidgetClass->setObjectName(QString::fromUtf8("ProxySettingsWidgetClass"));
        ProxySettingsWidgetClass->resize(482, 24);
        horizontalLayout = new QHBoxLayout(ProxySettingsWidgetClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblProxy = new QLabel(ProxySettingsWidgetClass);
        lblProxy->setObjectName(QString::fromUtf8("lblProxy"));
        lblProxy->setTextFormat(Qt::PlainText);

        horizontalLayout->addWidget(lblProxy);

        cmbProxy = new QComboBox(ProxySettingsWidgetClass);
        cmbProxy->setObjectName(QString::fromUtf8("cmbProxy"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbProxy->sizePolicy().hasHeightForWidth());
        cmbProxy->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cmbProxy);

        pbtEditProxy = new QPushButton(ProxySettingsWidgetClass);
        pbtEditProxy->setObjectName(QString::fromUtf8("pbtEditProxy"));

        horizontalLayout->addWidget(pbtEditProxy);

#ifndef QT_NO_SHORTCUT
        lblProxy->setBuddy(cmbProxy);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cmbProxy, pbtEditProxy);

        retranslateUi(ProxySettingsWidgetClass);

        QMetaObject::connectSlotsByName(ProxySettingsWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *ProxySettingsWidgetClass)
    {
        lblProxy->setText(QApplication::translate("ProxySettingsWidgetClass", "Proxy:", 0, QApplication::UnicodeUTF8));
        pbtEditProxy->setText(QApplication::translate("ProxySettingsWidgetClass", "Edit", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ProxySettingsWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class ProxySettingsWidgetClass: public Ui_ProxySettingsWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROXYSETTINGSWIDGET_H
