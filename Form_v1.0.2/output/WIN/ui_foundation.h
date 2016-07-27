/********************************************************************************
** Form generated from reading UI file 'foundation.ui'
**
** Created: Wed Jul 27 07:28:01 2016
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOUNDATION_H
#define UI_FOUNDATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Foundation
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_login;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widLogin;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_login;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_userName;
    QLineEdit *lineEdit_usrName;
    QLineEdit *lineEdit_passwd;
    QLabel *label_passwd;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QWidget *page_main;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Foundation)
    {
        if (Foundation->objectName().isEmpty())
            Foundation->setObjectName(QString::fromUtf8("Foundation"));
        Foundation->resize(516, 408);
        Foundation->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        centralWidget = new QWidget(Foundation);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_login = new QWidget();
        page_login->setObjectName(QString::fromUtf8("page_login"));
        gridLayout_3 = new QGridLayout(page_login);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 103, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        widLogin = new QWidget(page_login);
        widLogin->setObjectName(QString::fromUtf8("widLogin"));
        gridLayout_2 = new QGridLayout(widLogin);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btn_login = new QPushButton(widLogin);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));

        horizontalLayout_3->addWidget(btn_login);

        btn_cancel = new QPushButton(widLogin);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));

        horizontalLayout_3->addWidget(btn_cancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        label_userName = new QLabel(widLogin);
        label_userName->setObjectName(QString::fromUtf8("label_userName"));

        gridLayout_2->addWidget(label_userName, 0, 0, 1, 1);

        lineEdit_usrName = new QLineEdit(widLogin);
        lineEdit_usrName->setObjectName(QString::fromUtf8("lineEdit_usrName"));

        gridLayout_2->addWidget(lineEdit_usrName, 0, 1, 1, 1);

        lineEdit_passwd = new QLineEdit(widLogin);
        lineEdit_passwd->setObjectName(QString::fromUtf8("lineEdit_passwd"));

        gridLayout_2->addWidget(lineEdit_passwd, 1, 1, 1, 1);

        label_passwd = new QLabel(widLogin);
        label_passwd->setObjectName(QString::fromUtf8("label_passwd"));

        gridLayout_2->addWidget(label_passwd, 1, 0, 1, 1);


        gridLayout_3->addWidget(widLogin, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 103, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 1, 1, 1);

        stackedWidget->addWidget(page_login);
        page_main = new QWidget();
        page_main->setObjectName(QString::fromUtf8("page_main"));
        stackedWidget->addWidget(page_main);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        Foundation->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Foundation);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 516, 26));
        Foundation->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Foundation);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Foundation->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Foundation);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Foundation->setStatusBar(statusBar);

        retranslateUi(Foundation);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Foundation);
    } // setupUi

    void retranslateUi(QMainWindow *Foundation)
    {
        Foundation->setWindowTitle(QApplication::translate("Foundation", "Foundation", 0, QApplication::UnicodeUTF8));
        btn_login->setText(QApplication::translate("Foundation", "login", 0, QApplication::UnicodeUTF8));
        btn_cancel->setText(QApplication::translate("Foundation", "cancel", 0, QApplication::UnicodeUTF8));
        label_userName->setText(QApplication::translate("Foundation", "User Name:", 0, QApplication::UnicodeUTF8));
        label_passwd->setText(QApplication::translate("Foundation", "Passwd:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Foundation: public Ui_Foundation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOUNDATION_H
