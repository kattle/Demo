/********************************************************************************
** Form generated from reading UI file 'imessagebox.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMESSAGEBOX_H
#define UI_IMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

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
    QLabel *lab_mainIco;
    QLabel *lab_mainText;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QDialog *iMessageBox)
    {
        if (iMessageBox->objectName().isEmpty())
            iMessageBox->setObjectName(QStringLiteral("iMessageBox"));
        iMessageBox->resize(308, 194);
        widget_title = new QWidget(iMessageBox);
        widget_title->setObjectName(QStringLiteral("widget_title"));
        widget_title->setGeometry(QRect(0, 1, 311, 41));
        widMenu = new QWidget(widget_title);
        widMenu->setObjectName(QStringLiteral("widMenu"));
        widMenu->setGeometry(QRect(270, 0, 41, 41));
        btn_menuClose = new QPushButton(widMenu);
        btn_menuClose->setObjectName(QStringLiteral("btn_menuClose"));
        btn_menuClose->setGeometry(QRect(0, 0, 41, 41));
        lab_ico = new QLabel(widget_title);
        lab_ico->setObjectName(QStringLiteral("lab_ico"));
        lab_ico->setGeometry(QRect(0, 0, 41, 41));
        lab_title = new QLabel(widget_title);
        lab_title->setObjectName(QStringLiteral("lab_title"));
        lab_title->setGeometry(QRect(43, 1, 171, 41));
        widget_main = new QWidget(iMessageBox);
        widget_main->setObjectName(QStringLiteral("widget_main"));
        widget_main->setGeometry(QRect(0, 40, 311, 161));
        widget_main->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lab_mainIco = new QLabel(widget_main);
        lab_mainIco->setObjectName(QStringLiteral("lab_mainIco"));
        lab_mainIco->setGeometry(QRect(20, 30, 54, 51));
        lab_mainText = new QLabel(widget_main);
        lab_mainText->setObjectName(QStringLiteral("lab_mainText"));
        lab_mainText->setGeometry(QRect(100, 50, 191, 31));
        btn_ok = new QPushButton(widget_main);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        btn_ok->setGeometry(QRect(140, 100, 75, 31));
        btn_cancel = new QPushButton(widget_main);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setGeometry(QRect(224, 100, 81, 31));

        retranslateUi(iMessageBox);

        QMetaObject::connectSlotsByName(iMessageBox);
    } // setupUi

    void retranslateUi(QDialog *iMessageBox)
    {
        iMessageBox->setWindowTitle(QApplication::translate("iMessageBox", "Dialog", 0));
        btn_menuClose->setText(QString());
        lab_ico->setText(QString());
        lab_title->setText(QString());
        lab_mainIco->setText(QString());
        lab_mainText->setText(QString());
        btn_ok->setText(QApplication::translate("iMessageBox", "OK", 0));
        btn_cancel->setText(QApplication::translate("iMessageBox", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class iMessageBox: public Ui_iMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMESSAGEBOX_H
