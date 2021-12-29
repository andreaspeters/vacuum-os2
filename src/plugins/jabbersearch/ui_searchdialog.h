/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created: Sat Jan 26 02:18:52 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchDialogClass
{
public:
    QVBoxLayout *vboxLayout;
    QStackedWidget *stwWidgets;
    QWidget *pgeFields;
    QGridLayout *gridLayout;
    QLabel *lblInstructions;
    QLabel *lblFirst;
    QLineEdit *lneFirst;
    QLabel *lblLast;
    QLineEdit *lneLast;
    QLabel *lblNick;
    QLineEdit *lneNick;
    QLabel *lblEmail;
    QLineEdit *lneEmail;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QWidget *pgeResult;
    QVBoxLayout *vboxLayout1;
    QTableWidget *tbwResult;
    QWidget *pgeForm;
    QFrame *frame;
    QDialogButtonBox *dbbButtons;

    void setupUi(QDialog *SearchDialogClass)
    {
        if (SearchDialogClass->objectName().isEmpty())
            SearchDialogClass->setObjectName(QString::fromUtf8("SearchDialogClass"));
        SearchDialogClass->resize(504, 330);
        vboxLayout = new QVBoxLayout(SearchDialogClass);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(5, 5, 5, 5);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        stwWidgets = new QStackedWidget(SearchDialogClass);
        stwWidgets->setObjectName(QString::fromUtf8("stwWidgets"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stwWidgets->sizePolicy().hasHeightForWidth());
        stwWidgets->setSizePolicy(sizePolicy);
        pgeFields = new QWidget();
        pgeFields->setObjectName(QString::fromUtf8("pgeFields"));
        gridLayout = new QGridLayout(pgeFields);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblInstructions = new QLabel(pgeFields);
        lblInstructions->setObjectName(QString::fromUtf8("lblInstructions"));
        lblInstructions->setTextFormat(Qt::PlainText);
        lblInstructions->setAlignment(Qt::AlignCenter);
        lblInstructions->setWordWrap(true);

        gridLayout->addWidget(lblInstructions, 1, 0, 1, 2);

        lblFirst = new QLabel(pgeFields);
        lblFirst->setObjectName(QString::fromUtf8("lblFirst"));
        lblFirst->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblFirst, 2, 0, 1, 1);

        lneFirst = new QLineEdit(pgeFields);
        lneFirst->setObjectName(QString::fromUtf8("lneFirst"));

        gridLayout->addWidget(lneFirst, 2, 1, 1, 1);

        lblLast = new QLabel(pgeFields);
        lblLast->setObjectName(QString::fromUtf8("lblLast"));
        lblLast->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblLast, 3, 0, 1, 1);

        lneLast = new QLineEdit(pgeFields);
        lneLast->setObjectName(QString::fromUtf8("lneLast"));

        gridLayout->addWidget(lneLast, 3, 1, 1, 1);

        lblNick = new QLabel(pgeFields);
        lblNick->setObjectName(QString::fromUtf8("lblNick"));
        lblNick->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblNick, 4, 0, 1, 1);

        lneNick = new QLineEdit(pgeFields);
        lneNick->setObjectName(QString::fromUtf8("lneNick"));

        gridLayout->addWidget(lneNick, 4, 1, 1, 1);

        lblEmail = new QLabel(pgeFields);
        lblEmail->setObjectName(QString::fromUtf8("lblEmail"));
        lblEmail->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lblEmail, 5, 0, 1, 1);

        lneEmail = new QLineEdit(pgeFields);
        lneEmail->setObjectName(QString::fromUtf8("lneEmail"));

        gridLayout->addWidget(lneEmail, 5, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 0, 0, 1, 1);

        spacerItem1 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 6, 0, 1, 1);

        stwWidgets->addWidget(pgeFields);
        pgeResult = new QWidget();
        pgeResult->setObjectName(QString::fromUtf8("pgeResult"));
        vboxLayout1 = new QVBoxLayout(pgeResult);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        tbwResult = new QTableWidget(pgeResult);
        if (tbwResult->columnCount() < 5)
            tbwResult->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbwResult->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tbwResult->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tbwResult->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tbwResult->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tbwResult->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tbwResult->setObjectName(QString::fromUtf8("tbwResult"));
        tbwResult->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tbwResult->setAlternatingRowColors(true);
        tbwResult->setSelectionMode(QAbstractItemView::SingleSelection);
        tbwResult->setSelectionBehavior(QAbstractItemView::SelectRows);

        vboxLayout1->addWidget(tbwResult);

        stwWidgets->addWidget(pgeResult);
        pgeForm = new QWidget();
        pgeForm->setObjectName(QString::fromUtf8("pgeForm"));
        stwWidgets->addWidget(pgeForm);

        vboxLayout->addWidget(stwWidgets);

        frame = new QFrame(SearchDialogClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Raised);

        vboxLayout->addWidget(frame);

        dbbButtons = new QDialogButtonBox(SearchDialogClass);
        dbbButtons->setObjectName(QString::fromUtf8("dbbButtons"));
        dbbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(dbbButtons);


        retranslateUi(SearchDialogClass);

        stwWidgets->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SearchDialogClass);
    } // setupUi

    void retranslateUi(QDialog *SearchDialogClass)
    {
        lblFirst->setText(QApplication::translate("SearchDialogClass", "First:", 0, QApplication::UnicodeUTF8));
        lblLast->setText(QApplication::translate("SearchDialogClass", "Last:", 0, QApplication::UnicodeUTF8));
        lblNick->setText(QApplication::translate("SearchDialogClass", "Nick:", 0, QApplication::UnicodeUTF8));
        lblEmail->setText(QApplication::translate("SearchDialogClass", "Email:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tbwResult->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SearchDialogClass", "JID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tbwResult->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SearchDialogClass", "First", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tbwResult->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SearchDialogClass", "Last", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tbwResult->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SearchDialogClass", "Nick", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tbwResult->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("SearchDialogClass", "EMail", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SearchDialogClass);
    } // retranslateUi

};

namespace Ui {
    class SearchDialogClass: public Ui_SearchDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
