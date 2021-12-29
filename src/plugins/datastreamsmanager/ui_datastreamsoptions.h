/********************************************************************************
** Form generated from reading UI file 'datastreamsoptions.ui'
**
** Created: Sat Jan 26 02:22:27 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASTREAMSOPTIONS_H
#define UI_DATASTREAMSOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataStreamsOptionsClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *grbProfiles;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblProfile;
    QComboBox *cmbProfile;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbtAddProfile;
    QPushButton *pbtDeleteProfile;
    QWidget *wdtSettings;

    void setupUi(QWidget *DataStreamsOptionsClass)
    {
        if (DataStreamsOptionsClass->objectName().isEmpty())
            DataStreamsOptionsClass->setObjectName(QString::fromUtf8("DataStreamsOptionsClass"));
        DataStreamsOptionsClass->resize(373, 106);
        verticalLayout_2 = new QVBoxLayout(DataStreamsOptionsClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        grbProfiles = new QGroupBox(DataStreamsOptionsClass);
        grbProfiles->setObjectName(QString::fromUtf8("grbProfiles"));
        verticalLayout = new QVBoxLayout(grbProfiles);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblProfile = new QLabel(grbProfiles);
        lblProfile->setObjectName(QString::fromUtf8("lblProfile"));
        lblProfile->setTextFormat(Qt::PlainText);

        horizontalLayout->addWidget(lblProfile);

        cmbProfile = new QComboBox(grbProfiles);
        cmbProfile->setObjectName(QString::fromUtf8("cmbProfile"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbProfile->sizePolicy().hasHeightForWidth());
        cmbProfile->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cmbProfile);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pbtAddProfile = new QPushButton(grbProfiles);
        pbtAddProfile->setObjectName(QString::fromUtf8("pbtAddProfile"));

        horizontalLayout_2->addWidget(pbtAddProfile);

        pbtDeleteProfile = new QPushButton(grbProfiles);
        pbtDeleteProfile->setObjectName(QString::fromUtf8("pbtDeleteProfile"));

        horizontalLayout_2->addWidget(pbtDeleteProfile);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(grbProfiles);

        wdtSettings = new QWidget(DataStreamsOptionsClass);
        wdtSettings->setObjectName(QString::fromUtf8("wdtSettings"));

        verticalLayout_2->addWidget(wdtSettings);

#ifndef QT_NO_SHORTCUT
        lblProfile->setBuddy(cmbProfile);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cmbProfile, pbtAddProfile);
        QWidget::setTabOrder(pbtAddProfile, pbtDeleteProfile);

        retranslateUi(DataStreamsOptionsClass);

        QMetaObject::connectSlotsByName(DataStreamsOptionsClass);
    } // setupUi

    void retranslateUi(QWidget *DataStreamsOptionsClass)
    {
        grbProfiles->setTitle(QApplication::translate("DataStreamsOptionsClass", "Data Streams Profiles", 0, QApplication::UnicodeUTF8));
        lblProfile->setText(QApplication::translate("DataStreamsOptionsClass", "Profile:", 0, QApplication::UnicodeUTF8));
        pbtAddProfile->setText(QApplication::translate("DataStreamsOptionsClass", "Add", 0, QApplication::UnicodeUTF8));
        pbtDeleteProfile->setText(QApplication::translate("DataStreamsOptionsClass", "Delete", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(DataStreamsOptionsClass);
    } // retranslateUi

};

namespace Ui {
    class DataStreamsOptionsClass: public Ui_DataStreamsOptionsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASTREAMSOPTIONS_H
