#ifndef IMESSAGEBOX_H
#define IMESSAGEBOX_H

#include <QDialog>
#include <globalfun.h>

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

protected:
    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
private slots:
    void on_btn_ok_clicked();

private:
    bool mousePressed;
    QPoint mousePoint;
};

#endif // IMESSAGEBOX_H
