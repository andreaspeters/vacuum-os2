/********************************************************************************
** Form generated from reading UI file 'streamdialog.ui'
**
** Created: Sat Jan 26 02:23:09 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAMDIALOG_H
#define UI_STREAMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StreamDialogClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *lblContactLabel;
    QLabel *lblContact;
    QLabel *lblFileLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lneFile;
    QToolButton *tlbFile;
    QLabel *lblDescriptionLabel;
    QLabel *lblProgressLabel;
    QVBoxLayout *verticalLayout;
    QLabel *lblProgress;
    QProgressBar *pgbPrgress;
    QLabel *lblStatusLabel;
    QLabel *lblStatus;
    QTextEdit *pteDescription;
    QGroupBox *grbMethods;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblMethodSettings;
    QComboBox *cmbSettingsProfile;
    QWidget *wdtMethods;
    QFrame *line;
    QDialogButtonBox *bbxButtons;

    void setupUi(QDialog *StreamDialogClass)
    {
        if (StreamDialogClass->objectName().isEmpty())
            StreamDialogClass->setObjectName(QString::fromUtf8("StreamDialogClass"));
        StreamDialogClass->resize(410, 320);
        verticalLayout_2 = new QVBoxLayout(StreamDialogClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lblContactLabel = new QLabel(StreamDialogClass);
        lblContactLabel->setObjectName(QString::fromUtf8("lblContactLabel"));
        lblContactLabel->setTextFormat(Qt::PlainText);

        formLayout->setWidget(0, QFormLayout::LabelRole, lblContactLabel);

        lblContact = new QLabel(StreamDialogClass);
        lblContact->setObjectName(QString::fromUtf8("lblContact"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblContact->sizePolicy().hasHeightForWidth());
        lblContact->setSizePolicy(sizePolicy);
        lblContact->setFrameShape(QFrame::Panel);
        lblContact->setFrameShadow(QFrame::Sunken);
        lblContact->setTextFormat(Qt::RichText);

        formLayout->setWidget(0, QFormLayout::FieldRole, lblContact);

        lblFileLabel = new QLabel(StreamDialogClass);
        lblFileLabel->setObjectName(QString::fromUtf8("lblFileLabel"));
        lblFileLabel->setTextFormat(Qt::PlainText);

        formLayout->setWidget(1, QFormLayout::LabelRole, lblFileLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lneFile = new QLineEdit(StreamDialogClass);
        lneFile->setObjectName(QString::fromUtf8("lneFile"));

        horizontalLayout->addWidget(lneFile);

        tlbFile = new QToolButton(StreamDialogClass);
        tlbFile->setObjectName(QString::fromUtf8("tlbFile"));

        horizontalLayout->addWidget(tlbFile);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        lblDescriptionLabel = new QLabel(StreamDialogClass);
        lblDescriptionLabel->setObjectName(QString::fromUtf8("lblDescriptionLabel"));
        lblDescriptionLabel->setTextFormat(Qt::PlainText);

        formLayout->setWidget(2, QFormLayout::LabelRole, lblDescriptionLabel);

        lblProgressLabel = new QLabel(StreamDialogClass);
        lblProgressLabel->setObjectName(QString::fromUtf8("lblProgressLabel"));
        lblProgressLabel->setTextFormat(Qt::PlainText);

        formLayout->setWidget(3, QFormLayout::LabelRole, lblProgressLabel);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblProgress = new QLabel(StreamDialogClass);
        lblProgress->setObjectName(QString::fromUtf8("lblProgress"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblProgress->sizePolicy().hasHeightForWidth());
        lblProgress->setSizePolicy(sizePolicy1);
        lblProgress->setFrameShape(QFrame::Panel);
        lblProgress->setFrameShadow(QFrame::Sunken);
        lblProgress->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(lblProgress);

        pgbPrgress = new QProgressBar(StreamDialogClass);
        pgbPrgress->setObjectName(QString::fromUtf8("pgbPrgress"));

        verticalLayout->addWidget(pgbPrgress);


        formLayout->setLayout(3, QFormLayout::FieldRole, verticalLayout);

        lblStatusLabel = new QLabel(StreamDialogClass);
        lblStatusLabel->setObjectName(QString::fromUtf8("lblStatusLabel"));
        lblStatusLabel->setTextFormat(Qt::PlainText);

        formLayout->setWidget(4, QFormLayout::LabelRole, lblStatusLabel);

        lblStatus = new QLabel(StreamDialogClass);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        sizePolicy1.setHeightForWidth(lblStatus->sizePolicy().hasHeightForWidth());
        lblStatus->setSizePolicy(sizePolicy1);
        lblStatus->setFrameShape(QFrame::Panel);
        lblStatus->setFrameShadow(QFrame::Sunken);
        lblStatus->setTextFormat(Qt::PlainText);

        formLayout->setWidget(4, QFormLayout::FieldRole, lblStatus);

        pteDescription = new QTextEdit(StreamDialogClass);
        pteDescription->setObjectName(QString::fromUtf8("pteDescription"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pteDescription->sizePolicy().hasHeightForWidth());
        pteDescription->setSizePolicy(sizePolicy2);
        pteDescription->setMaximumSize(QSize(16777215, 61));

        formLayout->setWidget(2, QFormLayout::FieldRole, pteDescription);


        verticalLayout_2->addLayout(formLayout);

        grbMethods = new QGroupBox(StreamDialogClass);
        grbMethods->setObjectName(QString::fromUtf8("grbMethods"));
        verticalLayout_3 = new QVBoxLayout(grbMethods);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblMethodSettings = new QLabel(grbMethods);
        lblMethodSettings->setObjectName(QString::fromUtf8("lblMethodSettings"));
        lblMethodSettings->setTextFormat(Qt::PlainText);

        horizontalLayout_2->addWidget(lblMethodSettings);

        cmbSettingsProfile = new QComboBox(grbMethods);
        cmbSettingsProfile->setObjectName(QString::fromUtf8("cmbSettingsProfile"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cmbSettingsProfile->sizePolicy().hasHeightForWidth());
        cmbSettingsProfile->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(cmbSettingsProfile);


        verticalLayout_3->addLayout(horizontalLayout_2);

        wdtMethods = new QWidget(grbMethods);
        wdtMethods->setObjectName(QString::fromUtf8("wdtMethods"));

        verticalLayout_3->addWidget(wdtMethods);


        verticalLayout_2->addWidget(grbMethods);

        line = new QFrame(StreamDialogClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        bbxButtons = new QDialogButtonBox(StreamDialogClass);
        bbxButtons->setObjectName(QString::fromUtf8("bbxButtons"));
        bbxButtons->setStandardButtons(QDialogButtonBox::Abort|QDialogButtonBox::Close|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(bbxButtons);

#ifndef QT_NO_SHORTCUT
        lblFileLabel->setBuddy(lneFile);
        lblDescriptionLabel->setBuddy(pteDescription);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lneFile, tlbFile);
        QWidget::setTabOrder(tlbFile, pteDescription);
        QWidget::setTabOrder(pteDescription, bbxButtons);

        retranslateUi(StreamDialogClass);

        QMetaObject::connectSlotsByName(StreamDialogClass);
    } // setupUi

    void retranslateUi(QDialog *StreamDialogClass)
    {
        lblContactLabel->setText(QApplication::translate("StreamDialogClass", "To/From:", 0, QApplication::UnicodeUTF8));
        lblFileLabel->setText(QApplication::translate("StreamDialogClass", "File:", 0, QApplication::UnicodeUTF8));
        tlbFile->setText(QApplication::translate("StreamDialogClass", "...", 0, QApplication::UnicodeUTF8));
        lblDescriptionLabel->setText(QApplication::translate("StreamDialogClass", "Description:", 0, QApplication::UnicodeUTF8));
        lblProgressLabel->setText(QApplication::translate("StreamDialogClass", "Progress:", 0, QApplication::UnicodeUTF8));
        lblStatusLabel->setText(QApplication::translate("StreamDialogClass", "Status:", 0, QApplication::UnicodeUTF8));
        grbMethods->setTitle(QApplication::translate("StreamDialogClass", "Select data stream and settings profile", 0, QApplication::UnicodeUTF8));
        lblMethodSettings->setText(QApplication::translate("StreamDialogClass", "Profile:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(StreamDialogClass);
    } // retranslateUi

};

namespace Ui {
    class StreamDialogClass: public Ui_StreamDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAMDIALOG_H
