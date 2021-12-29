/********************************************************************************
** Form generated from reading UI file 'consolewidget.ui'
**
** Created: Sat Jan 26 02:21:46 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLEWIDGET_H
#define UI_CONSOLEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <utils/animatedtextbrowser.h>
#include <utils/searchlineedit.h>

QT_BEGIN_NAMESPACE

class Ui_ConsoleWidgetClass
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *sptHSplitter;
    QGroupBox *grbFilter;
    QVBoxLayout *verticalLayout;
    QLabel *lblStreamJid;
    QComboBox *cmbStreamJid;
    QFrame *line_2;
    QLabel *lblCondition;
    QComboBox *cmbCondition;
    QListWidget *ltwConditions;
    QHBoxLayout *horizontalLayout;
    QToolButton *tlbAddCondition;
    QToolButton *tlbRemoveCondition;
    QToolButton *tlbClearCondition;
    QFrame *line;
    QLabel *lblContext;
    QComboBox *cmbContext;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *tlbAddContext;
    QToolButton *tlbRemoveContext;
    QGroupBox *grbConsole;
    QVBoxLayout *verticalLayout_2;
    QSplitter *sptVSplitter;
    AnimatedTextBrowser *tbrConsole;
    QTextEdit *tedSendXML;
    QHBoxLayout *horizontalLayout_2;
    SearchLineEdit *lneTextSearch;
    QToolButton *tlbTextSearchNext;
    QToolButton *tlbTextSearchPrev;
    QSpacerItem *horizontalSpacer;
    QCheckBox *chbWordWrap;
    QCheckBox *chbHilightXML;
    QToolButton *tlbSendXML;
    QToolButton *tlbClearConsole;

    void setupUi(QWidget *ConsoleWidgetClass)
    {
        if (ConsoleWidgetClass->objectName().isEmpty())
            ConsoleWidgetClass->setObjectName(QString::fromUtf8("ConsoleWidgetClass"));
        ConsoleWidgetClass->resize(737, 562);
        verticalLayout_3 = new QVBoxLayout(ConsoleWidgetClass);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        sptHSplitter = new QSplitter(ConsoleWidgetClass);
        sptHSplitter->setObjectName(QString::fromUtf8("sptHSplitter"));
        sptHSplitter->setOrientation(Qt::Horizontal);
        grbFilter = new QGroupBox(sptHSplitter);
        grbFilter->setObjectName(QString::fromUtf8("grbFilter"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(grbFilter->sizePolicy().hasHeightForWidth());
        grbFilter->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(grbFilter);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblStreamJid = new QLabel(grbFilter);
        lblStreamJid->setObjectName(QString::fromUtf8("lblStreamJid"));
        lblStreamJid->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(lblStreamJid);

        cmbStreamJid = new QComboBox(grbFilter);
        cmbStreamJid->setObjectName(QString::fromUtf8("cmbStreamJid"));

        verticalLayout->addWidget(cmbStreamJid);

        line_2 = new QFrame(grbFilter);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        lblCondition = new QLabel(grbFilter);
        lblCondition->setObjectName(QString::fromUtf8("lblCondition"));
        lblCondition->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(lblCondition);

        cmbCondition = new QComboBox(grbFilter);
        cmbCondition->setObjectName(QString::fromUtf8("cmbCondition"));
        cmbCondition->setEditable(true);
        cmbCondition->setInsertPolicy(QComboBox::InsertAlphabetically);
        cmbCondition->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        verticalLayout->addWidget(cmbCondition);

        ltwConditions = new QListWidget(grbFilter);
        ltwConditions->setObjectName(QString::fromUtf8("ltwConditions"));

        verticalLayout->addWidget(ltwConditions);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tlbAddCondition = new QToolButton(grbFilter);
        tlbAddCondition->setObjectName(QString::fromUtf8("tlbAddCondition"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tlbAddCondition->sizePolicy().hasHeightForWidth());
        tlbAddCondition->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(tlbAddCondition);

        tlbRemoveCondition = new QToolButton(grbFilter);
        tlbRemoveCondition->setObjectName(QString::fromUtf8("tlbRemoveCondition"));
        sizePolicy1.setHeightForWidth(tlbRemoveCondition->sizePolicy().hasHeightForWidth());
        tlbRemoveCondition->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(tlbRemoveCondition);

        tlbClearCondition = new QToolButton(grbFilter);
        tlbClearCondition->setObjectName(QString::fromUtf8("tlbClearCondition"));
        sizePolicy1.setHeightForWidth(tlbClearCondition->sizePolicy().hasHeightForWidth());
        tlbClearCondition->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(tlbClearCondition);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(grbFilter);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        lblContext = new QLabel(grbFilter);
        lblContext->setObjectName(QString::fromUtf8("lblContext"));
        lblContext->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(lblContext);

        cmbContext = new QComboBox(grbFilter);
        cmbContext->setObjectName(QString::fromUtf8("cmbContext"));

        verticalLayout->addWidget(cmbContext);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tlbAddContext = new QToolButton(grbFilter);
        tlbAddContext->setObjectName(QString::fromUtf8("tlbAddContext"));
        sizePolicy1.setHeightForWidth(tlbAddContext->sizePolicy().hasHeightForWidth());
        tlbAddContext->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(tlbAddContext);

        tlbRemoveContext = new QToolButton(grbFilter);
        tlbRemoveContext->setObjectName(QString::fromUtf8("tlbRemoveContext"));
        sizePolicy1.setHeightForWidth(tlbRemoveContext->sizePolicy().hasHeightForWidth());
        tlbRemoveContext->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(tlbRemoveContext);


        verticalLayout->addLayout(horizontalLayout_3);

        sptHSplitter->addWidget(grbFilter);
        grbConsole = new QGroupBox(sptHSplitter);
        grbConsole->setObjectName(QString::fromUtf8("grbConsole"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(grbConsole->sizePolicy().hasHeightForWidth());
        grbConsole->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(grbConsole);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        sptVSplitter = new QSplitter(grbConsole);
        sptVSplitter->setObjectName(QString::fromUtf8("sptVSplitter"));
        sptVSplitter->setOrientation(Qt::Vertical);
        tbrConsole = new AnimatedTextBrowser(sptVSplitter);
        tbrConsole->setObjectName(QString::fromUtf8("tbrConsole"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(5);
        sizePolicy3.setHeightForWidth(tbrConsole->sizePolicy().hasHeightForWidth());
        tbrConsole->setSizePolicy(sizePolicy3);
        tbrConsole->setLineWrapMode(QTextEdit::NoWrap);
        sptVSplitter->addWidget(tbrConsole);
        tedSendXML = new QTextEdit(sptVSplitter);
        tedSendXML->setObjectName(QString::fromUtf8("tedSendXML"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(tedSendXML->sizePolicy().hasHeightForWidth());
        tedSendXML->setSizePolicy(sizePolicy4);
        tedSendXML->setUndoRedoEnabled(false);
        tedSendXML->setAcceptRichText(false);
        sptVSplitter->addWidget(tedSendXML);

        verticalLayout_2->addWidget(sptVSplitter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lneTextSearch = new SearchLineEdit(grbConsole);
        lneTextSearch->setObjectName(QString::fromUtf8("lneTextSearch"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lneTextSearch->sizePolicy().hasHeightForWidth());
        lneTextSearch->setSizePolicy(sizePolicy5);

        horizontalLayout_2->addWidget(lneTextSearch);

        tlbTextSearchNext = new QToolButton(grbConsole);
        tlbTextSearchNext->setObjectName(QString::fromUtf8("tlbTextSearchNext"));
        tlbTextSearchNext->setEnabled(false);
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(tlbTextSearchNext->sizePolicy().hasHeightForWidth());
        tlbTextSearchNext->setSizePolicy(sizePolicy6);
        tlbTextSearchNext->setAutoRepeat(true);
        tlbTextSearchNext->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tlbTextSearchNext->setAutoRaise(true);

        horizontalLayout_2->addWidget(tlbTextSearchNext);

        tlbTextSearchPrev = new QToolButton(grbConsole);
        tlbTextSearchPrev->setObjectName(QString::fromUtf8("tlbTextSearchPrev"));
        tlbTextSearchPrev->setEnabled(false);
        sizePolicy6.setHeightForWidth(tlbTextSearchPrev->sizePolicy().hasHeightForWidth());
        tlbTextSearchPrev->setSizePolicy(sizePolicy6);
        tlbTextSearchPrev->setAutoRepeat(true);
        tlbTextSearchPrev->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tlbTextSearchPrev->setAutoRaise(true);

        horizontalLayout_2->addWidget(tlbTextSearchPrev);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        chbWordWrap = new QCheckBox(grbConsole);
        chbWordWrap->setObjectName(QString::fromUtf8("chbWordWrap"));

        horizontalLayout_2->addWidget(chbWordWrap);

        chbHilightXML = new QCheckBox(grbConsole);
        chbHilightXML->setObjectName(QString::fromUtf8("chbHilightXML"));
        chbHilightXML->setTristate(true);

        horizontalLayout_2->addWidget(chbHilightXML);

        tlbSendXML = new QToolButton(grbConsole);
        tlbSendXML->setObjectName(QString::fromUtf8("tlbSendXML"));

        horizontalLayout_2->addWidget(tlbSendXML);

        tlbClearConsole = new QToolButton(grbConsole);
        tlbClearConsole->setObjectName(QString::fromUtf8("tlbClearConsole"));

        horizontalLayout_2->addWidget(tlbClearConsole);


        verticalLayout_2->addLayout(horizontalLayout_2);

        sptHSplitter->addWidget(grbConsole);

        verticalLayout_3->addWidget(sptHSplitter);


        retranslateUi(ConsoleWidgetClass);

        QMetaObject::connectSlotsByName(ConsoleWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *ConsoleWidgetClass)
    {
        ConsoleWidgetClass->setWindowTitle(QApplication::translate("ConsoleWidgetClass", "XML Console", 0, QApplication::UnicodeUTF8));
        grbFilter->setTitle(QApplication::translate("ConsoleWidgetClass", "Filter", 0, QApplication::UnicodeUTF8));
        lblStreamJid->setText(QApplication::translate("ConsoleWidgetClass", "Stream:", 0, QApplication::UnicodeUTF8));
        lblCondition->setText(QApplication::translate("ConsoleWidgetClass", "Condition:", 0, QApplication::UnicodeUTF8));
        tlbAddCondition->setText(QApplication::translate("ConsoleWidgetClass", "Add", 0, QApplication::UnicodeUTF8));
        tlbRemoveCondition->setText(QApplication::translate("ConsoleWidgetClass", "Remove", 0, QApplication::UnicodeUTF8));
        tlbClearCondition->setText(QApplication::translate("ConsoleWidgetClass", "Clear", 0, QApplication::UnicodeUTF8));
        lblContext->setText(QApplication::translate("ConsoleWidgetClass", "Available context:", 0, QApplication::UnicodeUTF8));
        tlbAddContext->setText(QApplication::translate("ConsoleWidgetClass", "Add", 0, QApplication::UnicodeUTF8));
        tlbRemoveContext->setText(QApplication::translate("ConsoleWidgetClass", "Remove", 0, QApplication::UnicodeUTF8));
        grbConsole->setTitle(QApplication::translate("ConsoleWidgetClass", "Console", 0, QApplication::UnicodeUTF8));
        chbWordWrap->setText(QApplication::translate("ConsoleWidgetClass", "Word wrap", 0, QApplication::UnicodeUTF8));
        chbHilightXML->setText(QApplication::translate("ConsoleWidgetClass", "Highlight XML", 0, QApplication::UnicodeUTF8));
        tlbSendXML->setText(QApplication::translate("ConsoleWidgetClass", "Send", 0, QApplication::UnicodeUTF8));
        tlbClearConsole->setText(QApplication::translate("ConsoleWidgetClass", "Clear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConsoleWidgetClass: public Ui_ConsoleWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLEWIDGET_H
