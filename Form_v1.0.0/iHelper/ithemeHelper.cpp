#include "ithemehelper.h"

ithemeHelper::ithemeHelper(QObject *parent) : QObject(parent)
{

}

ithemeHelper::~ithemeHelper()
{

}

void ithemeHelper::setUTF8Code()
{
#if (QT_VERSION <= QT_VERSION_CHECK(5,0,0))
        QTextCodec *codec = QTextCodec::codecForName("UTF-8");
        QTextCodec::setCodecForLocale(codec);
        QTextCodec::setCodecForCStrings(codec);
        QTextCodec::setCodecForTr(codec);
#endif
}

void ithemeHelper::setThemeStyle(const QString &themeName)
{
    QFile file(QString(":/image/%1.css").arg(themeName));
    file.open(QFile::ReadOnly);
    QString qss = QLatin1String(file.readAll());
    qApp->setStyleSheet(qss);
    qApp->setPalette(QPalette(QColor("#F0F0F0")));

}

bool ithemeHelper::isIP(QString ip)
{
    QRegExp RegExp("((2[0-4]\\d|25[0-5]|[01]?\\d\\d?)\\.){3}(2[0-4]\\d|25[0-5]|[01]?\\d\\d?)");
    return RegExp.exactMatch(ip);
}
/*! 始终保持居中*/
void ithemeHelper::formInCenter(QWidget *frm)
{
    int frmX = frm->width();
    int frmY = frm->height();
    QDesktopWidget w;
    int desktopX = w.width();
    int desktopY = w.height();
    QPoint movePoint(desktopX/2-frmX/2,desktopY/2-frmY/2);
    frm->move(movePoint);
}

void ithemeHelper::autoRunWithSystem(bool isAutoRun, QString appName, QString appPath)
{
    QSettings *reg = new QSettings("HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run",
                                 QSettings::NativeFormat);
    if(isAutoRun)
    {
        reg->setValue(appName,appPath);
    }
    else
    {
        reg->setValue(appName, "");
    }
}



