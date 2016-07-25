#include "imessagebox.h"
#include "ui_imessagebox.h"

iMessageBox::iMessageBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::iMessageBox)
{
    ui->setupUi(this);

}

iMessageBox::~iMessageBox()
{
    delete ui;
}

void iMessageBox::setMessage(QString &msg, int type)
{

}
