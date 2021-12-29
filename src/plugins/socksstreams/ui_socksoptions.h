/********************************************************************************
** Form generated from reading UI file 'socksoptions.ui'
**
** Created: Sat Jan 26 02:23:41 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOCKSOPTIONS_H
#define UI_SOCKSOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SocksOptionsClass
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *grbSocksStreams;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *grbOutgoingConnections;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblConnectTimeout;
    QSpinBox *spbConnectTimeout;
    QLabel *lblSeconds;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *grbConnectionProxy;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *chbUseAccountNetworkProxy;
    QWidget *wdtProxySettings;
    QGroupBox *grbIncomingConnections;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *chbDisableDirectConnect;
    QHBoxLayout *horizontalLayout;
    QLabel *pblPort;
    QSpinBox *spbPort;
    QSpacerItem *horizontalSpacer;
    QGroupBox *grbPortForward;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblForwardHost;
    QLineEdit *lneForwardHost;
    QLabel *pblForwardPort;
    QSpinBox *spbForwardPort;
    QGroupBox *grbStreamProxy;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *chbUseAccountStreamProxy;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lneStreamProxy;
    QListWidget *ltwStreamProxy;
    QVBoxLayout *verticalLayout;
    QPushButton *pbtAddStreamProxy;
    QPushButton *pbtStreamProxyUp;
    QPushButton *pbtStreamProxyDown;
    QPushButton *pbtDeleteStreamProxy;

    void setupUi(QWidget *SocksOptionsClass)
    {
        if (SocksOptionsClass->objectName().isEmpty())
            SocksOptionsClass->setObjectName(QString::fromUtf8("SocksOptionsClass"));
        SocksOptionsClass->resize(333, 466);
        verticalLayout_4 = new QVBoxLayout(SocksOptionsClass);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        grbSocksStreams = new QGroupBox(SocksOptionsClass);
        grbSocksStreams->setObjectName(QString::fromUtf8("grbSocksStreams"));
        verticalLayout_8 = new QVBoxLayout(grbSocksStreams);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        grbOutgoingConnections = new QGroupBox(grbSocksStreams);
        grbOutgoingConnections->setObjectName(QString::fromUtf8("grbOutgoingConnections"));
        verticalLayout_3 = new QVBoxLayout(grbOutgoingConnections);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lblConnectTimeout = new QLabel(grbOutgoingConnections);
        lblConnectTimeout->setObjectName(QString::fromUtf8("lblConnectTimeout"));

        horizontalLayout_4->addWidget(lblConnectTimeout);

        spbConnectTimeout = new QSpinBox(grbOutgoingConnections);
        spbConnectTimeout->setObjectName(QString::fromUtf8("spbConnectTimeout"));
        spbConnectTimeout->setMinimum(1);
        spbConnectTimeout->setMaximum(60);

        horizontalLayout_4->addWidget(spbConnectTimeout);

        lblSeconds = new QLabel(grbOutgoingConnections);
        lblSeconds->setObjectName(QString::fromUtf8("lblSeconds"));

        horizontalLayout_4->addWidget(lblSeconds);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        grbConnectionProxy = new QGroupBox(grbOutgoingConnections);
        grbConnectionProxy->setObjectName(QString::fromUtf8("grbConnectionProxy"));
        verticalLayout_7 = new QVBoxLayout(grbConnectionProxy);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        chbUseAccountNetworkProxy = new QCheckBox(grbConnectionProxy);
        chbUseAccountNetworkProxy->setObjectName(QString::fromUtf8("chbUseAccountNetworkProxy"));

        verticalLayout_7->addWidget(chbUseAccountNetworkProxy);

        wdtProxySettings = new QWidget(grbConnectionProxy);
        wdtProxySettings->setObjectName(QString::fromUtf8("wdtProxySettings"));

        verticalLayout_7->addWidget(wdtProxySettings);


        verticalLayout_3->addWidget(grbConnectionProxy);


        verticalLayout_8->addWidget(grbOutgoingConnections);

        grbIncomingConnections = new QGroupBox(grbSocksStreams);
        grbIncomingConnections->setObjectName(QString::fromUtf8("grbIncomingConnections"));
        verticalLayout_6 = new QVBoxLayout(grbIncomingConnections);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        chbDisableDirectConnect = new QCheckBox(grbIncomingConnections);
        chbDisableDirectConnect->setObjectName(QString::fromUtf8("chbDisableDirectConnect"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chbDisableDirectConnect->sizePolicy().hasHeightForWidth());
        chbDisableDirectConnect->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(chbDisableDirectConnect);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pblPort = new QLabel(grbIncomingConnections);
        pblPort->setObjectName(QString::fromUtf8("pblPort"));
        pblPort->setTextFormat(Qt::PlainText);

        horizontalLayout->addWidget(pblPort);

        spbPort = new QSpinBox(grbIncomingConnections);
        spbPort->setObjectName(QString::fromUtf8("spbPort"));
        spbPort->setMinimum(1);
        spbPort->setMaximum(65535);

        horizontalLayout->addWidget(spbPort);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout);

        grbPortForward = new QGroupBox(grbIncomingConnections);
        grbPortForward->setObjectName(QString::fromUtf8("grbPortForward"));
        horizontalLayout_3 = new QHBoxLayout(grbPortForward);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lblForwardHost = new QLabel(grbPortForward);
        lblForwardHost->setObjectName(QString::fromUtf8("lblForwardHost"));
        lblForwardHost->setTextFormat(Qt::PlainText);

        horizontalLayout_3->addWidget(lblForwardHost);

        lneForwardHost = new QLineEdit(grbPortForward);
        lneForwardHost->setObjectName(QString::fromUtf8("lneForwardHost"));

        horizontalLayout_3->addWidget(lneForwardHost);

        pblForwardPort = new QLabel(grbPortForward);
        pblForwardPort->setObjectName(QString::fromUtf8("pblForwardPort"));
        pblForwardPort->setTextFormat(Qt::PlainText);

        horizontalLayout_3->addWidget(pblForwardPort);

        spbForwardPort = new QSpinBox(grbPortForward);
        spbForwardPort->setObjectName(QString::fromUtf8("spbForwardPort"));
        spbForwardPort->setMaximum(65536);

        horizontalLayout_3->addWidget(spbForwardPort);


        verticalLayout_6->addWidget(grbPortForward);


        verticalLayout_8->addWidget(grbIncomingConnections);

        grbStreamProxy = new QGroupBox(grbSocksStreams);
        grbStreamProxy->setObjectName(QString::fromUtf8("grbStreamProxy"));
        verticalLayout_5 = new QVBoxLayout(grbStreamProxy);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        chbUseAccountStreamProxy = new QCheckBox(grbStreamProxy);
        chbUseAccountStreamProxy->setObjectName(QString::fromUtf8("chbUseAccountStreamProxy"));

        verticalLayout_5->addWidget(chbUseAccountStreamProxy);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lneStreamProxy = new QLineEdit(grbStreamProxy);
        lneStreamProxy->setObjectName(QString::fromUtf8("lneStreamProxy"));

        verticalLayout_2->addWidget(lneStreamProxy);

        ltwStreamProxy = new QListWidget(grbStreamProxy);
        ltwStreamProxy->setObjectName(QString::fromUtf8("ltwStreamProxy"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ltwStreamProxy->sizePolicy().hasHeightForWidth());
        ltwStreamProxy->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(ltwStreamProxy);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pbtAddStreamProxy = new QPushButton(grbStreamProxy);
        pbtAddStreamProxy->setObjectName(QString::fromUtf8("pbtAddStreamProxy"));

        verticalLayout->addWidget(pbtAddStreamProxy);

        pbtStreamProxyUp = new QPushButton(grbStreamProxy);
        pbtStreamProxyUp->setObjectName(QString::fromUtf8("pbtStreamProxyUp"));

        verticalLayout->addWidget(pbtStreamProxyUp);

        pbtStreamProxyDown = new QPushButton(grbStreamProxy);
        pbtStreamProxyDown->setObjectName(QString::fromUtf8("pbtStreamProxyDown"));

        verticalLayout->addWidget(pbtStreamProxyDown);

        pbtDeleteStreamProxy = new QPushButton(grbStreamProxy);
        pbtDeleteStreamProxy->setObjectName(QString::fromUtf8("pbtDeleteStreamProxy"));

        verticalLayout->addWidget(pbtDeleteStreamProxy);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_8->addWidget(grbStreamProxy);


        verticalLayout_4->addWidget(grbSocksStreams);

#ifndef QT_NO_SHORTCUT
        lblConnectTimeout->setBuddy(spbConnectTimeout);
        pblPort->setBuddy(spbPort);
        lblForwardHost->setBuddy(lneForwardHost);
        pblForwardPort->setBuddy(spbForwardPort);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(spbConnectTimeout, chbUseAccountNetworkProxy);
        QWidget::setTabOrder(chbUseAccountNetworkProxy, chbDisableDirectConnect);
        QWidget::setTabOrder(chbDisableDirectConnect, spbPort);
        QWidget::setTabOrder(spbPort, lneForwardHost);
        QWidget::setTabOrder(lneForwardHost, spbForwardPort);
        QWidget::setTabOrder(spbForwardPort, chbUseAccountStreamProxy);
        QWidget::setTabOrder(chbUseAccountStreamProxy, lneStreamProxy);
        QWidget::setTabOrder(lneStreamProxy, ltwStreamProxy);
        QWidget::setTabOrder(ltwStreamProxy, pbtAddStreamProxy);
        QWidget::setTabOrder(pbtAddStreamProxy, pbtStreamProxyUp);
        QWidget::setTabOrder(pbtStreamProxyUp, pbtStreamProxyDown);
        QWidget::setTabOrder(pbtStreamProxyDown, pbtDeleteStreamProxy);

        retranslateUi(SocksOptionsClass);
        QObject::connect(chbDisableDirectConnect, SIGNAL(toggled(bool)), spbPort, SLOT(setDisabled(bool)));
        QObject::connect(chbDisableDirectConnect, SIGNAL(toggled(bool)), grbPortForward, SLOT(setDisabled(bool)));
        QObject::connect(chbUseAccountNetworkProxy, SIGNAL(toggled(bool)), wdtProxySettings, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(SocksOptionsClass);
    } // setupUi

    void retranslateUi(QWidget *SocksOptionsClass)
    {
        grbOutgoingConnections->setTitle(QApplication::translate("SocksOptionsClass", "Outgoing Connections", 0, QApplication::UnicodeUTF8));
        lblConnectTimeout->setText(QApplication::translate("SocksOptionsClass", "Connect timeout:", 0, QApplication::UnicodeUTF8));
        lblSeconds->setText(QApplication::translate("SocksOptionsClass", "seconds", 0, QApplication::UnicodeUTF8));
        grbConnectionProxy->setTitle(QApplication::translate("SocksOptionsClass", "Connection Proxy", 0, QApplication::UnicodeUTF8));
        chbUseAccountNetworkProxy->setText(QApplication::translate("SocksOptionsClass", "Use account connection proxy settings", 0, QApplication::UnicodeUTF8));
        grbIncomingConnections->setTitle(QApplication::translate("SocksOptionsClass", "Incoming Connections", 0, QApplication::UnicodeUTF8));
        chbDisableDirectConnect->setText(QApplication::translate("SocksOptionsClass", "Disable direct connections", 0, QApplication::UnicodeUTF8));
        pblPort->setText(QApplication::translate("SocksOptionsClass", "Listening port:", 0, QApplication::UnicodeUTF8));
        grbPortForward->setTitle(QApplication::translate("SocksOptionsClass", "Port Forwarding", 0, QApplication::UnicodeUTF8));
        lblForwardHost->setText(QApplication::translate("SocksOptionsClass", "Host:", 0, QApplication::UnicodeUTF8));
        pblForwardPort->setText(QApplication::translate("SocksOptionsClass", "Port:", 0, QApplication::UnicodeUTF8));
        grbStreamProxy->setTitle(QApplication::translate("SocksOptionsClass", "Stream Proxy", 0, QApplication::UnicodeUTF8));
        chbUseAccountStreamProxy->setText(QApplication::translate("SocksOptionsClass", "Use proxy on account server", 0, QApplication::UnicodeUTF8));
        pbtAddStreamProxy->setText(QApplication::translate("SocksOptionsClass", "Add", 0, QApplication::UnicodeUTF8));
        pbtStreamProxyUp->setText(QApplication::translate("SocksOptionsClass", "Up", 0, QApplication::UnicodeUTF8));
        pbtStreamProxyDown->setText(QApplication::translate("SocksOptionsClass", "Down", 0, QApplication::UnicodeUTF8));
        pbtDeleteStreamProxy->setText(QApplication::translate("SocksOptionsClass", "Delete", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SocksOptionsClass);
    } // retranslateUi

};

namespace Ui {
    class SocksOptionsClass: public Ui_SocksOptionsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOCKSOPTIONS_H
