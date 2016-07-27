#ifndef IWIDGET_H
#define IWIDGET_H

#include <QWidget>
#include <QHash>

#include "../common/globalfun.h"
class RcBase
{
public:
    RcBase();
    ~RcBase();
    virtual void InitRC(QString pRcPath, bool pInitial = true) = 0;   //
    virtual bool load(int pKey, QString pFile);

public:
    QHash<int,QString>   m_FileList;


};

class iWidget : public QWidget, public RcBase
{
    Q_OBJECT
public:
    iWidget(QWidget* parent = 0, Qt::WindowFlags f = 0);
    ~iWidget();
    virtual void InitRC(QString pRcPath, bool pInitial);
};


#endif // IWIDGET_H
