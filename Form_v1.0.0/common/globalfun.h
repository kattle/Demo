#ifndef GLOBALFUN_H
#define GLOBALFUN_H

#include <QStringList>
#include <QString>
#include <QDir>


QStringList getAllFilesInFolders(QString pDir);
QString getFileName(QString filePath);
int getKey(QString pString,QString pPrefix );


#endif // GLOBALFUN_H
