/********************************************************************************
** Form generated from reading UI file 'discoitemswindow.ui'
**
** Created: Sat Jan 26 02:17:17 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISCOITEMSWINDOW_H
#define UI_DISCOITEMSWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QToolBar>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DiscoItemsWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *lblJid;
    QComboBox *cmbJid;
    QLabel *lblNode;
    QComboBox *cmbNode;
    QLabel *lblSearch;
    QLineEdit *lneSearch;
    QHBoxLayout *hboxLayout1;
    QGroupBox *grbActions;
    QTreeView *trvItems;
    QToolBar *tlbToolBar;

    void setupUi(QMainWindow *DiscoItemsWindowClass)
    {
        if (DiscoItemsWindowClass->objectName().isEmpty())
            DiscoItemsWindowClass->setObjectName(QString::fromUtf8("DiscoItemsWindowClass"));
        DiscoItemsWindowClass->resize(656, 404);
        DiscoItemsWindowClass->setIconSize(QSize(16, 16));
        DiscoItemsWindowClass->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        centralWidget = new QWidget(DiscoItemsWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        vboxLayout = new QVBoxLayout(centralWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(3, 3, 3, 3);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lblJid = new QLabel(centralWidget);
        lblJid->setObjectName(QString::fromUtf8("lblJid"));
        lblJid->setTextFormat(Qt::PlainText);

        hboxLayout->addWidget(lblJid);

        cmbJid = new QComboBox(centralWidget);
        cmbJid->setObjectName(QString::fromUtf8("cmbJid"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbJid->sizePolicy().hasHeightForWidth());
        cmbJid->setSizePolicy(sizePolicy);
        cmbJid->setEditable(true);
        cmbJid->setInsertPolicy(QComboBox::NoInsert);

        hboxLayout->addWidget(cmbJid);

        lblNode = new QLabel(centralWidget);
        lblNode->setObjectName(QString::fromUtf8("lblNode"));
        lblNode->setTextFormat(Qt::PlainText);

        hboxLayout->addWidget(lblNode);

        cmbNode = new QComboBox(centralWidget);
        cmbNode->setObjectName(QString::fromUtf8("cmbNode"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbNode->sizePolicy().hasHeightForWidth());
        cmbNode->setSizePolicy(sizePolicy1);
        cmbNode->setEditable(true);
        cmbNode->setInsertPolicy(QComboBox::NoInsert);

        hboxLayout->addWidget(cmbNode);

        lblSearch = new QLabel(centralWidget);
        lblSearch->setObjectName(QString::fromUtf8("lblSearch"));
        lblSearch->setTextFormat(Qt::PlainText);

        hboxLayout->addWidget(lblSearch);

        lneSearch = new QLineEdit(centralWidget);
        lneSearch->setObjectName(QString::fromUtf8("lneSearch"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lneSearch->sizePolicy().hasHeightForWidth());
        lneSearch->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(lneSearch);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        grbActions = new QGroupBox(centralWidget);
        grbActions->setObjectName(QString::fromUtf8("grbActions"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(grbActions->sizePolicy().hasHeightForWidth());
        grbActions->setSizePolicy(sizePolicy3);
        grbActions->setMaximumSize(QSize(200, 16777215));
        grbActions->setAlignment(Qt::AlignHCenter);
        grbActions->setFlat(true);

        hboxLayout1->addWidget(grbActions);

        trvItems = new QTreeView(centralWidget);
        trvItems->setObjectName(QString::fromUtf8("trvItems"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(7);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(trvItems->sizePolicy().hasHeightForWidth());
        trvItems->setSizePolicy(sizePolicy4);
        trvItems->setContextMenuPolicy(Qt::CustomContextMenu);
        trvItems->setEditTriggers(QAbstractItemView::NoEditTriggers);
        trvItems->setIndentation(12);
        trvItems->setAllColumnsShowFocus(true);
        trvItems->setWordWrap(true);
        trvItems->header()->setCascadingSectionResizes(true);
        trvItems->header()->setProperty("showSortIndicator", QVariant(true));
        trvItems->header()->setStretchLastSection(false);

        hboxLayout1->addWidget(trvItems);


        vboxLayout->addLayout(hboxLayout1);

        DiscoItemsWindowClass->setCentralWidget(centralWidget);
        tlbToolBar = new QToolBar(DiscoItemsWindowClass);
        tlbToolBar->setObjectName(QString::fromUtf8("tlbToolBar"));
        tlbToolBar->setMovable(false);
        DiscoItemsWindowClass->addToolBar(Qt::TopToolBarArea, tlbToolBar);
#ifndef QT_NO_SHORTCUT
        lblJid->setBuddy(cmbJid);
        lblNode->setBuddy(cmbNode);
#endif // QT_NO_SHORTCUT

        retranslateUi(DiscoItemsWindowClass);

        QMetaObject::connectSlotsByName(DiscoItemsWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *DiscoItemsWindowClass)
    {
        lblJid->setText(QApplication::translate("DiscoItemsWindowClass", "Item:", 0, QApplication::UnicodeUTF8));
        lblNode->setText(QApplication::translate("DiscoItemsWindowClass", "Node:", 0, QApplication::UnicodeUTF8));
        lblSearch->setText(QApplication::translate("DiscoItemsWindowClass", "Search:", 0, QApplication::UnicodeUTF8));
        grbActions->setTitle(QApplication::translate("DiscoItemsWindowClass", "Actions", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(DiscoItemsWindowClass);
    } // retranslateUi

};

namespace Ui {
    class DiscoItemsWindowClass: public Ui_DiscoItemsWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISCOITEMSWINDOW_H
