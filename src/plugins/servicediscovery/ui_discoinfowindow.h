/********************************************************************************
** Form generated from reading UI file 'discoinfowindow.ui'
**
** Created: Sat Jan 26 02:17:17 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISCOINFOWINDOW_H
#define UI_DISCOINFOWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DiscoInfoWindowClass
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *lblError;
    QLabel *lblIdentity;
    QTableWidget *twtIdentity;
    QLabel *lblFeatures;
    QListWidget *lwtFearures;
    QLabel *lblDescription;
    QLabel *lblFeatureDesc;
    QFrame *line;
    QHBoxLayout *hboxLayout;
    QPushButton *pbtExtensions;
    QSpacerItem *spacerItem;
    QPushButton *pbtUpdate;

    void setupUi(QDialog *DiscoInfoWindowClass)
    {
        if (DiscoInfoWindowClass->objectName().isEmpty())
            DiscoInfoWindowClass->setObjectName(QString::fromUtf8("DiscoInfoWindowClass"));
        DiscoInfoWindowClass->resize(392, 425);
        vboxLayout = new QVBoxLayout(DiscoInfoWindowClass);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(3, 3, 3, 3);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        lblError = new QLabel(DiscoInfoWindowClass);
        lblError->setObjectName(QString::fromUtf8("lblError"));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setUnderline(true);
        font.setWeight(50);
        lblError->setFont(font);
        lblError->setFrameShape(QFrame::Box);
        lblError->setFrameShadow(QFrame::Sunken);
        lblError->setTextFormat(Qt::PlainText);
        lblError->setAlignment(Qt::AlignCenter);
        lblError->setWordWrap(true);

        vboxLayout->addWidget(lblError);

        lblIdentity = new QLabel(DiscoInfoWindowClass);
        lblIdentity->setObjectName(QString::fromUtf8("lblIdentity"));
        lblIdentity->setTextFormat(Qt::PlainText);

        vboxLayout->addWidget(lblIdentity);

        twtIdentity = new QTableWidget(DiscoInfoWindowClass);
        if (twtIdentity->columnCount() < 3)
            twtIdentity->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twtIdentity->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twtIdentity->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twtIdentity->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        twtIdentity->setObjectName(QString::fromUtf8("twtIdentity"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(twtIdentity->sizePolicy().hasHeightForWidth());
        twtIdentity->setSizePolicy(sizePolicy);
        twtIdentity->setMaximumSize(QSize(16777215, 100));
        twtIdentity->setEditTriggers(QAbstractItemView::NoEditTriggers);
        twtIdentity->setSelectionMode(QAbstractItemView::NoSelection);
        twtIdentity->setSelectionBehavior(QAbstractItemView::SelectRows);
        twtIdentity->verticalHeader()->setVisible(false);

        vboxLayout->addWidget(twtIdentity);

        lblFeatures = new QLabel(DiscoInfoWindowClass);
        lblFeatures->setObjectName(QString::fromUtf8("lblFeatures"));
        lblFeatures->setTextFormat(Qt::PlainText);

        vboxLayout->addWidget(lblFeatures);

        lwtFearures = new QListWidget(DiscoInfoWindowClass);
        lwtFearures->setObjectName(QString::fromUtf8("lwtFearures"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lwtFearures->sizePolicy().hasHeightForWidth());
        lwtFearures->setSizePolicy(sizePolicy1);
        lwtFearures->setSelectionMode(QAbstractItemView::SingleSelection);
        lwtFearures->setSelectionBehavior(QAbstractItemView::SelectRows);

        vboxLayout->addWidget(lwtFearures);

        lblDescription = new QLabel(DiscoInfoWindowClass);
        lblDescription->setObjectName(QString::fromUtf8("lblDescription"));
        lblDescription->setTextFormat(Qt::PlainText);

        vboxLayout->addWidget(lblDescription);

        lblFeatureDesc = new QLabel(DiscoInfoWindowClass);
        lblFeatureDesc->setObjectName(QString::fromUtf8("lblFeatureDesc"));
        lblFeatureDesc->setTextFormat(Qt::PlainText);
        lblFeatureDesc->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblFeatureDesc->setWordWrap(true);

        vboxLayout->addWidget(lblFeatureDesc);

        line = new QFrame(DiscoInfoWindowClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        pbtExtensions = new QPushButton(DiscoInfoWindowClass);
        pbtExtensions->setObjectName(QString::fromUtf8("pbtExtensions"));

        hboxLayout->addWidget(pbtExtensions);

        spacerItem = new QSpacerItem(91, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        pbtUpdate = new QPushButton(DiscoInfoWindowClass);
        pbtUpdate->setObjectName(QString::fromUtf8("pbtUpdate"));

        hboxLayout->addWidget(pbtUpdate);


        vboxLayout->addLayout(hboxLayout);

#ifndef QT_NO_SHORTCUT
        lblIdentity->setBuddy(twtIdentity);
        lblFeatures->setBuddy(lwtFearures);
#endif // QT_NO_SHORTCUT

        retranslateUi(DiscoInfoWindowClass);

        QMetaObject::connectSlotsByName(DiscoInfoWindowClass);
    } // setupUi

    void retranslateUi(QDialog *DiscoInfoWindowClass)
    {
        lblError->setText(QString());
        lblIdentity->setText(QApplication::translate("DiscoInfoWindowClass", "Identities:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = twtIdentity->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DiscoInfoWindowClass", "Category", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = twtIdentity->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DiscoInfoWindowClass", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = twtIdentity->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DiscoInfoWindowClass", "Name", 0, QApplication::UnicodeUTF8));
        lblFeatures->setText(QApplication::translate("DiscoInfoWindowClass", "Features:", 0, QApplication::UnicodeUTF8));
        lblDescription->setText(QApplication::translate("DiscoInfoWindowClass", "Description:", 0, QApplication::UnicodeUTF8));
        pbtExtensions->setText(QApplication::translate("DiscoInfoWindowClass", "Extensions", 0, QApplication::UnicodeUTF8));
        pbtUpdate->setText(QApplication::translate("DiscoInfoWindowClass", "Update", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(DiscoInfoWindowClass);
    } // retranslateUi

};

namespace Ui {
    class DiscoInfoWindowClass: public Ui_DiscoInfoWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISCOINFOWINDOW_H
