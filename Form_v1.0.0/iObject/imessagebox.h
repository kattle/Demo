#ifndef IMESSAGEBOX_H
#define IMESSAGEBOX_H

#include <QDialog>

namespace Ui {
class iMessageBox;
}

class iMessageBox : public QDialog
{
    Q_OBJECT
    
public:
    explicit iMessageBox(QWidget *parent = 0);
    ~iMessageBox();

    void setMessage(QString &msg, int type);
    
private:
    Ui::iMessageBox *ui;
};

#endif // IMESSAGEBOX_H
