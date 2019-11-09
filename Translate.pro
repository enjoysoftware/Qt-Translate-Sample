#-------------------------------------------------
#
# Project created by QtCreator 2019-08-22T13:10:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Translate
TEMPLATE = app
#QMAKE_CXX=clang
# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui
TRANSLATIONS = \
    translate/trans_ja_JP.ts
unix {
isEmpty(PREFIX): PREFIX = /usr/local
DEFINES=PREFIX=$${PREFIX}
DATA_DIR=$${PREFIX}/share
desktop.path = $${DATA_DIR}/applications
desktop.files += desktop/translate.desktop
target.path = $${PREFIX}/bin/
INSTALLS += target desktop
message("This is a translation sample. This app will be installed to $${PREFIX}")
}
#CONFIG   += console

RESOURCES += \
    translations.qrc
