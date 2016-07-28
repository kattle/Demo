#ifndef FOUNDATION_H
#define FOUNDATION_H

#include <QMainWindow>
#include "imessagebox.h"
#include "ithemeHelper.h"

namespace Ui {
class Foundation;
}

class Foundation : public QMainWindow
{
    Q_OBJECT
    

public:
    explicit Foundation(QWidget *parent = 0);
    ~Foundation();
    QString m_RcPath;

public:
    bool enterIntoSystem();
    void setRcPath(QString pRcPath);
    void initUI(QString pRcPath = QString());

public slots:
    void slot_setStackwidget(int page);


private slots:
    void on_btn_login_clicked();

private:
    Ui::Foundation *ui;
    QString defaultUsr;
    QString defaultPasswd;
};

#endif // FOUNDATION_H
