#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <QDebug>
int main(int argc, char *argv[])
{
//    QApplication::setStyle("fusion");
    QApplication a(argc, argv);
    // translate --->
      qDebug("[Message]Starting loading translation files...");
      QTranslator translator;
      translator.load("trans_"+QLocale::system().name(),":translate");
//      qDebug() << QString(PREFIX);
      qDebug() << "Your locale is" << QLocale::system().name();
      a.installTranslator(&translator);
      qDebug()<< "[Message]Finished loading translation files.";
      // <---
    MainWindow w;
    w.show();

    return a.exec();
}
