/********************************************************************************
** Form generated from reading UI file 'subscriptiondialog.ui'
**
** Created: Sat Jan 26 02:05:43 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSCRIPTIONDIALOG_H
#define UI_SUBSCRIPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SubscriptionDialogClass
{
public:
    QVBoxLayout *lytMainLayout;
    QLabel *lblNotify;
    QLabel *lblMessage;
    QGroupBox *grbActions;
    QVBoxLayout *lytActionsLayout;
    QRadioButton *rbtAddToRoster;
    QRadioButton *rbtSendAndRequest;
    QRadioButton *rbtRemoveAndRefuse;
    QDialogButtonBox *btbDialogButtons;

    void setupUi(QDialog *SubscriptionDialogClass)
    {
        if (SubscriptionDialogClass->objectName().isEmpty())
            SubscriptionDialogClass->setObjectName(QString::fromUtf8("SubscriptionDialogClass"));
        SubscriptionDialogClass->resize(369, 173);
        lytMainLayout = new QVBoxLayout(SubscriptionDialogClass);
        lytMainLayout->setSpacing(6);
        lytMainLayout->setContentsMargins(5, 5, 5, 5);
        lytMainLayout->setObjectName(QString::fromUtf8("lytMainLayout"));
        lblNotify = new QLabel(SubscriptionDialogClass);
        lblNotify->setObjectName(QString::fromUtf8("lblNotify"));
        lblNotify->setFrameShape(QFrame::Box);
        lblNotify->setFrameShadow(QFrame::Sunken);
        lblNotify->setTextFormat(Qt::PlainText);
        lblNotify->setAlignment(Qt::AlignCenter);
        lblNotify->setWordWrap(true);

        lytMainLayout->addWidget(lblNotify);

        lblMessage = new QLabel(SubscriptionDialogClass);
        lblMessage->setObjectName(QString::fromUtf8("lblMessage"));
        lblMessage->setFrameShape(QFrame::Box);
        lblMessage->setFrameShadow(QFrame::Sunken);
        lblMessage->setTextFormat(Qt::PlainText);
        lblMessage->setWordWrap(true);
        lblMessage->setTextInteractionFlags(Qt::NoTextInteraction);

        lytMainLayout->addWidget(lblMessage);

        grbActions = new QGroupBox(SubscriptionDialogClass);
        grbActions->setObjectName(QString::fromUtf8("grbActions"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(grbActions->sizePolicy().hasHeightForWidth());
        grbActions->setSizePolicy(sizePolicy);
        lytActionsLayout = new QVBoxLayout(grbActions);
        lytActionsLayout->setSpacing(6);
        lytActionsLayout->setContentsMargins(5, 5, 5, 5);
        lytActionsLayout->setObjectName(QString::fromUtf8("lytActionsLayout"));
        rbtAddToRoster = new QRadioButton(grbActions);
        rbtAddToRoster->setObjectName(QString::fromUtf8("rbtAddToRoster"));
        rbtAddToRoster->setChecked(true);

        lytActionsLayout->addWidget(rbtAddToRoster);

        rbtSendAndRequest = new QRadioButton(grbActions);
        rbtSendAndRequest->setObjectName(QString::fromUtf8("rbtSendAndRequest"));
        rbtSendAndRequest->setChecked(false);

        lytActionsLayout->addWidget(rbtSendAndRequest);

        rbtRemoveAndRefuse = new QRadioButton(grbActions);
        rbtRemoveAndRefuse->setObjectName(QString::fromUtf8("rbtRemoveAndRefuse"));

        lytActionsLayout->addWidget(rbtRemoveAndRefuse);


        lytMainLayout->addWidget(grbActions);

        btbDialogButtons = new QDialogButtonBox(SubscriptionDialogClass);
        btbDialogButtons->setObjectName(QString::fromUtf8("btbDialogButtons"));
        btbDialogButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        lytMainLayout->addWidget(btbDialogButtons);

        lblNotify->raise();
        btbDialogButtons->raise();
        lblMessage->raise();
        grbActions->raise();

        retranslateUi(SubscriptionDialogClass);

        QMetaObject::connectSlotsByName(SubscriptionDialogClass);
    } // setupUi

    void retranslateUi(QDialog *SubscriptionDialogClass)
    {
        lblNotify->setText(QString());
        grbActions->setTitle(QString());
        rbtAddToRoster->setText(QApplication::translate("SubscriptionDialogClass", "Add user to contact list", 0, QApplication::UnicodeUTF8));
        rbtSendAndRequest->setText(QApplication::translate("SubscriptionDialogClass", "Authorize presence subscription", 0, QApplication::UnicodeUTF8));
        rbtRemoveAndRefuse->setText(QApplication::translate("SubscriptionDialogClass", "Remove presence subscription", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SubscriptionDialogClass);
    } // retranslateUi

};

namespace Ui {
    class SubscriptionDialogClass: public Ui_SubscriptionDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSCRIPTIONDIALOG_H
