#include "foundation.h"
#include "ui_foundation.h"

Foundation::Foundation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Foundation)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ithemeHelper::formInCenter(ui->widLogin);
    ui->lineEdit_passwd->setEchoMode(QLineEdit::Password);
    defaultUsr = "bst";
    ui->lineEdit_usrName->setText(defaultUsr);


}

Foundation::~Foundation()
{
    delete ui;
}

bool Foundation::enterIntoSystem()
{
    QString usrStr = tr("bst");
    QString usrPasswd = tr("123456");
    if(ui->lineEdit_usrName->text() == usrStr)
    {
        if(ui->lineEdit_passwd->text()== usrPasswd)
        {
            return true;
        }
        else
            return false;
    }
    else
        return false;

}

void Foundation::setRcPath(QString pRcPath)
{
    m_RcPath =  pRcPath;
}

void Foundation::initUI(QString pRcPath)
{
    setRcPath(pRcPath);
    if(!pRcPath.isEmpty())
    {

    }
}




void Foundation::on_btn_login_clicked()
{


    if(enterIntoSystem())
    {
        ithemeHelper::showMessageBoxInfo("登录成功");
        //ui->stackedWidget->setCurrentIndex(1);
    }

}


