/********************************************************************************
** Form generated from reading UI file 'imessagebox.ui'
**
** Created: Wed Jul 27 18:39:19 2016
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMESSAGEBOX_H
#define UI_IMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_iMessageBox
{
public:
    QWidget *widget_title;
    QWidget *widMenu;
    QPushButton *btn_menuClose;
    QLabel *lab_ico;
    QLabel *lab_title;
    QWidget *widget_main;
    QGroupBox *groupBox;
    QLabel *lab_mainIco;
    QLabel *lab_mainText;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QDialog *iMessageBox)
    {
        if (iMessageBox->objectName().isEmpty())
            iMessageBox->setObjectName(QString::fromUtf8("iMessageBox"));
        iMessageBox->resize(300, 190);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(iMessageBox->sizePolicy().hasHeightForWidth());
        iMessageBox->setSizePolicy(sizePolicy);
        iMessageBox->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        widget_title = new QWidget(iMessageBox);
        widget_title->setObjectName(QString::fromUtf8("widget_title"));
        widget_title->setGeometry(QRect(0, 0, 300, 35));
        widMenu = new QWidget(widget_title);
        widMenu->setObjectName(QString::fromUtf8("widMenu"));
        widMenu->setGeometry(QRect(220, 0, 80, 35));
        btn_menuClose = new QPushButton(widMenu);
        btn_menuClose->setObjectName(QString::fromUtf8("btn_menuClose"));
        btn_menuClose->setGeometry(QRect(40, 0, 35, 35));
        sizePolicy.setHeightForWidth(btn_menuClose->sizePolicy().hasHeightForWidth());
        btn_menuClose->setSizePolicy(sizePolicy);
        lab_ico = new QLabel(widget_title);
        lab_ico->setObjectName(QString::fromUtf8("lab_ico"));
        lab_ico->setGeometry(QRect(0, 0, 35, 35));
        lab_title = new QLabel(widget_title);
        lab_title->setObjectName(QString::fromUtf8("lab_title"));
        lab_title->setGeometry(QRect(40, 0, 150, 35));
        widget_main = new QWidget(iMessageBox);
        widget_main->setObjectName(QString::fromUtf8("widget_main"));
        widget_main->setGeometry(QRect(0, 35, 300, 165));
        widget_main->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        groupBox = new QGroupBox(widget_main);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 298, 151));
        lab_mainIco = new QLabel(groupBox);
        lab_mainIco->setObjectName(QString::fromUtf8("lab_mainIco"));
        lab_mainIco->setGeometry(QRect(20, 30, 54, 51));
        lab_mainText = new QLabel(groupBox);
        lab_mainText->setObjectName(QString::fromUtf8("lab_mainText"));
        lab_mainText->setGeometry(QRect(90, 50, 191, 31));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 100, 291, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_ok = new QPushButton(horizontalLayoutWidget);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));

        horizontalLayout->addWidget(btn_ok);

        btn_cancel = new QPushButton(horizontalLayoutWidget);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));

        horizontalLayout->addWidget(btn_cancel);


        retranslateUi(iMessageBox);

        QMetaObject::connectSlotsByName(iMessageBox);
    } // setupUi

    void retranslateUi(QDialog *iMessageBox)
    {
        iMessageBox->setWindowTitle(QApplication::translate("iMessageBox", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_menuClose->setText(QString());
        lab_ico->setText(QString());
        lab_title->setText(QString());
        groupBox->setTitle(QString());
        lab_mainIco->setText(QString());
        lab_mainText->setText(QString());
        btn_ok->setText(QApplication::translate("iMessageBox", "OK", 0, QApplication::UnicodeUTF8));
        btn_cancel->setText(QApplication::translate("iMessageBox", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class iMessageBox: public Ui_iMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMESSAGEBOX_H
