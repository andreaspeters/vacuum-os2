/********************************************************************************
** Form generated from reading UI file 'filestreamswindow.ui'
**
** Created: Sat Jan 26 02:22:42 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESTREAMSWINDOW_H
#define UI_FILESTREAMSWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileStreamsWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tbvStreams;
    QToolBar *tlbToolBar;
    QStatusBar *stbStatusBar;

    void setupUi(QMainWindow *FileStreamsWindowClass)
    {
        if (FileStreamsWindowClass->objectName().isEmpty())
            FileStreamsWindowClass->setObjectName(QString::fromUtf8("FileStreamsWindowClass"));
        FileStreamsWindowClass->setIconSize(QSize(16, 16));
        FileStreamsWindowClass->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        centralWidget = new QWidget(FileStreamsWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tbvStreams = new QTableView(centralWidget);
        tbvStreams->setObjectName(QString::fromUtf8("tbvStreams"));
        tbvStreams->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tbvStreams->setAlternatingRowColors(true);
        tbvStreams->setSelectionMode(QAbstractItemView::SingleSelection);
        tbvStreams->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbvStreams->setSortingEnabled(true);
        tbvStreams->setWordWrap(false);
        tbvStreams->horizontalHeader()->setHighlightSections(false);
        tbvStreams->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tbvStreams);

        FileStreamsWindowClass->setCentralWidget(centralWidget);
        tlbToolBar = new QToolBar(FileStreamsWindowClass);
        tlbToolBar->setObjectName(QString::fromUtf8("tlbToolBar"));
        tlbToolBar->setMovable(false);
        tlbToolBar->setFloatable(false);
        FileStreamsWindowClass->addToolBar(Qt::TopToolBarArea, tlbToolBar);
        stbStatusBar = new QStatusBar(FileStreamsWindowClass);
        stbStatusBar->setObjectName(QString::fromUtf8("stbStatusBar"));
        FileStreamsWindowClass->setStatusBar(stbStatusBar);

        retranslateUi(FileStreamsWindowClass);

        QMetaObject::connectSlotsByName(FileStreamsWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *FileStreamsWindowClass)
    {
        Q_UNUSED(FileStreamsWindowClass);
    } // retranslateUi

};

namespace Ui {
    class FileStreamsWindowClass: public Ui_FileStreamsWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESTREAMSWINDOW_H
