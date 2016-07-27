#ifndef ILABEL_H
#define ILABEL_H

/*! 注意：label 应该是需要继承于 iWidget的现在值暂时没有使用*/

#include <QWidget>
#include <QFont>
#include <QColor>
#include <stdlib.h>

class iLabel : public QWidget
{
    Q_OBJECT
public:
    explicit iLabel(QWidget *parent = 0);

    explicit iLabel(QRect rec, QString str, QWidget *parent = 0);
    ~iLabel();
    /*! label中文字对齐方式*/
    void setAlignment(int type);
    void setText(QString str);
    void setFont(const QFont &font);
    void setValue(int val);
    void setColor(QColor col);


    
signals:
    
public slots:

protected:
    QString i_Str;
    QColor i_Color;
    QFont i_Font;
    int initFont;
    int initColor;
    
};

#endif // ILABEL_H
