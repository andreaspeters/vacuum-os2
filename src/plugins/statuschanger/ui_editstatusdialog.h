/********************************************************************************
** Form generated from reading UI file 'editstatusdialog.ui'
**
** Created: Sat Jan 26 02:05:21 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSTATUSDIALOG_H
#define UI_EDITSTATUSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditStatusDialogClass
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tblStatus;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbtAdd;
    QPushButton *pbtDelete;
    QDialogButtonBox *dbtDialogButtons;

    void setupUi(QDialog *EditStatusDialogClass)
    {
        if (EditStatusDialogClass->objectName().isEmpty())
            EditStatusDialogClass->setObjectName(QString::fromUtf8("EditStatusDialogClass"));
        EditStatusDialogClass->resize(642, 539);
        verticalLayout = new QVBoxLayout(EditStatusDialogClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tblStatus = new QTableWidget(EditStatusDialogClass);
        if (tblStatus->columnCount() < 4)
            tblStatus->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblStatus->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblStatus->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tblStatus->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tblStatus->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tblStatus->setObjectName(QString::fromUtf8("tblStatus"));
        tblStatus->setSelectionMode(QAbstractItemView::SingleSelection);
        tblStatus->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblStatus->setRowCount(0);
        tblStatus->setColumnCount(4);
        tblStatus->horizontalHeader()->setHighlightSections(false);
        tblStatus->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tblStatus);

        line = new QFrame(EditStatusDialogClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbtAdd = new QPushButton(EditStatusDialogClass);
        pbtAdd->setObjectName(QString::fromUtf8("pbtAdd"));

        horizontalLayout->addWidget(pbtAdd);

        pbtDelete = new QPushButton(EditStatusDialogClass);
        pbtDelete->setObjectName(QString::fromUtf8("pbtDelete"));

        horizontalLayout->addWidget(pbtDelete);

        dbtDialogButtons = new QDialogButtonBox(EditStatusDialogClass);
        dbtDialogButtons->setObjectName(QString::fromUtf8("dbtDialogButtons"));
        dbtDialogButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(dbtDialogButtons);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(tblStatus, pbtAdd);
        QWidget::setTabOrder(pbtAdd, pbtDelete);
        QWidget::setTabOrder(pbtDelete, dbtDialogButtons);

        retranslateUi(EditStatusDialogClass);
        QObject::connect(dbtDialogButtons, SIGNAL(rejected()), EditStatusDialogClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditStatusDialogClass);
    } // setupUi

    void retranslateUi(QDialog *EditStatusDialogClass)
    {
        EditStatusDialogClass->setWindowTitle(QApplication::translate("EditStatusDialogClass", "Edit statuses", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tblStatus->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditStatusDialogClass", "Type", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem->setToolTip(QApplication::translate("EditStatusDialogClass", "Status type<br>\n"
"Types for standard statuses are grayed out.\n"
"You can set status class for additional statuses defined by you.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem1 = tblStatus->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditStatusDialogClass", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem1->setToolTip(QApplication::translate("EditStatusDialogClass", "Status name displayed in status change menu", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem2 = tblStatus->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EditStatusDialogClass", "Message", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem2->setToolTip(QApplication::translate("EditStatusDialogClass", "Status message", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem3 = tblStatus->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("EditStatusDialogClass", "Priority", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem3->setToolTip(QApplication::translate("EditStatusDialogClass", "Status priority", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbtAdd->setText(QApplication::translate("EditStatusDialogClass", "Add", 0, QApplication::UnicodeUTF8));
        pbtDelete->setText(QApplication::translate("EditStatusDialogClass", "Delete", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditStatusDialogClass: public Ui_EditStatusDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSTATUSDIALOG_H
