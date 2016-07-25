#ifndef ITHEMEHELPER_H
#define ITHEMEHELPER_H

#include <QtCore>
#include <QtGui>
#include <QDesktopWidget>
#include <QTextCodec>
#include <QString>
#include <QApplication>
#include <QMainWindow>




class ithemeHelper : public QObject
{
    Q_OBJECT
public:
    explicit ithemeHelper(QObject *parent = 0);
    ~ithemeHelper();

    /*! 开机启动设置*/
    void autoRunWithSystem(bool isAutoRun, QString appName, QString appPath);
    /*! 设置编码格式*/
    static void setUTF8Code();
    /*! 设置皮肤样式*/
    static void setThemeStyle(const QString &themeName);
    /*! 判断是否为IP地址*/
    static bool isIP(QString ip);
    /*! 设置窗体居中显示*/
    static void formInCenter(QWidget*frm);



signals:

public slots:
};

#endif // IthemeHelper_H
