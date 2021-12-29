/********************************************************************************
** Form generated from reading UI file 'editlistsdialog.ui'
**
** Created: Sat Jan 26 02:20:24 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITLISTSDIALOG_H
#define UI_EDITLISTSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditListsDialogClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *grbDefaults;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *lblDefault;
    QComboBox *cmbDefault;
    QLabel *lblActive;
    QComboBox *cmbActive;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *grbLists;
    QVBoxLayout *vboxLayout1;
    QListWidget *ltwLists;
    QHBoxLayout *hboxLayout1;
    QToolButton *tlbAddList;
    QToolButton *tlbDeleteList;
    QGroupBox *grbRulesList;
    QVBoxLayout *verticalLayout;
    QListWidget *ltwRules;
    QHBoxLayout *horizontalLayout;
    QToolButton *tlbAddRule;
    QToolButton *tlbDeleteRule;
    QToolButton *tlbRuleUp;
    QToolButton *tlbRuleDown;
    QGroupBox *grbRuleCondition;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout2;
    QLabel *lblType;
    QComboBox *cmbType;
    QLabel *lblEqual;
    QComboBox *cmbValue;
    QLabel *lblThen;
    QComboBox *cmbAction;
    QHBoxLayout *hboxLayout3;
    QCheckBox *chbMessage;
    QCheckBox *chbQueries;
    QCheckBox *chbPresenceIn;
    QCheckBox *chbPresenceOut;
    QFrame *frame;
    QDialogButtonBox *dbbButtons;

    void setupUi(QDialog *EditListsDialogClass)
    {
        if (EditListsDialogClass->objectName().isEmpty())
            EditListsDialogClass->setObjectName(QString::fromUtf8("EditListsDialogClass"));
        EditListsDialogClass->resize(592, 414);
        verticalLayout_2 = new QVBoxLayout(EditListsDialogClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        grbDefaults = new QGroupBox(EditListsDialogClass);
        grbDefaults->setObjectName(QString::fromUtf8("grbDefaults"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(grbDefaults->sizePolicy().hasHeightForWidth());
        grbDefaults->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(grbDefaults);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(5, 5, 5, 5);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lblDefault = new QLabel(grbDefaults);
        lblDefault->setObjectName(QString::fromUtf8("lblDefault"));
        lblDefault->setTextFormat(Qt::PlainText);

        hboxLayout->addWidget(lblDefault);

        cmbDefault = new QComboBox(grbDefaults);
        cmbDefault->setObjectName(QString::fromUtf8("cmbDefault"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbDefault->sizePolicy().hasHeightForWidth());
        cmbDefault->setSizePolicy(sizePolicy1);
        cmbDefault->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        hboxLayout->addWidget(cmbDefault);

        lblActive = new QLabel(grbDefaults);
        lblActive->setObjectName(QString::fromUtf8("lblActive"));
        lblActive->setTextFormat(Qt::PlainText);

        hboxLayout->addWidget(lblActive);

        cmbActive = new QComboBox(grbDefaults);
        cmbActive->setObjectName(QString::fromUtf8("cmbActive"));
        sizePolicy1.setHeightForWidth(cmbActive->sizePolicy().hasHeightForWidth());
        cmbActive->setSizePolicy(sizePolicy1);
        cmbActive->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        hboxLayout->addWidget(cmbActive);


        vboxLayout->addLayout(hboxLayout);


        verticalLayout_2->addWidget(grbDefaults);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        grbLists = new QGroupBox(EditListsDialogClass);
        grbLists->setObjectName(QString::fromUtf8("grbLists"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(grbLists->sizePolicy().hasHeightForWidth());
        grbLists->setSizePolicy(sizePolicy2);
        vboxLayout1 = new QVBoxLayout(grbLists);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(5, 5, 5, 5);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        ltwLists = new QListWidget(grbLists);
        ltwLists->setObjectName(QString::fromUtf8("ltwLists"));

        vboxLayout1->addWidget(ltwLists);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        tlbAddList = new QToolButton(grbLists);
        tlbAddList->setObjectName(QString::fromUtf8("tlbAddList"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tlbAddList->sizePolicy().hasHeightForWidth());
        tlbAddList->setSizePolicy(sizePolicy3);

        hboxLayout1->addWidget(tlbAddList);

        tlbDeleteList = new QToolButton(grbLists);
        tlbDeleteList->setObjectName(QString::fromUtf8("tlbDeleteList"));
        sizePolicy3.setHeightForWidth(tlbDeleteList->sizePolicy().hasHeightForWidth());
        tlbDeleteList->setSizePolicy(sizePolicy3);

        hboxLayout1->addWidget(tlbDeleteList);


        vboxLayout1->addLayout(hboxLayout1);


        horizontalLayout_2->addWidget(grbLists);

        grbRulesList = new QGroupBox(EditListsDialogClass);
        grbRulesList->setObjectName(QString::fromUtf8("grbRulesList"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(5);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(grbRulesList->sizePolicy().hasHeightForWidth());
        grbRulesList->setSizePolicy(sizePolicy4);
        verticalLayout = new QVBoxLayout(grbRulesList);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ltwRules = new QListWidget(grbRulesList);
        ltwRules->setObjectName(QString::fromUtf8("ltwRules"));

        verticalLayout->addWidget(ltwRules);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tlbAddRule = new QToolButton(grbRulesList);
        tlbAddRule->setObjectName(QString::fromUtf8("tlbAddRule"));
        sizePolicy3.setHeightForWidth(tlbAddRule->sizePolicy().hasHeightForWidth());
        tlbAddRule->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(tlbAddRule);

        tlbDeleteRule = new QToolButton(grbRulesList);
        tlbDeleteRule->setObjectName(QString::fromUtf8("tlbDeleteRule"));
        sizePolicy3.setHeightForWidth(tlbDeleteRule->sizePolicy().hasHeightForWidth());
        tlbDeleteRule->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(tlbDeleteRule);

        tlbRuleUp = new QToolButton(grbRulesList);
        tlbRuleUp->setObjectName(QString::fromUtf8("tlbRuleUp"));
        sizePolicy3.setHeightForWidth(tlbRuleUp->sizePolicy().hasHeightForWidth());
        tlbRuleUp->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(tlbRuleUp);

        tlbRuleDown = new QToolButton(grbRulesList);
        tlbRuleDown->setObjectName(QString::fromUtf8("tlbRuleDown"));
        sizePolicy3.setHeightForWidth(tlbRuleDown->sizePolicy().hasHeightForWidth());
        tlbRuleDown->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(tlbRuleDown);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addWidget(grbRulesList);


        verticalLayout_2->addLayout(horizontalLayout_2);

        grbRuleCondition = new QGroupBox(EditListsDialogClass);
        grbRuleCondition->setObjectName(QString::fromUtf8("grbRuleCondition"));
        vboxLayout2 = new QVBoxLayout(grbRuleCondition);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(5, 5, 5, 5);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        lblType = new QLabel(grbRuleCondition);
        lblType->setObjectName(QString::fromUtf8("lblType"));
        lblType->setTextFormat(Qt::PlainText);
        lblType->setAlignment(Qt::AlignCenter);

        hboxLayout2->addWidget(lblType);

        cmbType = new QComboBox(grbRuleCondition);
        cmbType->setObjectName(QString::fromUtf8("cmbType"));

        hboxLayout2->addWidget(cmbType);

        lblEqual = new QLabel(grbRuleCondition);
        lblEqual->setObjectName(QString::fromUtf8("lblEqual"));
        lblEqual->setTextFormat(Qt::PlainText);
        lblEqual->setAlignment(Qt::AlignCenter);

        hboxLayout2->addWidget(lblEqual);

        cmbValue = new QComboBox(grbRuleCondition);
        cmbValue->setObjectName(QString::fromUtf8("cmbValue"));
        sizePolicy1.setHeightForWidth(cmbValue->sizePolicy().hasHeightForWidth());
        cmbValue->setSizePolicy(sizePolicy1);
        cmbValue->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        hboxLayout2->addWidget(cmbValue);

        lblThen = new QLabel(grbRuleCondition);
        lblThen->setObjectName(QString::fromUtf8("lblThen"));
        lblThen->setTextFormat(Qt::PlainText);
        lblThen->setAlignment(Qt::AlignCenter);

        hboxLayout2->addWidget(lblThen);

        cmbAction = new QComboBox(grbRuleCondition);
        cmbAction->setObjectName(QString::fromUtf8("cmbAction"));

        hboxLayout2->addWidget(cmbAction);


        vboxLayout2->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        chbMessage = new QCheckBox(grbRuleCondition);
        chbMessage->setObjectName(QString::fromUtf8("chbMessage"));

        hboxLayout3->addWidget(chbMessage);

        chbQueries = new QCheckBox(grbRuleCondition);
        chbQueries->setObjectName(QString::fromUtf8("chbQueries"));

        hboxLayout3->addWidget(chbQueries);

        chbPresenceIn = new QCheckBox(grbRuleCondition);
        chbPresenceIn->setObjectName(QString::fromUtf8("chbPresenceIn"));

        hboxLayout3->addWidget(chbPresenceIn);

        chbPresenceOut = new QCheckBox(grbRuleCondition);
        chbPresenceOut->setObjectName(QString::fromUtf8("chbPresenceOut"));

        hboxLayout3->addWidget(chbPresenceOut);


        vboxLayout2->addLayout(hboxLayout3);


        verticalLayout_2->addWidget(grbRuleCondition);

        frame = new QFrame(EditListsDialogClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame);

        dbbButtons = new QDialogButtonBox(EditListsDialogClass);
        dbbButtons->setObjectName(QString::fromUtf8("dbbButtons"));
        dbbButtons->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout_2->addWidget(dbbButtons);


        retranslateUi(EditListsDialogClass);

        QMetaObject::connectSlotsByName(EditListsDialogClass);
    } // setupUi

    void retranslateUi(QDialog *EditListsDialogClass)
    {
        grbDefaults->setTitle(QApplication::translate("EditListsDialogClass", "Setup Default and Active Lists", 0, QApplication::UnicodeUTF8));
        lblDefault->setText(QApplication::translate("EditListsDialogClass", "Default:", 0, QApplication::UnicodeUTF8));
        lblActive->setText(QApplication::translate("EditListsDialogClass", "Active:", 0, QApplication::UnicodeUTF8));
        grbLists->setTitle(QApplication::translate("EditListsDialogClass", "Edit lists", 0, QApplication::UnicodeUTF8));
        tlbAddList->setText(QApplication::translate("EditListsDialogClass", "Add", 0, QApplication::UnicodeUTF8));
        tlbDeleteList->setText(QApplication::translate("EditListsDialogClass", "Remove", 0, QApplication::UnicodeUTF8));
        grbRulesList->setTitle(QApplication::translate("EditListsDialogClass", "Edit list rules", 0, QApplication::UnicodeUTF8));
        tlbAddRule->setText(QApplication::translate("EditListsDialogClass", "Add", 0, QApplication::UnicodeUTF8));
        tlbDeleteRule->setText(QApplication::translate("EditListsDialogClass", "Remove", 0, QApplication::UnicodeUTF8));
        tlbRuleUp->setText(QApplication::translate("EditListsDialogClass", "Up", 0, QApplication::UnicodeUTF8));
        tlbRuleDown->setText(QApplication::translate("EditListsDialogClass", "Down", 0, QApplication::UnicodeUTF8));
        grbRuleCondition->setTitle(QApplication::translate("EditListsDialogClass", "Edit rule condition", 0, QApplication::UnicodeUTF8));
        lblType->setText(QApplication::translate("EditListsDialogClass", "if", 0, QApplication::UnicodeUTF8));
        lblEqual->setText(QApplication::translate("EditListsDialogClass", "=", 0, QApplication::UnicodeUTF8));
        lblThen->setText(QApplication::translate("EditListsDialogClass", "then", 0, QApplication::UnicodeUTF8));
        chbMessage->setText(QApplication::translate("EditListsDialogClass", "messages", 0, QApplication::UnicodeUTF8));
        chbQueries->setText(QApplication::translate("EditListsDialogClass", "queries", 0, QApplication::UnicodeUTF8));
        chbPresenceIn->setText(QApplication::translate("EditListsDialogClass", "pres-in", 0, QApplication::UnicodeUTF8));
        chbPresenceOut->setText(QApplication::translate("EditListsDialogClass", "pres-out", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(EditListsDialogClass);
    } // retranslateUi

};

namespace Ui {
    class EditListsDialogClass: public Ui_EditListsDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITLISTSDIALOG_H
