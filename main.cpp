#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QLocale>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // translate --->
      QTranslator translator;
      translator.load("translate/trans_"+QLocale::system().name());
      a.installTranslator(&translator);
      // <---
    MainWindow w;
    w.show();

    return a.exec();
}
