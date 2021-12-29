/********************************************************************************
** Form generated from reading UI file 'connectionoptionswidget.ui'
**
** Created: Sat Jan 26 02:13:39 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONOPTIONSWIDGET_H
#define UI_CONNECTIONOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectionOptionsWidgetClass
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *chbUseLegacySSL;
    QHBoxLayout *hboxLayout;
    QLabel *label_11;
    QLineEdit *lneHost;
    QLabel *label_12;
    QSpinBox *spbPort;
    QWidget *wdtProxy;

    void setupUi(QWidget *ConnectionOptionsWidgetClass)
    {
        if (ConnectionOptionsWidgetClass->objectName().isEmpty())
            ConnectionOptionsWidgetClass->setObjectName(QString::fromUtf8("ConnectionOptionsWidgetClass"));
        ConnectionOptionsWidgetClass->resize(415, 61);
        verticalLayout = new QVBoxLayout(ConnectionOptionsWidgetClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        chbUseLegacySSL = new QCheckBox(ConnectionOptionsWidgetClass);
        chbUseLegacySSL->setObjectName(QString::fromUtf8("chbUseLegacySSL"));

        verticalLayout->addWidget(chbUseLegacySSL);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_11 = new QLabel(ConnectionOptionsWidgetClass);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setTextFormat(Qt::PlainText);

        hboxLayout->addWidget(label_11);

        lneHost = new QLineEdit(ConnectionOptionsWidgetClass);
        lneHost->setObjectName(QString::fromUtf8("lneHost"));

        hboxLayout->addWidget(lneHost);

        label_12 = new QLabel(ConnectionOptionsWidgetClass);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setTextFormat(Qt::PlainText);

        hboxLayout->addWidget(label_12);

        spbPort = new QSpinBox(ConnectionOptionsWidgetClass);
        spbPort->setObjectName(QString::fromUtf8("spbPort"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spbPort->sizePolicy().hasHeightForWidth());
        spbPort->setSizePolicy(sizePolicy);
        spbPort->setMinimumSize(QSize(60, 0));
        spbPort->setMaximum(65535);
        spbPort->setValue(5222);

        hboxLayout->addWidget(spbPort);


        verticalLayout->addLayout(hboxLayout);

        wdtProxy = new QWidget(ConnectionOptionsWidgetClass);
        wdtProxy->setObjectName(QString::fromUtf8("wdtProxy"));

        verticalLayout->addWidget(wdtProxy);

#ifndef QT_NO_SHORTCUT
        label_11->setBuddy(lneHost);
        label_12->setBuddy(spbPort);
#endif // QT_NO_SHORTCUT

        retranslateUi(ConnectionOptionsWidgetClass);

        QMetaObject::connectSlotsByName(ConnectionOptionsWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *ConnectionOptionsWidgetClass)
    {
        chbUseLegacySSL->setText(QApplication::translate("ConnectionOptionsWidgetClass", "Use legacy SSL connection", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ConnectionOptionsWidgetClass", "Host:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ConnectionOptionsWidgetClass", "Port:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ConnectionOptionsWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class ConnectionOptionsWidgetClass: public Ui_ConnectionOptionsWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONOPTIONSWIDGET_H
