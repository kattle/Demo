#include "ibutton.h"
/*! 暂时先不重写*/
iButton::iButton(QWidget *parent) :
    QPushButton(parent)
{

}

iButton::iButton(const QString &text, QWidget *parent)
    :QPushButton(text, parent)
{
}

iButton::iButton(const QIcon &icon, const QString &text, QWidget *parent)
    :QPushButton(icon, text, parent)
{
}

void iButton::mousePressEvent(QMouseEvent *e)
{
    if (e && e->button() == Qt::LeftButton)
    {
    }
    QPushButton::mousePressEvent(e);

}

void iButton::mouseMoveEvent(QMouseEvent *e)
{
    if (e && e->button() == Qt::LeftButton)
    {
    }
    QPushButton::mousePressEvent(e);;
}

void iButton::mouseReleaseEvent(QMouseEvent *e)
{
    if (e && e->button() == Qt::LeftButton)
    {
        click();
    }
    QPushButton::mouseReleaseEvent(e);
}
