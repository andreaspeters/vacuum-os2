/********************************************************************************
** Form generated from reading UI file 'archivestreamoptions.ui'
**
** Created: Sat Jan 26 02:19:30 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCHIVESTREAMOPTIONS_H
#define UI_ARCHIVESTREAMOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArchiveStreamOptionsClass
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grbAuto;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *chbAutoSave;
    QGroupBox *grbMethod;
    QGridLayout *gridLayout;
    QLabel *lblMethodAuto;
    QComboBox *cmbMethodAuto;
    QLabel *lblMethodLocal;
    QComboBox *cmbMethodLocal;
    QLabel *lblMethodManual;
    QComboBox *cmbMethodManual;
    QGroupBox *grbDefault;
    QGridLayout *gridLayout_2;
    QLabel *lblModeSave;
    QComboBox *cmbModeSave;
    QLabel *lblModeOTR;
    QComboBox *cmbModeOTR;
    QLabel *lblExpireTime;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *cmbExpireTime;
    QLabel *lblExpireTimeHint;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *grbIndividual;
    QVBoxLayout *vboxLayout;
    QTableWidget *tbwItemPrefs;
    QHBoxLayout *horizontalLayout;
    QLabel *lblStatus;
    QPushButton *pbtAdd;
    QPushButton *pbtRemove;

    void setupUi(QWidget *ArchiveStreamOptionsClass)
    {
        if (ArchiveStreamOptionsClass->objectName().isEmpty())
            ArchiveStreamOptionsClass->setObjectName(QString::fromUtf8("ArchiveStreamOptionsClass"));
        ArchiveStreamOptionsClass->resize(418, 482);
        verticalLayout = new QVBoxLayout(ArchiveStreamOptionsClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        grbAuto = new QGroupBox(ArchiveStreamOptionsClass);
        grbAuto->setObjectName(QString::fromUtf8("grbAuto"));
        horizontalLayout_3 = new QHBoxLayout(grbAuto);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        chbAutoSave = new QCheckBox(grbAuto);
        chbAutoSave->setObjectName(QString::fromUtf8("chbAutoSave"));

        horizontalLayout_3->addWidget(chbAutoSave);


        verticalLayout->addWidget(grbAuto);

        grbMethod = new QGroupBox(ArchiveStreamOptionsClass);
        grbMethod->setObjectName(QString::fromUtf8("grbMethod"));
        gridLayout = new QGridLayout(grbMethod);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblMethodAuto = new QLabel(grbMethod);
        lblMethodAuto->setObjectName(QString::fromUtf8("lblMethodAuto"));
        lblMethodAuto->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblMethodAuto, 0, 0, 1, 1);

        cmbMethodAuto = new QComboBox(grbMethod);
        cmbMethodAuto->setObjectName(QString::fromUtf8("cmbMethodAuto"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbMethodAuto->sizePolicy().hasHeightForWidth());
        cmbMethodAuto->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cmbMethodAuto, 0, 1, 1, 1);

        lblMethodLocal = new QLabel(grbMethod);
        lblMethodLocal->setObjectName(QString::fromUtf8("lblMethodLocal"));
        lblMethodLocal->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblMethodLocal, 1, 0, 1, 1);

        cmbMethodLocal = new QComboBox(grbMethod);
        cmbMethodLocal->setObjectName(QString::fromUtf8("cmbMethodLocal"));
        sizePolicy.setHeightForWidth(cmbMethodLocal->sizePolicy().hasHeightForWidth());
        cmbMethodLocal->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cmbMethodLocal, 1, 1, 1, 1);

        lblMethodManual = new QLabel(grbMethod);
        lblMethodManual->setObjectName(QString::fromUtf8("lblMethodManual"));
        lblMethodManual->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblMethodManual, 2, 0, 1, 1);

        cmbMethodManual = new QComboBox(grbMethod);
        cmbMethodManual->setObjectName(QString::fromUtf8("cmbMethodManual"));
        sizePolicy.setHeightForWidth(cmbMethodManual->sizePolicy().hasHeightForWidth());
        cmbMethodManual->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cmbMethodManual, 2, 1, 1, 1);


        verticalLayout->addWidget(grbMethod);

        grbDefault = new QGroupBox(ArchiveStreamOptionsClass);
        grbDefault->setObjectName(QString::fromUtf8("grbDefault"));
        gridLayout_2 = new QGridLayout(grbDefault);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lblModeSave = new QLabel(grbDefault);
        lblModeSave->setObjectName(QString::fromUtf8("lblModeSave"));
        lblModeSave->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(lblModeSave, 0, 0, 1, 1);

        cmbModeSave = new QComboBox(grbDefault);
        cmbModeSave->setObjectName(QString::fromUtf8("cmbModeSave"));
        sizePolicy.setHeightForWidth(cmbModeSave->sizePolicy().hasHeightForWidth());
        cmbModeSave->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(cmbModeSave, 0, 1, 1, 1);

        lblModeOTR = new QLabel(grbDefault);
        lblModeOTR->setObjectName(QString::fromUtf8("lblModeOTR"));
        lblModeOTR->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(lblModeOTR, 1, 0, 1, 1);

        cmbModeOTR = new QComboBox(grbDefault);
        cmbModeOTR->setObjectName(QString::fromUtf8("cmbModeOTR"));
        sizePolicy.setHeightForWidth(cmbModeOTR->sizePolicy().hasHeightForWidth());
        cmbModeOTR->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(cmbModeOTR, 1, 1, 1, 1);

        lblExpireTime = new QLabel(grbDefault);
        lblExpireTime->setObjectName(QString::fromUtf8("lblExpireTime"));
        lblExpireTime->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(lblExpireTime, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cmbExpireTime = new QComboBox(grbDefault);
        cmbExpireTime->setObjectName(QString::fromUtf8("cmbExpireTime"));
        cmbExpireTime->setEditable(true);
        cmbExpireTime->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_2->addWidget(cmbExpireTime);

        lblExpireTimeHint = new QLabel(grbDefault);
        lblExpireTimeHint->setObjectName(QString::fromUtf8("lblExpireTimeHint"));
        lblExpireTimeHint->setTextFormat(Qt::PlainText);

        horizontalLayout_2->addWidget(lblExpireTimeHint);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 1, 1, 1);


        verticalLayout->addWidget(grbDefault);

        grbIndividual = new QGroupBox(ArchiveStreamOptionsClass);
        grbIndividual->setObjectName(QString::fromUtf8("grbIndividual"));
        vboxLayout = new QVBoxLayout(grbIndividual);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(5, 5, 5, 5);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tbwItemPrefs = new QTableWidget(grbIndividual);
        if (tbwItemPrefs->columnCount() < 5)
            tbwItemPrefs->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbwItemPrefs->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tbwItemPrefs->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tbwItemPrefs->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tbwItemPrefs->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tbwItemPrefs->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tbwItemPrefs->setObjectName(QString::fromUtf8("tbwItemPrefs"));
        tbwItemPrefs->setAlternatingRowColors(true);
        tbwItemPrefs->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbwItemPrefs->setSortingEnabled(true);
        tbwItemPrefs->setColumnCount(5);
        tbwItemPrefs->horizontalHeader()->setHighlightSections(false);
        tbwItemPrefs->verticalHeader()->setVisible(false);

        vboxLayout->addWidget(tbwItemPrefs);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblStatus = new QLabel(grbIndividual);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblStatus->sizePolicy().hasHeightForWidth());
        lblStatus->setSizePolicy(sizePolicy1);
        lblStatus->setTextFormat(Qt::PlainText);
        lblStatus->setWordWrap(true);

        horizontalLayout->addWidget(lblStatus);

        pbtAdd = new QPushButton(grbIndividual);
        pbtAdd->setObjectName(QString::fromUtf8("pbtAdd"));

        horizontalLayout->addWidget(pbtAdd);

        pbtRemove = new QPushButton(grbIndividual);
        pbtRemove->setObjectName(QString::fromUtf8("pbtRemove"));

        horizontalLayout->addWidget(pbtRemove);


        vboxLayout->addLayout(horizontalLayout);


        verticalLayout->addWidget(grbIndividual);

#ifndef QT_NO_SHORTCUT
        lblMethodAuto->setBuddy(cmbMethodAuto);
        lblMethodLocal->setBuddy(cmbMethodLocal);
        lblMethodManual->setBuddy(cmbMethodManual);
        lblModeSave->setBuddy(cmbModeSave);
        lblModeOTR->setBuddy(cmbModeOTR);
        lblExpireTime->setBuddy(cmbExpireTime);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(chbAutoSave, cmbMethodAuto);
        QWidget::setTabOrder(cmbMethodAuto, cmbMethodLocal);
        QWidget::setTabOrder(cmbMethodLocal, cmbMethodManual);
        QWidget::setTabOrder(cmbMethodManual, cmbModeSave);
        QWidget::setTabOrder(cmbModeSave, cmbModeOTR);
        QWidget::setTabOrder(cmbModeOTR, cmbExpireTime);
        QWidget::setTabOrder(cmbExpireTime, tbwItemPrefs);
        QWidget::setTabOrder(tbwItemPrefs, pbtAdd);
        QWidget::setTabOrder(pbtAdd, pbtRemove);

        retranslateUi(ArchiveStreamOptionsClass);

        QMetaObject::connectSlotsByName(ArchiveStreamOptionsClass);
    } // setupUi

    void retranslateUi(QWidget *ArchiveStreamOptionsClass)
    {
        grbAuto->setTitle(QApplication::translate("ArchiveStreamOptionsClass", "Auto Archiving Preferences", 0, QApplication::UnicodeUTF8));
        chbAutoSave->setText(QApplication::translate("ArchiveStreamOptionsClass", "Enable automatic archiving of messages on the server", 0, QApplication::UnicodeUTF8));
        grbMethod->setTitle(QApplication::translate("ArchiveStreamOptionsClass", "Archiving Policy", 0, QApplication::UnicodeUTF8));
        lblMethodAuto->setText(QApplication::translate("ArchiveStreamOptionsClass", "Save history on server?", 0, QApplication::UnicodeUTF8));
        lblMethodLocal->setText(QApplication::translate("ArchiveStreamOptionsClass", "Save history in a local archive?", 0, QApplication::UnicodeUTF8));
        lblMethodManual->setText(QApplication::translate("ArchiveStreamOptionsClass", "Copy local archive to the server?", 0, QApplication::UnicodeUTF8));
        grbDefault->setTitle(QApplication::translate("ArchiveStreamOptionsClass", "Default Archiving Preferences", 0, QApplication::UnicodeUTF8));
        lblModeSave->setText(QApplication::translate("ArchiveStreamOptionsClass", "Message archiving:", 0, QApplication::UnicodeUTF8));
        lblModeOTR->setText(QApplication::translate("ArchiveStreamOptionsClass", "Off-The-Record sessions:", 0, QApplication::UnicodeUTF8));
        lblExpireTime->setText(QApplication::translate("ArchiveStreamOptionsClass", "Remove messages after, days:", 0, QApplication::UnicodeUTF8));
        lblExpireTimeHint->setText(QApplication::translate("ArchiveStreamOptionsClass", "(0 - do not remove)", 0, QApplication::UnicodeUTF8));
        grbIndividual->setTitle(QApplication::translate("ArchiveStreamOptionsClass", "Individual Archiving Preferences", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tbwItemPrefs->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ArchiveStreamOptionsClass", "JID", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem->setToolTip(QApplication::translate("ArchiveStreamOptionsClass", "Contact identifier", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem1 = tbwItemPrefs->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ArchiveStreamOptionsClass", "Save", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem1->setToolTip(QApplication::translate("ArchiveStreamOptionsClass", "Message archiving", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem2 = tbwItemPrefs->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ArchiveStreamOptionsClass", "OTR", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem2->setToolTip(QApplication::translate("ArchiveStreamOptionsClass", "Off-The-Record sessions ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem3 = tbwItemPrefs->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ArchiveStreamOptionsClass", "Remove", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem3->setToolTip(QApplication::translate("ArchiveStreamOptionsClass", "Remove messages after, days", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem4 = tbwItemPrefs->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ArchiveStreamOptionsClass", "Exact", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem4->setToolTip(QApplication::translate("ArchiveStreamOptionsClass", "Settings are applied to contact which JID is exactly matches", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbtAdd->setText(QApplication::translate("ArchiveStreamOptionsClass", "Add", 0, QApplication::UnicodeUTF8));
        pbtRemove->setText(QApplication::translate("ArchiveStreamOptionsClass", "Remove", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ArchiveStreamOptionsClass);
    } // retranslateUi

};

namespace Ui {
    class ArchiveStreamOptionsClass: public Ui_ArchiveStreamOptionsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCHIVESTREAMOPTIONS_H
