#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <stdio.h>
#include <QDialog>
#include <QMessageBox>
#include <QCloseEvent>
#include <QDebug>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void slot1();
    void kyozetu();
    void showName();
    void on_actionAbout_Qt_triggered();

private:
    Ui::MainWindow *ui;
    void closeEvent(QCloseEvent *e);
};

#endif // MAINWINDOW_H
