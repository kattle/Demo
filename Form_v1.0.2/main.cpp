#include "foundation.h"
#include "define.h"
#include <QtGui/QApplication>
#include <QTextCodec>
#ifdef X86
#include <QScrollArea>
#endif

int main(int argc, char *argv[])
{
#ifdef LINUX
    QApplication a(argc, argv, QApplication::GuiServer);
    QWSServer::setCursorVisible(false);
#else
    QApplication a(argc, argv);
#endif
    QTextCodec*codec=QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);

    Foundation *tmpFounder = new Foundation;
#ifdef WINDOWS
    QScrollArea w;
    w.setWidget(tmpFounder);

    QString tmpPath = QString("%1/../../../usrfs/").arg(QApplication::applicationDirPath());
    IDE_TRACE_STR(tmpPath);
    tmpFounder->initUI(tmpPath);
    w.show();
#else
#endif

    tmpFounder->show();

    return a.exec();
}
