#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // translate --->
      QTranslator translator;
      translator.load("translate/trans_ja"); 
      a.installTranslator(&translator);
      // <---

    MainWindow w;
    w.show();

    return a.exec();
}
