/********************************************************************************
** Form generated from reading UI file 'vcarddialog.ui'
**
** Created: Sat Jan 26 02:15:09 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VCARDDIALOG_H
#define UI_VCARDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "prixmapframe.h"

QT_BEGIN_NAMESPACE

class Ui_VCardDialogClass
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *twtVCard;
    QWidget *tabGeneral;
    QFormLayout *lotGeneral;
    QLabel *lblFullName;
    QLineEdit *lneFullName;
    QLabel *lblFirstName;
    QLineEdit *lneFirstName;
    QLabel *lblMiddleName;
    QLineEdit *lneMiddleName;
    QLabel *lblLastName;
    QLineEdit *lneLastName;
    QLabel *lblNickName;
    QLineEdit *lneNickName;
    QLabel *lblJabberId;
    QLineEdit *lneJabberId;
    QWidget *tabPersonal;
    QFormLayout *lotPersonal;
    QLabel *lblBirthday;
    QHBoxLayout *lotPersonalBirthday;
    QDateEdit *dedBirthday;
    QLabel *lblGender;
    QComboBox *cmbGender;
    QLabel *lblMarital;
    QLineEdit *lneMarital;
    QLabel *lblOcuupation;
    QLineEdit *lneTitle;
    QLabel *lblCompany;
    QLineEdit *lneCompany;
    QLabel *lblDepartment;
    QLineEdit *lneDepartment;
    QLabel *lblRole;
    QLineEdit *lneRole;
    QLabel *lblHomePage;
    QLineEdit *lneHomePage;
    QWidget *tabAdress;
    QHBoxLayout *lotAdress;
    QGroupBox *grbHomeAdress;
    QFormLayout *lotAdressHome;
    QLabel *lblHomeStreet;
    QLineEdit *lneHomeStreet;
    QLabel *lblHomeCity;
    QLineEdit *lneHomeCity;
    QLabel *lblHomeState;
    QLineEdit *lneHomeState;
    QLabel *lblHomeZip;
    QLineEdit *lneHomeZip;
    QLabel *lblHomeCountry;
    QLineEdit *lneHomeCountry;
    QGroupBox *grbWorkAdress;
    QFormLayout *lotAdressWork;
    QLabel *lblWorkStreet;
    QLineEdit *lneWorkStreet;
    QLabel *lblWorkCity;
    QLineEdit *lneWorkCity;
    QLabel *lblWorkState;
    QLineEdit *lneWorkState;
    QLabel *lblWorkZip;
    QLineEdit *lneWorkZip;
    QLabel *lblWorkCountry;
    QLineEdit *lneWorkCountry;
    QWidget *tabContacts;
    QHBoxLayout *lotContacts;
    QGroupBox *grbEmail;
    QVBoxLayout *lotEmail;
    QListWidget *ltwEmails;
    QHBoxLayout *lotEmailButtons;
    QToolButton *tlbEmailAdd;
    QToolButton *tlbEmailDelete;
    QGroupBox *grbPhone;
    QVBoxLayout *lotPhone;
    QListWidget *ltwPhones;
    QHBoxLayout *lotPhoneButtons;
    QToolButton *tlbPhoneAdd;
    QToolButton *tlbPhoneDelete;
    QWidget *tabPhoto;
    QHBoxLayout *lotPhoto;
    QGroupBox *grbPhoto;
    QVBoxLayout *lotPhotoImage;
    PrixmapFrame *pmfPhoto;
    QLabel *lblPhotoSize;
    QHBoxLayout *lotPhotoButtons;
    QToolButton *tlbPhotoSave;
    QToolButton *tlbPhotoLoad;
    QToolButton *tlbPhotoClear;
    QGroupBox *grbLogo;
    QVBoxLayout *lotLogoImage;
    PrixmapFrame *pmfLogo;
    QLabel *lblLogoSize;
    QHBoxLayout *lotLogoButtons;
    QToolButton *tlbLogoSave;
    QToolButton *tlbLogoLoad;
    QToolButton *tlbLogoClear;
    QWidget *tabComments;
    QVBoxLayout *lotComments;
    QTextEdit *tedComments;
    QFrame *line;
    QDialogButtonBox *btbButtons;

    void setupUi(QDialog *VCardDialogClass)
    {
        if (VCardDialogClass->objectName().isEmpty())
            VCardDialogClass->setObjectName(QString::fromUtf8("VCardDialogClass"));
        VCardDialogClass->resize(449, 250);
        verticalLayout = new QVBoxLayout(VCardDialogClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        twtVCard = new QTabWidget(VCardDialogClass);
        twtVCard->setObjectName(QString::fromUtf8("twtVCard"));
        twtVCard->setDocumentMode(true);
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QString::fromUtf8("tabGeneral"));
        lotGeneral = new QFormLayout(tabGeneral);
        lotGeneral->setSpacing(6);
        lotGeneral->setContentsMargins(3, 3, 3, 3);
        lotGeneral->setObjectName(QString::fromUtf8("lotGeneral"));
        lblFullName = new QLabel(tabGeneral);
        lblFullName->setObjectName(QString::fromUtf8("lblFullName"));
        lblFullName->setTextFormat(Qt::PlainText);

        lotGeneral->setWidget(0, QFormLayout::LabelRole, lblFullName);

        lneFullName = new QLineEdit(tabGeneral);
        lneFullName->setObjectName(QString::fromUtf8("lneFullName"));

        lotGeneral->setWidget(0, QFormLayout::FieldRole, lneFullName);

        lblFirstName = new QLabel(tabGeneral);
        lblFirstName->setObjectName(QString::fromUtf8("lblFirstName"));
        lblFirstName->setTextFormat(Qt::PlainText);

        lotGeneral->setWidget(1, QFormLayout::LabelRole, lblFirstName);

        lneFirstName = new QLineEdit(tabGeneral);
        lneFirstName->setObjectName(QString::fromUtf8("lneFirstName"));

        lotGeneral->setWidget(1, QFormLayout::FieldRole, lneFirstName);

        lblMiddleName = new QLabel(tabGeneral);
        lblMiddleName->setObjectName(QString::fromUtf8("lblMiddleName"));
        lblMiddleName->setTextFormat(Qt::PlainText);

        lotGeneral->setWidget(2, QFormLayout::LabelRole, lblMiddleName);

        lneMiddleName = new QLineEdit(tabGeneral);
        lneMiddleName->setObjectName(QString::fromUtf8("lneMiddleName"));

        lotGeneral->setWidget(2, QFormLayout::FieldRole, lneMiddleName);

        lblLastName = new QLabel(tabGeneral);
        lblLastName->setObjectName(QString::fromUtf8("lblLastName"));
        lblLastName->setTextFormat(Qt::PlainText);

        lotGeneral->setWidget(3, QFormLayout::LabelRole, lblLastName);

        lneLastName = new QLineEdit(tabGeneral);
        lneLastName->setObjectName(QString::fromUtf8("lneLastName"));

        lotGeneral->setWidget(3, QFormLayout::FieldRole, lneLastName);

        lblNickName = new QLabel(tabGeneral);
        lblNickName->setObjectName(QString::fromUtf8("lblNickName"));
        lblNickName->setTextFormat(Qt::PlainText);

        lotGeneral->setWidget(4, QFormLayout::LabelRole, lblNickName);

        lneNickName = new QLineEdit(tabGeneral);
        lneNickName->setObjectName(QString::fromUtf8("lneNickName"));

        lotGeneral->setWidget(4, QFormLayout::FieldRole, lneNickName);

        lblJabberId = new QLabel(tabGeneral);
        lblJabberId->setObjectName(QString::fromUtf8("lblJabberId"));
        lblJabberId->setTextFormat(Qt::PlainText);

        lotGeneral->setWidget(5, QFormLayout::LabelRole, lblJabberId);

        lneJabberId = new QLineEdit(tabGeneral);
        lneJabberId->setObjectName(QString::fromUtf8("lneJabberId"));

        lotGeneral->setWidget(5, QFormLayout::FieldRole, lneJabberId);

        twtVCard->addTab(tabGeneral, QString());
        tabPersonal = new QWidget();
        tabPersonal->setObjectName(QString::fromUtf8("tabPersonal"));
        lotPersonal = new QFormLayout(tabPersonal);
        lotPersonal->setSpacing(6);
        lotPersonal->setContentsMargins(3, 3, 3, 3);
        lotPersonal->setObjectName(QString::fromUtf8("lotPersonal"));
        lblBirthday = new QLabel(tabPersonal);
        lblBirthday->setObjectName(QString::fromUtf8("lblBirthday"));
        lblBirthday->setTextFormat(Qt::PlainText);

        lotPersonal->setWidget(0, QFormLayout::LabelRole, lblBirthday);

        lotPersonalBirthday = new QHBoxLayout();
        lotPersonalBirthday->setSpacing(6);
        lotPersonalBirthday->setObjectName(QString::fromUtf8("lotPersonalBirthday"));
        dedBirthday = new QDateEdit(tabPersonal);
        dedBirthday->setObjectName(QString::fromUtf8("dedBirthday"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dedBirthday->sizePolicy().hasHeightForWidth());
        dedBirthday->setSizePolicy(sizePolicy);
        dedBirthday->setDateTime(QDateTime(QDate(1900, 1, 1), QTime(0, 0, 0)));
        dedBirthday->setMinimumDateTime(QDateTime(QDate(1900, 1, 1), QTime(0, 0, 0)));
        dedBirthday->setCalendarPopup(true);

        lotPersonalBirthday->addWidget(dedBirthday);

        lblGender = new QLabel(tabPersonal);
        lblGender->setObjectName(QString::fromUtf8("lblGender"));
        lblGender->setTextFormat(Qt::PlainText);

        lotPersonalBirthday->addWidget(lblGender);

        cmbGender = new QComboBox(tabPersonal);
        cmbGender->setObjectName(QString::fromUtf8("cmbGender"));
        sizePolicy.setHeightForWidth(cmbGender->sizePolicy().hasHeightForWidth());
        cmbGender->setSizePolicy(sizePolicy);

        lotPersonalBirthday->addWidget(cmbGender);


        lotPersonal->setLayout(0, QFormLayout::FieldRole, lotPersonalBirthday);

        lblMarital = new QLabel(tabPersonal);
        lblMarital->setObjectName(QString::fromUtf8("lblMarital"));
        lblMarital->setTextFormat(Qt::PlainText);

        lotPersonal->setWidget(1, QFormLayout::LabelRole, lblMarital);

        lneMarital = new QLineEdit(tabPersonal);
        lneMarital->setObjectName(QString::fromUtf8("lneMarital"));

        lotPersonal->setWidget(1, QFormLayout::FieldRole, lneMarital);

        lblOcuupation = new QLabel(tabPersonal);
        lblOcuupation->setObjectName(QString::fromUtf8("lblOcuupation"));
        lblOcuupation->setTextFormat(Qt::PlainText);

        lotPersonal->setWidget(2, QFormLayout::LabelRole, lblOcuupation);

        lneTitle = new QLineEdit(tabPersonal);
        lneTitle->setObjectName(QString::fromUtf8("lneTitle"));

        lotPersonal->setWidget(2, QFormLayout::FieldRole, lneTitle);

        lblCompany = new QLabel(tabPersonal);
        lblCompany->setObjectName(QString::fromUtf8("lblCompany"));
        lblCompany->setTextFormat(Qt::PlainText);

        lotPersonal->setWidget(3, QFormLayout::LabelRole, lblCompany);

        lneCompany = new QLineEdit(tabPersonal);
        lneCompany->setObjectName(QString::fromUtf8("lneCompany"));

        lotPersonal->setWidget(3, QFormLayout::FieldRole, lneCompany);

        lblDepartment = new QLabel(tabPersonal);
        lblDepartment->setObjectName(QString::fromUtf8("lblDepartment"));
        lblDepartment->setTextFormat(Qt::PlainText);

        lotPersonal->setWidget(4, QFormLayout::LabelRole, lblDepartment);

        lneDepartment = new QLineEdit(tabPersonal);
        lneDepartment->setObjectName(QString::fromUtf8("lneDepartment"));

        lotPersonal->setWidget(4, QFormLayout::FieldRole, lneDepartment);

        lblRole = new QLabel(tabPersonal);
        lblRole->setObjectName(QString::fromUtf8("lblRole"));
        lblRole->setTextFormat(Qt::PlainText);

        lotPersonal->setWidget(5, QFormLayout::LabelRole, lblRole);

        lneRole = new QLineEdit(tabPersonal);
        lneRole->setObjectName(QString::fromUtf8("lneRole"));

        lotPersonal->setWidget(5, QFormLayout::FieldRole, lneRole);

        lblHomePage = new QLabel(tabPersonal);
        lblHomePage->setObjectName(QString::fromUtf8("lblHomePage"));
        lblHomePage->setTextFormat(Qt::PlainText);

        lotPersonal->setWidget(6, QFormLayout::LabelRole, lblHomePage);

        lneHomePage = new QLineEdit(tabPersonal);
        lneHomePage->setObjectName(QString::fromUtf8("lneHomePage"));

        lotPersonal->setWidget(6, QFormLayout::FieldRole, lneHomePage);

        twtVCard->addTab(tabPersonal, QString());
        tabAdress = new QWidget();
        tabAdress->setObjectName(QString::fromUtf8("tabAdress"));
        lotAdress = new QHBoxLayout(tabAdress);
        lotAdress->setSpacing(6);
        lotAdress->setContentsMargins(3, 3, 3, 3);
        lotAdress->setObjectName(QString::fromUtf8("lotAdress"));
        grbHomeAdress = new QGroupBox(tabAdress);
        grbHomeAdress->setObjectName(QString::fromUtf8("grbHomeAdress"));
        grbHomeAdress->setFlat(true);
        lotAdressHome = new QFormLayout(grbHomeAdress);
        lotAdressHome->setSpacing(6);
        lotAdressHome->setContentsMargins(0, 0, 0, 0);
        lotAdressHome->setObjectName(QString::fromUtf8("lotAdressHome"));
        lblHomeStreet = new QLabel(grbHomeAdress);
        lblHomeStreet->setObjectName(QString::fromUtf8("lblHomeStreet"));
        lblHomeStreet->setTextFormat(Qt::PlainText);

        lotAdressHome->setWidget(0, QFormLayout::LabelRole, lblHomeStreet);

        lneHomeStreet = new QLineEdit(grbHomeAdress);
        lneHomeStreet->setObjectName(QString::fromUtf8("lneHomeStreet"));

        lotAdressHome->setWidget(0, QFormLayout::FieldRole, lneHomeStreet);

        lblHomeCity = new QLabel(grbHomeAdress);
        lblHomeCity->setObjectName(QString::fromUtf8("lblHomeCity"));
        lblHomeCity->setTextFormat(Qt::PlainText);

        lotAdressHome->setWidget(1, QFormLayout::LabelRole, lblHomeCity);

        lneHomeCity = new QLineEdit(grbHomeAdress);
        lneHomeCity->setObjectName(QString::fromUtf8("lneHomeCity"));

        lotAdressHome->setWidget(1, QFormLayout::FieldRole, lneHomeCity);

        lblHomeState = new QLabel(grbHomeAdress);
        lblHomeState->setObjectName(QString::fromUtf8("lblHomeState"));
        lblHomeState->setTextFormat(Qt::PlainText);

        lotAdressHome->setWidget(2, QFormLayout::LabelRole, lblHomeState);

        lneHomeState = new QLineEdit(grbHomeAdress);
        lneHomeState->setObjectName(QString::fromUtf8("lneHomeState"));

        lotAdressHome->setWidget(2, QFormLayout::FieldRole, lneHomeState);

        lblHomeZip = new QLabel(grbHomeAdress);
        lblHomeZip->setObjectName(QString::fromUtf8("lblHomeZip"));
        lblHomeZip->setTextFormat(Qt::PlainText);

        lotAdressHome->setWidget(3, QFormLayout::LabelRole, lblHomeZip);

        lneHomeZip = new QLineEdit(grbHomeAdress);
        lneHomeZip->setObjectName(QString::fromUtf8("lneHomeZip"));

        lotAdressHome->setWidget(3, QFormLayout::FieldRole, lneHomeZip);

        lblHomeCountry = new QLabel(grbHomeAdress);
        lblHomeCountry->setObjectName(QString::fromUtf8("lblHomeCountry"));
        lblHomeCountry->setTextFormat(Qt::PlainText);

        lotAdressHome->setWidget(4, QFormLayout::LabelRole, lblHomeCountry);

        lneHomeCountry = new QLineEdit(grbHomeAdress);
        lneHomeCountry->setObjectName(QString::fromUtf8("lneHomeCountry"));

        lotAdressHome->setWidget(4, QFormLayout::FieldRole, lneHomeCountry);


        lotAdress->addWidget(grbHomeAdress);

        grbWorkAdress = new QGroupBox(tabAdress);
        grbWorkAdress->setObjectName(QString::fromUtf8("grbWorkAdress"));
        grbWorkAdress->setFlat(true);
        lotAdressWork = new QFormLayout(grbWorkAdress);
        lotAdressWork->setSpacing(6);
        lotAdressWork->setContentsMargins(0, 0, 0, 0);
        lotAdressWork->setObjectName(QString::fromUtf8("lotAdressWork"));
        lblWorkStreet = new QLabel(grbWorkAdress);
        lblWorkStreet->setObjectName(QString::fromUtf8("lblWorkStreet"));
        lblWorkStreet->setTextFormat(Qt::PlainText);

        lotAdressWork->setWidget(0, QFormLayout::LabelRole, lblWorkStreet);

        lneWorkStreet = new QLineEdit(grbWorkAdress);
        lneWorkStreet->setObjectName(QString::fromUtf8("lneWorkStreet"));

        lotAdressWork->setWidget(0, QFormLayout::FieldRole, lneWorkStreet);

        lblWorkCity = new QLabel(grbWorkAdress);
        lblWorkCity->setObjectName(QString::fromUtf8("lblWorkCity"));
        lblWorkCity->setTextFormat(Qt::PlainText);

        lotAdressWork->setWidget(1, QFormLayout::LabelRole, lblWorkCity);

        lneWorkCity = new QLineEdit(grbWorkAdress);
        lneWorkCity->setObjectName(QString::fromUtf8("lneWorkCity"));

        lotAdressWork->setWidget(1, QFormLayout::FieldRole, lneWorkCity);

        lblWorkState = new QLabel(grbWorkAdress);
        lblWorkState->setObjectName(QString::fromUtf8("lblWorkState"));
        lblWorkState->setTextFormat(Qt::PlainText);

        lotAdressWork->setWidget(2, QFormLayout::LabelRole, lblWorkState);

        lneWorkState = new QLineEdit(grbWorkAdress);
        lneWorkState->setObjectName(QString::fromUtf8("lneWorkState"));

        lotAdressWork->setWidget(2, QFormLayout::FieldRole, lneWorkState);

        lblWorkZip = new QLabel(grbWorkAdress);
        lblWorkZip->setObjectName(QString::fromUtf8("lblWorkZip"));
        lblWorkZip->setTextFormat(Qt::PlainText);

        lotAdressWork->setWidget(3, QFormLayout::LabelRole, lblWorkZip);

        lneWorkZip = new QLineEdit(grbWorkAdress);
        lneWorkZip->setObjectName(QString::fromUtf8("lneWorkZip"));

        lotAdressWork->setWidget(3, QFormLayout::FieldRole, lneWorkZip);

        lblWorkCountry = new QLabel(grbWorkAdress);
        lblWorkCountry->setObjectName(QString::fromUtf8("lblWorkCountry"));
        lblWorkCountry->setTextFormat(Qt::PlainText);

        lotAdressWork->setWidget(4, QFormLayout::LabelRole, lblWorkCountry);

        lneWorkCountry = new QLineEdit(grbWorkAdress);
        lneWorkCountry->setObjectName(QString::fromUtf8("lneWorkCountry"));

        lotAdressWork->setWidget(4, QFormLayout::FieldRole, lneWorkCountry);


        lotAdress->addWidget(grbWorkAdress);

        twtVCard->addTab(tabAdress, QString());
        tabContacts = new QWidget();
        tabContacts->setObjectName(QString::fromUtf8("tabContacts"));
        lotContacts = new QHBoxLayout(tabContacts);
        lotContacts->setSpacing(6);
        lotContacts->setContentsMargins(3, 3, 3, 3);
        lotContacts->setObjectName(QString::fromUtf8("lotContacts"));
        grbEmail = new QGroupBox(tabContacts);
        grbEmail->setObjectName(QString::fromUtf8("grbEmail"));
        grbEmail->setFlat(true);
        lotEmail = new QVBoxLayout(grbEmail);
        lotEmail->setSpacing(6);
        lotEmail->setContentsMargins(0, 0, 0, 0);
        lotEmail->setObjectName(QString::fromUtf8("lotEmail"));
        ltwEmails = new QListWidget(grbEmail);
        ltwEmails->setObjectName(QString::fromUtf8("ltwEmails"));

        lotEmail->addWidget(ltwEmails);

        lotEmailButtons = new QHBoxLayout();
        lotEmailButtons->setSpacing(6);
        lotEmailButtons->setObjectName(QString::fromUtf8("lotEmailButtons"));
        tlbEmailAdd = new QToolButton(grbEmail);
        tlbEmailAdd->setObjectName(QString::fromUtf8("tlbEmailAdd"));
        sizePolicy.setHeightForWidth(tlbEmailAdd->sizePolicy().hasHeightForWidth());
        tlbEmailAdd->setSizePolicy(sizePolicy);

        lotEmailButtons->addWidget(tlbEmailAdd);

        tlbEmailDelete = new QToolButton(grbEmail);
        tlbEmailDelete->setObjectName(QString::fromUtf8("tlbEmailDelete"));
        sizePolicy.setHeightForWidth(tlbEmailDelete->sizePolicy().hasHeightForWidth());
        tlbEmailDelete->setSizePolicy(sizePolicy);

        lotEmailButtons->addWidget(tlbEmailDelete);


        lotEmail->addLayout(lotEmailButtons);


        lotContacts->addWidget(grbEmail);

        grbPhone = new QGroupBox(tabContacts);
        grbPhone->setObjectName(QString::fromUtf8("grbPhone"));
        grbPhone->setFlat(true);
        lotPhone = new QVBoxLayout(grbPhone);
        lotPhone->setSpacing(6);
        lotPhone->setContentsMargins(0, 0, 0, 0);
        lotPhone->setObjectName(QString::fromUtf8("lotPhone"));
        ltwPhones = new QListWidget(grbPhone);
        ltwPhones->setObjectName(QString::fromUtf8("ltwPhones"));

        lotPhone->addWidget(ltwPhones);

        lotPhoneButtons = new QHBoxLayout();
        lotPhoneButtons->setSpacing(6);
        lotPhoneButtons->setObjectName(QString::fromUtf8("lotPhoneButtons"));
        tlbPhoneAdd = new QToolButton(grbPhone);
        tlbPhoneAdd->setObjectName(QString::fromUtf8("tlbPhoneAdd"));
        sizePolicy.setHeightForWidth(tlbPhoneAdd->sizePolicy().hasHeightForWidth());
        tlbPhoneAdd->setSizePolicy(sizePolicy);

        lotPhoneButtons->addWidget(tlbPhoneAdd);

        tlbPhoneDelete = new QToolButton(grbPhone);
        tlbPhoneDelete->setObjectName(QString::fromUtf8("tlbPhoneDelete"));
        sizePolicy.setHeightForWidth(tlbPhoneDelete->sizePolicy().hasHeightForWidth());
        tlbPhoneDelete->setSizePolicy(sizePolicy);

        lotPhoneButtons->addWidget(tlbPhoneDelete);


        lotPhone->addLayout(lotPhoneButtons);


        lotContacts->addWidget(grbPhone);

        twtVCard->addTab(tabContacts, QString());
        tabPhoto = new QWidget();
        tabPhoto->setObjectName(QString::fromUtf8("tabPhoto"));
        lotPhoto = new QHBoxLayout(tabPhoto);
        lotPhoto->setSpacing(6);
        lotPhoto->setContentsMargins(3, 3, 3, 3);
        lotPhoto->setObjectName(QString::fromUtf8("lotPhoto"));
        grbPhoto = new QGroupBox(tabPhoto);
        grbPhoto->setObjectName(QString::fromUtf8("grbPhoto"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(grbPhoto->sizePolicy().hasHeightForWidth());
        grbPhoto->setSizePolicy(sizePolicy1);
        grbPhoto->setFlat(true);
        lotPhotoImage = new QVBoxLayout(grbPhoto);
        lotPhotoImage->setSpacing(6);
        lotPhotoImage->setContentsMargins(0, 0, 0, 0);
        lotPhotoImage->setObjectName(QString::fromUtf8("lotPhotoImage"));
        pmfPhoto = new PrixmapFrame(grbPhoto);
        pmfPhoto->setObjectName(QString::fromUtf8("pmfPhoto"));
        sizePolicy1.setHeightForWidth(pmfPhoto->sizePolicy().hasHeightForWidth());
        pmfPhoto->setSizePolicy(sizePolicy1);
        pmfPhoto->setFrameShape(QFrame::Box);

        lotPhotoImage->addWidget(pmfPhoto);

        lblPhotoSize = new QLabel(grbPhoto);
        lblPhotoSize->setObjectName(QString::fromUtf8("lblPhotoSize"));
        lblPhotoSize->setText(QString::fromUtf8("Size: 100KB"));
        lblPhotoSize->setAlignment(Qt::AlignCenter);

        lotPhotoImage->addWidget(lblPhotoSize);

        lotPhotoButtons = new QHBoxLayout();
        lotPhotoButtons->setSpacing(6);
        lotPhotoButtons->setObjectName(QString::fromUtf8("lotPhotoButtons"));
        tlbPhotoSave = new QToolButton(grbPhoto);
        tlbPhotoSave->setObjectName(QString::fromUtf8("tlbPhotoSave"));
        sizePolicy.setHeightForWidth(tlbPhotoSave->sizePolicy().hasHeightForWidth());
        tlbPhotoSave->setSizePolicy(sizePolicy);

        lotPhotoButtons->addWidget(tlbPhotoSave);

        tlbPhotoLoad = new QToolButton(grbPhoto);
        tlbPhotoLoad->setObjectName(QString::fromUtf8("tlbPhotoLoad"));
        sizePolicy.setHeightForWidth(tlbPhotoLoad->sizePolicy().hasHeightForWidth());
        tlbPhotoLoad->setSizePolicy(sizePolicy);

        lotPhotoButtons->addWidget(tlbPhotoLoad);

        tlbPhotoClear = new QToolButton(grbPhoto);
        tlbPhotoClear->setObjectName(QString::fromUtf8("tlbPhotoClear"));
        sizePolicy.setHeightForWidth(tlbPhotoClear->sizePolicy().hasHeightForWidth());
        tlbPhotoClear->setSizePolicy(sizePolicy);

        lotPhotoButtons->addWidget(tlbPhotoClear);


        lotPhotoImage->addLayout(lotPhotoButtons);


        lotPhoto->addWidget(grbPhoto);

        grbLogo = new QGroupBox(tabPhoto);
        grbLogo->setObjectName(QString::fromUtf8("grbLogo"));
        sizePolicy1.setHeightForWidth(grbLogo->sizePolicy().hasHeightForWidth());
        grbLogo->setSizePolicy(sizePolicy1);
        grbLogo->setFlat(true);
        lotLogoImage = new QVBoxLayout(grbLogo);
        lotLogoImage->setSpacing(6);
        lotLogoImage->setContentsMargins(0, 0, 0, 0);
        lotLogoImage->setObjectName(QString::fromUtf8("lotLogoImage"));
        pmfLogo = new PrixmapFrame(grbLogo);
        pmfLogo->setObjectName(QString::fromUtf8("pmfLogo"));
        sizePolicy1.setHeightForWidth(pmfLogo->sizePolicy().hasHeightForWidth());
        pmfLogo->setSizePolicy(sizePolicy1);
        pmfLogo->setFrameShape(QFrame::Box);

        lotLogoImage->addWidget(pmfLogo);

        lblLogoSize = new QLabel(grbLogo);
        lblLogoSize->setObjectName(QString::fromUtf8("lblLogoSize"));
        lblLogoSize->setText(QString::fromUtf8("Size: 100KB"));
        lblLogoSize->setAlignment(Qt::AlignCenter);

        lotLogoImage->addWidget(lblLogoSize);

        lotLogoButtons = new QHBoxLayout();
        lotLogoButtons->setSpacing(6);
        lotLogoButtons->setObjectName(QString::fromUtf8("lotLogoButtons"));
        tlbLogoSave = new QToolButton(grbLogo);
        tlbLogoSave->setObjectName(QString::fromUtf8("tlbLogoSave"));
        sizePolicy.setHeightForWidth(tlbLogoSave->sizePolicy().hasHeightForWidth());
        tlbLogoSave->setSizePolicy(sizePolicy);

        lotLogoButtons->addWidget(tlbLogoSave);

        tlbLogoLoad = new QToolButton(grbLogo);
        tlbLogoLoad->setObjectName(QString::fromUtf8("tlbLogoLoad"));
        sizePolicy.setHeightForWidth(tlbLogoLoad->sizePolicy().hasHeightForWidth());
        tlbLogoLoad->setSizePolicy(sizePolicy);

        lotLogoButtons->addWidget(tlbLogoLoad);

        tlbLogoClear = new QToolButton(grbLogo);
        tlbLogoClear->setObjectName(QString::fromUtf8("tlbLogoClear"));
        sizePolicy.setHeightForWidth(tlbLogoClear->sizePolicy().hasHeightForWidth());
        tlbLogoClear->setSizePolicy(sizePolicy);

        lotLogoButtons->addWidget(tlbLogoClear);


        lotLogoImage->addLayout(lotLogoButtons);


        lotPhoto->addWidget(grbLogo);

        twtVCard->addTab(tabPhoto, QString());
        tabComments = new QWidget();
        tabComments->setObjectName(QString::fromUtf8("tabComments"));
        lotComments = new QVBoxLayout(tabComments);
        lotComments->setSpacing(6);
        lotComments->setContentsMargins(3, 3, 3, 3);
        lotComments->setObjectName(QString::fromUtf8("lotComments"));
        tedComments = new QTextEdit(tabComments);
        tedComments->setObjectName(QString::fromUtf8("tedComments"));

        lotComments->addWidget(tedComments);

        twtVCard->addTab(tabComments, QString());

        verticalLayout->addWidget(twtVCard);

        line = new QFrame(VCardDialogClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        btbButtons = new QDialogButtonBox(VCardDialogClass);
        btbButtons->setObjectName(QString::fromUtf8("btbButtons"));

        verticalLayout->addWidget(btbButtons);

#ifndef QT_NO_SHORTCUT
        lblFullName->setBuddy(lneFullName);
        lblFirstName->setBuddy(lneFirstName);
        lblMiddleName->setBuddy(lneMiddleName);
        lblLastName->setBuddy(lneLastName);
        lblNickName->setBuddy(lneNickName);
        lblJabberId->setBuddy(lneJabberId);
        lblBirthday->setBuddy(dedBirthday);
        lblGender->setBuddy(cmbGender);
        lblMarital->setBuddy(lneMarital);
        lblOcuupation->setBuddy(lneTitle);
        lblCompany->setBuddy(lneCompany);
        lblDepartment->setBuddy(lneDepartment);
        lblRole->setBuddy(lneRole);
        lblHomePage->setBuddy(lneHomePage);
        lblHomeStreet->setBuddy(lneHomeStreet);
        lblHomeCity->setBuddy(lneHomeCity);
        lblHomeState->setBuddy(lneHomeState);
        lblHomeZip->setBuddy(lneHomeZip);
        lblHomeCountry->setBuddy(lneHomeCountry);
        lblWorkStreet->setBuddy(lneWorkStreet);
        lblWorkCity->setBuddy(lneWorkCity);
        lblWorkState->setBuddy(lneWorkState);
        lblWorkZip->setBuddy(lneWorkZip);
        lblWorkCountry->setBuddy(lneWorkCountry);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(twtVCard, lneFullName);
        QWidget::setTabOrder(lneFullName, lneFirstName);
        QWidget::setTabOrder(lneFirstName, lneMiddleName);
        QWidget::setTabOrder(lneMiddleName, lneLastName);
        QWidget::setTabOrder(lneLastName, lneNickName);
        QWidget::setTabOrder(lneNickName, lneJabberId);
        QWidget::setTabOrder(lneJabberId, dedBirthday);
        QWidget::setTabOrder(dedBirthday, cmbGender);
        QWidget::setTabOrder(cmbGender, lneMarital);
        QWidget::setTabOrder(lneMarital, lneTitle);
        QWidget::setTabOrder(lneTitle, lneCompany);
        QWidget::setTabOrder(lneCompany, lneDepartment);
        QWidget::setTabOrder(lneDepartment, lneRole);
        QWidget::setTabOrder(lneRole, lneHomePage);
        QWidget::setTabOrder(lneHomePage, lneHomeStreet);
        QWidget::setTabOrder(lneHomeStreet, lneHomeCity);
        QWidget::setTabOrder(lneHomeCity, lneHomeState);
        QWidget::setTabOrder(lneHomeState, lneHomeZip);
        QWidget::setTabOrder(lneHomeZip, lneHomeCountry);
        QWidget::setTabOrder(lneHomeCountry, lneWorkStreet);
        QWidget::setTabOrder(lneWorkStreet, lneWorkCity);
        QWidget::setTabOrder(lneWorkCity, lneWorkState);
        QWidget::setTabOrder(lneWorkState, lneWorkZip);
        QWidget::setTabOrder(lneWorkZip, lneWorkCountry);
        QWidget::setTabOrder(lneWorkCountry, ltwEmails);
        QWidget::setTabOrder(ltwEmails, ltwPhones);
        QWidget::setTabOrder(ltwPhones, tlbEmailAdd);
        QWidget::setTabOrder(tlbEmailAdd, tlbEmailDelete);
        QWidget::setTabOrder(tlbEmailDelete, tlbPhoneAdd);
        QWidget::setTabOrder(tlbPhoneAdd, tlbPhoneDelete);
        QWidget::setTabOrder(tlbPhoneDelete, tlbPhotoSave);
        QWidget::setTabOrder(tlbPhotoSave, tlbPhotoLoad);
        QWidget::setTabOrder(tlbPhotoLoad, tlbPhotoClear);
        QWidget::setTabOrder(tlbPhotoClear, tlbLogoSave);
        QWidget::setTabOrder(tlbLogoSave, tlbLogoLoad);
        QWidget::setTabOrder(tlbLogoLoad, tlbLogoClear);
        QWidget::setTabOrder(tlbLogoClear, tedComments);
        QWidget::setTabOrder(tedComments, btbButtons);

        retranslateUi(VCardDialogClass);

        twtVCard->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VCardDialogClass);
    } // setupUi

    void retranslateUi(QDialog *VCardDialogClass)
    {
        lblFullName->setText(QApplication::translate("VCardDialogClass", "Full name", 0, QApplication::UnicodeUTF8));
        lblFirstName->setText(QApplication::translate("VCardDialogClass", "First name", 0, QApplication::UnicodeUTF8));
        lblMiddleName->setText(QApplication::translate("VCardDialogClass", "Middle name", 0, QApplication::UnicodeUTF8));
        lblLastName->setText(QApplication::translate("VCardDialogClass", "Last name", 0, QApplication::UnicodeUTF8));
        lblNickName->setText(QApplication::translate("VCardDialogClass", "Nick name", 0, QApplication::UnicodeUTF8));
        lblJabberId->setText(QApplication::translate("VCardDialogClass", "Jabber Id", 0, QApplication::UnicodeUTF8));
        twtVCard->setTabText(twtVCard->indexOf(tabGeneral), QApplication::translate("VCardDialogClass", "General", 0, QApplication::UnicodeUTF8));
        lblBirthday->setText(QApplication::translate("VCardDialogClass", "Birthday", 0, QApplication::UnicodeUTF8));
        dedBirthday->setDisplayFormat(QApplication::translate("VCardDialogClass", "dd.MMMM.yyyy", 0, QApplication::UnicodeUTF8));
        lblGender->setText(QApplication::translate("VCardDialogClass", "Gender", 0, QApplication::UnicodeUTF8));
        lblMarital->setText(QApplication::translate("VCardDialogClass", "Marital status", 0, QApplication::UnicodeUTF8));
        lblOcuupation->setText(QApplication::translate("VCardDialogClass", "Occupation", 0, QApplication::UnicodeUTF8));
        lblCompany->setText(QApplication::translate("VCardDialogClass", "Company", 0, QApplication::UnicodeUTF8));
        lblDepartment->setText(QApplication::translate("VCardDialogClass", "Department", 0, QApplication::UnicodeUTF8));
        lblRole->setText(QApplication::translate("VCardDialogClass", "Role", 0, QApplication::UnicodeUTF8));
        lblHomePage->setText(QApplication::translate("VCardDialogClass", "Home page", 0, QApplication::UnicodeUTF8));
        twtVCard->setTabText(twtVCard->indexOf(tabPersonal), QApplication::translate("VCardDialogClass", "Personal", 0, QApplication::UnicodeUTF8));
        grbHomeAdress->setTitle(QApplication::translate("VCardDialogClass", "Home", 0, QApplication::UnicodeUTF8));
        lblHomeStreet->setText(QApplication::translate("VCardDialogClass", "Street", 0, QApplication::UnicodeUTF8));
        lblHomeCity->setText(QApplication::translate("VCardDialogClass", "City", 0, QApplication::UnicodeUTF8));
        lblHomeState->setText(QApplication::translate("VCardDialogClass", "State", 0, QApplication::UnicodeUTF8));
        lblHomeZip->setText(QApplication::translate("VCardDialogClass", "Zip code", 0, QApplication::UnicodeUTF8));
        lblHomeCountry->setText(QApplication::translate("VCardDialogClass", "Country", 0, QApplication::UnicodeUTF8));
        grbWorkAdress->setTitle(QApplication::translate("VCardDialogClass", "Work", 0, QApplication::UnicodeUTF8));
        lblWorkStreet->setText(QApplication::translate("VCardDialogClass", "Street", 0, QApplication::UnicodeUTF8));
        lblWorkCity->setText(QApplication::translate("VCardDialogClass", "City", 0, QApplication::UnicodeUTF8));
        lblWorkState->setText(QApplication::translate("VCardDialogClass", "State", 0, QApplication::UnicodeUTF8));
        lblWorkZip->setText(QApplication::translate("VCardDialogClass", "Zip code", 0, QApplication::UnicodeUTF8));
        lblWorkCountry->setText(QApplication::translate("VCardDialogClass", "Country", 0, QApplication::UnicodeUTF8));
        twtVCard->setTabText(twtVCard->indexOf(tabAdress), QApplication::translate("VCardDialogClass", "Address", 0, QApplication::UnicodeUTF8));
        grbEmail->setTitle(QApplication::translate("VCardDialogClass", "E-Mail", 0, QApplication::UnicodeUTF8));
        tlbEmailAdd->setText(QApplication::translate("VCardDialogClass", "Add", 0, QApplication::UnicodeUTF8));
        tlbEmailDelete->setText(QApplication::translate("VCardDialogClass", "Delete", 0, QApplication::UnicodeUTF8));
        grbPhone->setTitle(QApplication::translate("VCardDialogClass", "Phone", 0, QApplication::UnicodeUTF8));
        tlbPhoneAdd->setText(QApplication::translate("VCardDialogClass", "Add", 0, QApplication::UnicodeUTF8));
        tlbPhoneDelete->setText(QApplication::translate("VCardDialogClass", "Delete", 0, QApplication::UnicodeUTF8));
        twtVCard->setTabText(twtVCard->indexOf(tabContacts), QApplication::translate("VCardDialogClass", "Contacts", 0, QApplication::UnicodeUTF8));
        grbPhoto->setTitle(QApplication::translate("VCardDialogClass", "Photo", 0, QApplication::UnicodeUTF8));
        tlbPhotoSave->setText(QApplication::translate("VCardDialogClass", "Save", 0, QApplication::UnicodeUTF8));
        tlbPhotoLoad->setText(QApplication::translate("VCardDialogClass", "Load", 0, QApplication::UnicodeUTF8));
        tlbPhotoClear->setText(QApplication::translate("VCardDialogClass", "Clear", 0, QApplication::UnicodeUTF8));
        grbLogo->setTitle(QApplication::translate("VCardDialogClass", "Logo", 0, QApplication::UnicodeUTF8));
        tlbLogoSave->setText(QApplication::translate("VCardDialogClass", "Save", 0, QApplication::UnicodeUTF8));
        tlbLogoLoad->setText(QApplication::translate("VCardDialogClass", "Load", 0, QApplication::UnicodeUTF8));
        tlbLogoClear->setText(QApplication::translate("VCardDialogClass", "Clear", 0, QApplication::UnicodeUTF8));
        twtVCard->setTabText(twtVCard->indexOf(tabPhoto), QApplication::translate("VCardDialogClass", "Photo", 0, QApplication::UnicodeUTF8));
        twtVCard->setTabText(twtVCard->indexOf(tabComments), QApplication::translate("VCardDialogClass", "Comments", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(VCardDialogClass);
    } // retranslateUi

};

namespace Ui {
    class VCardDialogClass: public Ui_VCardDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VCARDDIALOG_H
