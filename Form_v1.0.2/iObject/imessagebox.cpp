#include "imessagebox.h"
#include "ui_imessagebox.h"
#include "ithemeHelper.h"

iMessageBox::iMessageBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::iMessageBox)
{
    ui->setupUi(this);
    mousePressed = false;
    /*! 窗体标题栏隐藏*/
    this->setWindowFlags(Qt::FramelessWindowHint);
    /*! 窗体关闭时释放内存*/
    this->setAttribute(Qt::WA_DeleteOnClose);
    connect(ui->btn_menuClose,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->btn_cancel,SIGNAL(clicked()),this,SLOT(slot_btnCancelClicked()));
    ithemeHelper::formInCenter(this);




}

iMessageBox::~iMessageBox()
{
    delete ui;
}
/*!
 添加资源，另外一种就是直接在main函数中进行添加
 还有就是加载图片的时候可以以序号进行命名
 使用enum代替type
*/
void iMessageBox::setMessage(QString &msg, int type)
{
    QString src = QString("%1/../../../usrfs/theme/messagebox/info.pag").arg(QApplication::applicationDirPath());

    QPixmap tmpPix(src);
    if(type==0)
    {
        ui->lab_mainIco->setPixmap(tmpPix);
        ui->btn_cancel->setVisible(false);
        ui->lab_title->setText(tr("提示"));
    }
    if(type==1)
    {
        ui->lab_mainIco->setPixmap(tmpPix);
        ui->btn_cancel->setVisible(false);
        ui->lab_title->setText(tr("提示"));
    }
    if(type==2)
    {
        ui->lab_mainIco->setPixmap(tmpPix);
        ui->btn_cancel->setVisible(false);
        ui->lab_title->setText(tr("提示"));
    }
    ui->lab_mainText->setText(msg);

}

void iMessageBox::mouseMoveEvent(QMouseEvent *e)
{
    if(mousePressed&&(e->button() == Qt::LeftButton))
    {
        this->move(e->globalPos()-mousePoint);
        e->accept();
    }
}

void iMessageBox::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        mousePressed = true;
        mousePoint = e->globalPos()-this->pos();
        e->accept();
    }
}

void iMessageBox::mouseReleaseEvent(QMouseEvent *e)
{

}




void iMessageBox::on_btn_ok_clicked()
{
    done(1);
    this->close();


}

void iMessageBox::slot_btnCancelClicked()
{
    done(1);
    this->close();

}
