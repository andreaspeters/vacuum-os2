/********************************************************************************
** Form generated from reading UI file 'connectionoptionswidget.ui'
**
** Created: Sat Jan 26 02:13:17 2013
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
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectionOptionsWidgetClass
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *grbOptions;
    QVBoxLayout *vboxLayout1;
    QWidget *wdtSelectConnection;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QLabel *lblConnection;
    QComboBox *cmbConnections;
    QFrame *line;

    void setupUi(QWidget *ConnectionOptionsWidgetClass)
    {
        if (ConnectionOptionsWidgetClass->objectName().isEmpty())
            ConnectionOptionsWidgetClass->setObjectName(QString::fromUtf8("ConnectionOptionsWidgetClass"));
        ConnectionOptionsWidgetClass->resize(449, 67);
        vboxLayout = new QVBoxLayout(ConnectionOptionsWidgetClass);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        grbOptions = new QGroupBox(ConnectionOptionsWidgetClass);
        grbOptions->setObjectName(QString::fromUtf8("grbOptions"));
        vboxLayout1 = new QVBoxLayout(grbOptions);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        wdtSelectConnection = new QWidget(grbOptions);
        wdtSelectConnection->setObjectName(QString::fromUtf8("wdtSelectConnection"));
        vboxLayout2 = new QVBoxLayout(wdtSelectConnection);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lblConnection = new QLabel(wdtSelectConnection);
        lblConnection->setObjectName(QString::fromUtf8("lblConnection"));
        lblConnection->setTextFormat(Qt::PlainText);

        hboxLayout->addWidget(lblConnection);

        cmbConnections = new QComboBox(wdtSelectConnection);
        cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbConnections->sizePolicy().hasHeightForWidth());
        cmbConnections->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(cmbConnections);


        vboxLayout2->addLayout(hboxLayout);

        line = new QFrame(wdtSelectConnection);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout2->addWidget(line);


        vboxLayout1->addWidget(wdtSelectConnection);


        vboxLayout->addWidget(grbOptions);

#ifndef QT_NO_SHORTCUT
        lblConnection->setBuddy(cmbConnections);
#endif // QT_NO_SHORTCUT

        retranslateUi(ConnectionOptionsWidgetClass);

        QMetaObject::connectSlotsByName(ConnectionOptionsWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *ConnectionOptionsWidgetClass)
    {
        grbOptions->setTitle(QApplication::translate("ConnectionOptionsWidgetClass", "Connection", 0, QApplication::UnicodeUTF8));
        lblConnection->setText(QApplication::translate("ConnectionOptionsWidgetClass", "Connection:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ConnectionOptionsWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class ConnectionOptionsWidgetClass: public Ui_ConnectionOptionsWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONOPTIONSWIDGET_H
