/********************************************************************************
** Form generated from reading UI file 'archiveviewwindow.ui'
**
** Created: Sat Jan 26 02:19:30 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCHIVEVIEWWINDOW_H
#define UI_ARCHIVEVIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <utils/animatedtextbrowser.h>
#include <utils/searchlineedit.h>
#include "selectpagewidget.h"

QT_BEGIN_NAMESPACE

class Ui_ArchiveViewWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QSplitter *sprSplitter;
    QWidget *wdtHeaders;
    QVBoxLayout *verticalLayout;
    SelectPageWidget *spwSelectPage;
    QPushButton *pbtLoadEarlierMessages;
    QWidget *wdtArchiveSearch;
    QHBoxLayout *horizontalLayout_3;
    SearchLineEdit *lneArchiveSearch;
    QTreeView *trvHeaders;
    QPushButton *pbtHeadersUpdate;
    QWidget *wdtMessages;
    QVBoxLayout *verticalLayout_2;
    AnimatedTextBrowser *tbrMessages;
    QWidget *wdtTextSearch;
    QHBoxLayout *horizontalLayout_2;
    SearchLineEdit *lneTextSearch;
    QToolButton *tlbTextSearchNext;
    QToolButton *tlbTextSearchPrev;
    QCheckBox *chbTextSearchCaseSensitive;
    QLabel *lblTextSearchInfo;
    QSpacerItem *horizontalSpacer;
    QStatusBar *stbStatusBar;

    void setupUi(QMainWindow *ArchiveViewWindowClass)
    {
        if (ArchiveViewWindowClass->objectName().isEmpty())
            ArchiveViewWindowClass->setObjectName(QString::fromUtf8("ArchiveViewWindowClass"));
        ArchiveViewWindowClass->resize(773, 508);
        centralWidget = new QWidget(ArchiveViewWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(3, 3, 3, 0);
        sprSplitter = new QSplitter(centralWidget);
        sprSplitter->setObjectName(QString::fromUtf8("sprSplitter"));
        sprSplitter->setOrientation(Qt::Horizontal);
        sprSplitter->setChildrenCollapsible(false);
        wdtHeaders = new QWidget(sprSplitter);
        wdtHeaders->setObjectName(QString::fromUtf8("wdtHeaders"));
        verticalLayout = new QVBoxLayout(wdtHeaders);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        spwSelectPage = new SelectPageWidget(wdtHeaders);
        spwSelectPage->setObjectName(QString::fromUtf8("spwSelectPage"));
        spwSelectPage->setFocusPolicy(Qt::TabFocus);

        verticalLayout->addWidget(spwSelectPage);

        pbtLoadEarlierMessages = new QPushButton(wdtHeaders);
        pbtLoadEarlierMessages->setObjectName(QString::fromUtf8("pbtLoadEarlierMessages"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbtLoadEarlierMessages->sizePolicy().hasHeightForWidth());
        pbtLoadEarlierMessages->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pbtLoadEarlierMessages);

        wdtArchiveSearch = new QWidget(wdtHeaders);
        wdtArchiveSearch->setObjectName(QString::fromUtf8("wdtArchiveSearch"));
        horizontalLayout_3 = new QHBoxLayout(wdtArchiveSearch);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lneArchiveSearch = new SearchLineEdit(wdtArchiveSearch);
        lneArchiveSearch->setObjectName(QString::fromUtf8("lneArchiveSearch"));

        horizontalLayout_3->addWidget(lneArchiveSearch);


        verticalLayout->addWidget(wdtArchiveSearch);

        trvHeaders = new QTreeView(wdtHeaders);
        trvHeaders->setObjectName(QString::fromUtf8("trvHeaders"));
        trvHeaders->setContextMenuPolicy(Qt::CustomContextMenu);
        trvHeaders->setEditTriggers(QAbstractItemView::NoEditTriggers);
        trvHeaders->setIndentation(10);
        trvHeaders->setUniformRowHeights(true);
        trvHeaders->setSortingEnabled(true);
        trvHeaders->setAllColumnsShowFocus(true);
        trvHeaders->setHeaderHidden(true);

        verticalLayout->addWidget(trvHeaders);

        pbtHeadersUpdate = new QPushButton(wdtHeaders);
        pbtHeadersUpdate->setObjectName(QString::fromUtf8("pbtHeadersUpdate"));

        verticalLayout->addWidget(pbtHeadersUpdate);

        sprSplitter->addWidget(wdtHeaders);
        wdtMessages = new QWidget(sprSplitter);
        wdtMessages->setObjectName(QString::fromUtf8("wdtMessages"));
        verticalLayout_2 = new QVBoxLayout(wdtMessages);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tbrMessages = new AnimatedTextBrowser(wdtMessages);
        tbrMessages->setObjectName(QString::fromUtf8("tbrMessages"));
        tbrMessages->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(tbrMessages);

        wdtTextSearch = new QWidget(wdtMessages);
        wdtTextSearch->setObjectName(QString::fromUtf8("wdtTextSearch"));
        horizontalLayout_2 = new QHBoxLayout(wdtTextSearch);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lneTextSearch = new SearchLineEdit(wdtTextSearch);
        lneTextSearch->setObjectName(QString::fromUtf8("lneTextSearch"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lneTextSearch->sizePolicy().hasHeightForWidth());
        lneTextSearch->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(lneTextSearch);

        tlbTextSearchNext = new QToolButton(wdtTextSearch);
        tlbTextSearchNext->setObjectName(QString::fromUtf8("tlbTextSearchNext"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tlbTextSearchNext->sizePolicy().hasHeightForWidth());
        tlbTextSearchNext->setSizePolicy(sizePolicy2);
        tlbTextSearchNext->setAutoRepeat(true);
        tlbTextSearchNext->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tlbTextSearchNext->setAutoRaise(true);

        horizontalLayout_2->addWidget(tlbTextSearchNext);

        tlbTextSearchPrev = new QToolButton(wdtTextSearch);
        tlbTextSearchPrev->setObjectName(QString::fromUtf8("tlbTextSearchPrev"));
        sizePolicy2.setHeightForWidth(tlbTextSearchPrev->sizePolicy().hasHeightForWidth());
        tlbTextSearchPrev->setSizePolicy(sizePolicy2);
        tlbTextSearchPrev->setAutoRepeat(true);
        tlbTextSearchPrev->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tlbTextSearchPrev->setAutoRaise(true);

        horizontalLayout_2->addWidget(tlbTextSearchPrev);

        chbTextSearchCaseSensitive = new QCheckBox(wdtTextSearch);
        chbTextSearchCaseSensitive->setObjectName(QString::fromUtf8("chbTextSearchCaseSensitive"));

        horizontalLayout_2->addWidget(chbTextSearchCaseSensitive);

        lblTextSearchInfo = new QLabel(wdtTextSearch);
        lblTextSearchInfo->setObjectName(QString::fromUtf8("lblTextSearchInfo"));
        lblTextSearchInfo->setText(QString::fromUtf8("Phrase was not found"));

        horizontalLayout_2->addWidget(lblTextSearchInfo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(wdtTextSearch);

        sprSplitter->addWidget(wdtMessages);

        verticalLayout_4->addWidget(sprSplitter);

        ArchiveViewWindowClass->setCentralWidget(centralWidget);
        stbStatusBar = new QStatusBar(ArchiveViewWindowClass);
        stbStatusBar->setObjectName(QString::fromUtf8("stbStatusBar"));
        ArchiveViewWindowClass->setStatusBar(stbStatusBar);
        QWidget::setTabOrder(spwSelectPage, pbtLoadEarlierMessages);
        QWidget::setTabOrder(pbtLoadEarlierMessages, lneArchiveSearch);
        QWidget::setTabOrder(lneArchiveSearch, trvHeaders);
        QWidget::setTabOrder(trvHeaders, pbtHeadersUpdate);
        QWidget::setTabOrder(pbtHeadersUpdate, tbrMessages);
        QWidget::setTabOrder(tbrMessages, lneTextSearch);
        QWidget::setTabOrder(lneTextSearch, tlbTextSearchNext);
        QWidget::setTabOrder(tlbTextSearchNext, tlbTextSearchPrev);
        QWidget::setTabOrder(tlbTextSearchPrev, chbTextSearchCaseSensitive);

        retranslateUi(ArchiveViewWindowClass);

        QMetaObject::connectSlotsByName(ArchiveViewWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *ArchiveViewWindowClass)
    {
        pbtHeadersUpdate->setText(QApplication::translate("ArchiveViewWindowClass", "Update", 0, QApplication::UnicodeUTF8));
        tlbTextSearchNext->setText(QApplication::translate("ArchiveViewWindowClass", "Next", 0, QApplication::UnicodeUTF8));
        tlbTextSearchPrev->setText(QApplication::translate("ArchiveViewWindowClass", "Previous", 0, QApplication::UnicodeUTF8));
        chbTextSearchCaseSensitive->setText(QApplication::translate("ArchiveViewWindowClass", "Case sensitively", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ArchiveViewWindowClass);
    } // retranslateUi

};

namespace Ui {
    class ArchiveViewWindowClass: public Ui_ArchiveViewWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCHIVEVIEWWINDOW_H
