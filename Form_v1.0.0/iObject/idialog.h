#ifndef IDIALOG_H
#define IDIALOG_H

#include <QWidget>

class QPushButton;


class iDialog : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(bool sizeGripEnabled READ isSizeGripEnabled WRITE setSizeGripEnabled)
    Q_PROPERTY(bool modal READ isModal WRITE setModal)
public:
    explicit iDialog(QWidget *parent = 0);

#ifdef QT3_SUPPORT
    QT3_SUPPORT_CONSTRUCTOR QDialog(QWidget *parent, const char *name, bool modal = false,
                                  Qt::WindowFlags f = 0);
#endif


signals:
    
public slots:
    
};

#endif // IDIALOG_H
