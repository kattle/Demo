#ifndef IBUTTON_H
#define IBUTTON_H

#include <QWidget>
#include <QPushButton>
#include <QMouseEvent>


class iButton : public QPushButton
{
    Q_OBJECT
public:
    iButton(QWidget *parent = 0);

    iButton(const QString &text,QWidget *parent = 0);

    iButton(const QIcon &icon, const QString &text, QWidget *parent =0 );

    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    
signals:
    
public slots:
    
};

#endif // IBUTTON_H
