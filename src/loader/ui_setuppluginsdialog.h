/********************************************************************************
** Form generated from reading UI file 'setuppluginsdialog.ui'
**
** Created: Sat Jan 26 01:23:00 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPPLUGINSDIALOG_H
#define UI_SETUPPLUGINSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetupPluginsDialogClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QTableWidget *twtPlugins;
    QGroupBox *grbProperties;
    QVBoxLayout *verticalLayout;
    QLabel *lblName;
    QLabel *lblHomePage;
    QLabel *lblDescription;
    QTabWidget *twtDependences;
    QWidget *tabDepends;
    QVBoxLayout *verticalLayout_4;
    QListWidget *ltwDepends;
    QWidget *tabDepend;
    QVBoxLayout *verticalLayout_3;
    QListWidget *ltwDepend;
    QLabel *lblLabelError;
    QLabel *lblError;
    QGroupBox *grbCommon;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblLanguage;
    QComboBox *cmbLanguage;
    QLabel *lblCountry;
    QComboBox *cmbCountry;
    QSpacerItem *hsrCommonHSpacer;
    QDialogButtonBox *dbbButtons;

    void setupUi(QDialog *SetupPluginsDialogClass)
    {
        if (SetupPluginsDialogClass->objectName().isEmpty())
            SetupPluginsDialogClass->setObjectName(QString::fromUtf8("SetupPluginsDialogClass"));
        SetupPluginsDialogClass->resize(670, 473);
        verticalLayout_2 = new QVBoxLayout(SetupPluginsDialogClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        splitter = new QSplitter(SetupPluginsDialogClass);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        twtPlugins = new QTableWidget(splitter);
        if (twtPlugins->columnCount() < 2)
            twtPlugins->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twtPlugins->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twtPlugins->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        twtPlugins->setObjectName(QString::fromUtf8("twtPlugins"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(twtPlugins->sizePolicy().hasHeightForWidth());
        twtPlugins->setSizePolicy(sizePolicy1);
        twtPlugins->setEditTriggers(QAbstractItemView::NoEditTriggers);
        twtPlugins->setSelectionMode(QAbstractItemView::SingleSelection);
        twtPlugins->setSelectionBehavior(QAbstractItemView::SelectRows);
        twtPlugins->setSortingEnabled(true);
        splitter->addWidget(twtPlugins);
        twtPlugins->horizontalHeader()->setHighlightSections(false);
        twtPlugins->verticalHeader()->setVisible(false);
        grbProperties = new QGroupBox(splitter);
        grbProperties->setObjectName(QString::fromUtf8("grbProperties"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(grbProperties->sizePolicy().hasHeightForWidth());
        grbProperties->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(grbProperties);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblName = new QLabel(grbProperties);
        lblName->setObjectName(QString::fromUtf8("lblName"));
        lblName->setTextFormat(Qt::RichText);
        lblName->setWordWrap(true);
        lblName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(lblName);

        lblHomePage = new QLabel(grbProperties);
        lblHomePage->setObjectName(QString::fromUtf8("lblHomePage"));
        lblHomePage->setTextFormat(Qt::RichText);
        lblHomePage->setWordWrap(true);

        verticalLayout->addWidget(lblHomePage);

        lblDescription = new QLabel(grbProperties);
        lblDescription->setObjectName(QString::fromUtf8("lblDescription"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblDescription->sizePolicy().hasHeightForWidth());
        lblDescription->setSizePolicy(sizePolicy3);
        lblDescription->setTextFormat(Qt::PlainText);
        lblDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblDescription->setWordWrap(true);
        lblDescription->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(lblDescription);

        twtDependences = new QTabWidget(grbProperties);
        twtDependences->setObjectName(QString::fromUtf8("twtDependences"));
        sizePolicy2.setHeightForWidth(twtDependences->sizePolicy().hasHeightForWidth());
        twtDependences->setSizePolicy(sizePolicy2);
        tabDepends = new QWidget();
        tabDepends->setObjectName(QString::fromUtf8("tabDepends"));
        verticalLayout_4 = new QVBoxLayout(tabDepends);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(3, 3, 3, 3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        ltwDepends = new QListWidget(tabDepends);
        ltwDepends->setObjectName(QString::fromUtf8("ltwDepends"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ltwDepends->sizePolicy().hasHeightForWidth());
        ltwDepends->setSizePolicy(sizePolicy4);
        ltwDepends->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ltwDepends->setSelectionMode(QAbstractItemView::NoSelection);
        ltwDepends->setWordWrap(true);

        verticalLayout_4->addWidget(ltwDepends);

        twtDependences->addTab(tabDepends, QString());
        tabDepend = new QWidget();
        tabDepend->setObjectName(QString::fromUtf8("tabDepend"));
        verticalLayout_3 = new QVBoxLayout(tabDepend);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(3, 3, 3, 3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        ltwDepend = new QListWidget(tabDepend);
        ltwDepend->setObjectName(QString::fromUtf8("ltwDepend"));
        sizePolicy4.setHeightForWidth(ltwDepend->sizePolicy().hasHeightForWidth());
        ltwDepend->setSizePolicy(sizePolicy4);
        ltwDepend->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ltwDepend->setSelectionMode(QAbstractItemView::NoSelection);
        ltwDepend->setWordWrap(true);

        verticalLayout_3->addWidget(ltwDepend);

        twtDependences->addTab(tabDepend, QString());

        verticalLayout->addWidget(twtDependences);

        lblLabelError = new QLabel(grbProperties);
        lblLabelError->setObjectName(QString::fromUtf8("lblLabelError"));
        lblLabelError->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(lblLabelError);

        lblError = new QLabel(grbProperties);
        lblError->setObjectName(QString::fromUtf8("lblError"));
        lblError->setFrameShape(QFrame::StyledPanel);
        lblError->setFrameShadow(QFrame::Sunken);
        lblError->setTextFormat(Qt::PlainText);
        lblError->setAlignment(Qt::AlignCenter);
        lblError->setWordWrap(true);
        lblError->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(lblError);

        splitter->addWidget(grbProperties);

        verticalLayout_2->addWidget(splitter);

        grbCommon = new QGroupBox(SetupPluginsDialogClass);
        grbCommon->setObjectName(QString::fromUtf8("grbCommon"));
        horizontalLayout_2 = new QHBoxLayout(grbCommon);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblLanguage = new QLabel(grbCommon);
        lblLanguage->setObjectName(QString::fromUtf8("lblLanguage"));
        lblLanguage->setTextFormat(Qt::PlainText);

        horizontalLayout_2->addWidget(lblLanguage);

        cmbLanguage = new QComboBox(grbCommon);
        cmbLanguage->setObjectName(QString::fromUtf8("cmbLanguage"));
        cmbLanguage->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_2->addWidget(cmbLanguage);

        lblCountry = new QLabel(grbCommon);
        lblCountry->setObjectName(QString::fromUtf8("lblCountry"));
        lblCountry->setTextFormat(Qt::PlainText);

        horizontalLayout_2->addWidget(lblCountry);

        cmbCountry = new QComboBox(grbCommon);
        cmbCountry->setObjectName(QString::fromUtf8("cmbCountry"));
        cmbCountry->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_2->addWidget(cmbCountry);

        hsrCommonHSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(hsrCommonHSpacer);


        verticalLayout_2->addWidget(grbCommon);

        dbbButtons = new QDialogButtonBox(SetupPluginsDialogClass);
        dbbButtons->setObjectName(QString::fromUtf8("dbbButtons"));
        dbbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(dbbButtons);

#ifndef QT_NO_SHORTCUT
        lblLanguage->setBuddy(cmbLanguage);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(twtPlugins, cmbLanguage);
        QWidget::setTabOrder(cmbLanguage, dbbButtons);

        retranslateUi(SetupPluginsDialogClass);

        twtDependences->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SetupPluginsDialogClass);
    } // setupUi

    void retranslateUi(QDialog *SetupPluginsDialogClass)
    {
        SetupPluginsDialogClass->setWindowTitle(QApplication::translate("SetupPluginsDialogClass", "Setup Plugins", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = twtPlugins->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SetupPluginsDialogClass", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = twtPlugins->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SetupPluginsDialogClass", "File", 0, QApplication::UnicodeUTF8));
        grbProperties->setTitle(QString());
        twtDependences->setTabText(twtDependences->indexOf(tabDepends), QApplication::translate("SetupPluginsDialogClass", "Depends", 0, QApplication::UnicodeUTF8));
        twtDependences->setTabText(twtDependences->indexOf(tabDepend), QApplication::translate("SetupPluginsDialogClass", "Depend", 0, QApplication::UnicodeUTF8));
        lblLabelError->setText(QApplication::translate("SetupPluginsDialogClass", "Error Message:", 0, QApplication::UnicodeUTF8));
        grbCommon->setTitle(QApplication::translate("SetupPluginsDialogClass", "Common Settings", 0, QApplication::UnicodeUTF8));
        lblLanguage->setText(QApplication::translate("SetupPluginsDialogClass", "Language:", 0, QApplication::UnicodeUTF8));
        lblCountry->setText(QApplication::translate("SetupPluginsDialogClass", "Country:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SetupPluginsDialogClass: public Ui_SetupPluginsDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPPLUGINSDIALOG_H
