#include "foundation.h"
#include "ui_foundation.h"

Foundation::Foundation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Foundation)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ithemeHelper::formInCenter(ui->widLogin);

    defaultUsr = "bst";
    defaultPasswd = "123456";
    ui->lineEdit_usrName->setText(defaultUsr);
    ui->lineEdit_passwd->setText(defaultPasswd);
    ui->lineEdit_passwd->setEchoMode(QLineEdit::Password);
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
/*! 在此处对多有资源进行初始化*/
void Foundation::initUI(QString pRcPath)
{
    setRcPath(pRcPath);
    if(!pRcPath.isEmpty())
    {

    }
}

void Foundation::slot_setStackwidget(int page)
{
    ui->stackedWidget->setCurrentIndex(page);
}




void Foundation::on_btn_login_clicked()
{

    if(enterIntoSystem())
    {
        ithemeHelper msgHelper;
        msgHelper.showMessageBoxInfo("登录成功");

        slot_setStackwidget(1);




        //ui->stackedWidget->setCurrentIndex(1);
    }

}


