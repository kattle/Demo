#include "iwidget.h"

RcBase::RcBase()
{

}

RcBase::~RcBase()
{

}


iWidget::iWidget(QWidget *parent, Qt::WindowFlags f) :
    QWidget(parent, f)
{

}

iWidget::~iWidget()
{

}


/*!
    初始化图片资源：1路径
*/
void iWidget::InitRC(QString pRcPath, bool pInitial)
{
    if(!pRcPath.isEmpty())
    {
        if(!pRcPath.endsWith('/'))
            pRcPath.append('/');
        pRcPath.replace("//","/");
        QStringList tmpFileList =  getAllFilesInFolders(pRcPath);
        QString tmpfile;
        foreach(tmpfile,tmpFileList)
        {
            QString tmpFileName = getFileName(tmpfile);
            tmpFileName.remove("RC");
            if(tmpFileName.endsWith(".jpg",Qt::CaseInsensitive) ||
               tmpFileName.endsWith(".png",Qt::CaseInsensitive) ||
               tmpFileName.endsWith(".svg",Qt::CaseInsensitive) ||
               tmpFileName.endsWith(".bmp",Qt::CaseInsensitive))
            {
                int index =  tmpFileName.indexOf(".");
                if(index)
                {
                    tmpFileName.mid(0,index);
                }
                int tmpKey = getKey(tmpFileName,"RC");
                if(tmpKey != -1)
                    load(tmpKey,tmpfile);
            }
        }
    }
}

bool RcBase::load(int pKey, QString pFile)
{
    if(!m_FileList.contains(pKey))
    {
        m_FileList.insert(pKey,pFile);
        return true;
    }
    return false;

}


