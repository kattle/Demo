/********************************************************************************
** Form generated from reading UI file 'imessagebox.ui'
**
** Created: Mon Jul 25 15:18:01 2016
**      by: Qt User Interface Compiler version 4.8.2
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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_iMessageBox
{
public:
    QWidget *widget_title;
    QWidget *widMenu;
    QPushButton *btn_wid;
    QLabel *lab_ico;
    QLabel *lab_title;
    QWidget *widget_main;
    QLabel *lab_mainIco;
    QLabel *lab_mainText;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QDialog *iMessageBox)
    {
        if (iMessageBox->objectName().isEmpty())
            iMessageBox->setObjectName(QString::fromUtf8("iMessageBox"));
        iMessageBox->resize(308, 194);
        widget_title = new QWidget(iMessageBox);
        widget_title->setObjectName(QString::fromUtf8("widget_title"));
        widget_title->setGeometry(QRect(0, 1, 311, 41));
        widMenu = new QWidget(widget_title);
        widMenu->setObjectName(QString::fromUtf8("widMenu"));
        widMenu->setGeometry(QRect(270, 0, 41, 41));
        btn_wid = new QPushButton(widMenu);
        btn_wid->setObjectName(QString::fromUtf8("btn_wid"));
        btn_wid->setGeometry(QRect(0, 0, 41, 41));
        lab_ico = new QLabel(widget_title);
        lab_ico->setObjectName(QString::fromUtf8("lab_ico"));
        lab_ico->setGeometry(QRect(0, 0, 41, 41));
        lab_title = new QLabel(widget_title);
        lab_title->setObjectName(QString::fromUtf8("lab_title"));
        lab_title->setGeometry(QRect(43, 1, 171, 41));
        widget_main = new QWidget(iMessageBox);
        widget_main->setObjectName(QString::fromUtf8("widget_main"));
        widget_main->setGeometry(QRect(0, 40, 311, 161));
        lab_mainIco = new QLabel(widget_main);
        lab_mainIco->setObjectName(QString::fromUtf8("lab_mainIco"));
        lab_mainIco->setGeometry(QRect(20, 30, 54, 51));
        lab_mainText = new QLabel(widget_main);
        lab_mainText->setObjectName(QString::fromUtf8("lab_mainText"));
        lab_mainText->setGeometry(QRect(110, 50, 181, 31));
        btn_ok = new QPushButton(widget_main);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(140, 120, 75, 31));
        btn_cancel = new QPushButton(widget_main);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(224, 120, 81, 31));

        retranslateUi(iMessageBox);

        QMetaObject::connectSlotsByName(iMessageBox);
    } // setupUi

    void retranslateUi(QDialog *iMessageBox)
    {
        iMessageBox->setWindowTitle(QApplication::translate("iMessageBox", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_wid->setText(QString());
        lab_ico->setText(QString());
        lab_title->setText(QString());
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
