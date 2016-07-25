#include "../common/globalfun.h"

QStringList getAllFilesInFolders(QString pDir)
{
    if(!pDir.endsWith('/'))
        pDir.append('/');
    QDir dir = QDir(pDir);
    QStringList tmpList,getAllList;
    QString tmpString;
    getAllList.clear();
    if(!dir.exists())
           return getAllList;
    tmpList = dir.entryList(QDir::Dirs|QDir::Files|QDir::NoDotDot|QDir::NoSymLinks);
    for(int i=0; i<tmpList.count();i++)
    {
        tmpString = QString("%1%2").arg(pDir).arg(tmpList.at(i));
        tmpString.replace("//","/");
        getAllList.append(tmpString);
    }

    return getAllList;

}
QString getFileName(QString filePath)
{
    QString tmpFileName;
    if(!filePath.isEmpty())
    {
        return tmpFileName;
    }

    int index = filePath.lastIndexOf("/");
    if(index>=0)
    {
        tmpFileName = filePath.mid(index+1);
    }
    else
        tmpFileName = filePath;
    return tmpFileName;

}

 int getKey(QString pString,  QString pPrefix )
{

    if(pString.isEmpty())
        return -1;
    if(pString.startsWith(pPrefix,Qt::CaseInsensitive)==false)
        return pString.toInt();
    else
        pString.remove(0,2);
    bool ok = false;
    int index = pString.toInt(&ok,10);
    if(ok == false)
        return -1;
    return index;
}



