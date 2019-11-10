#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::information(this,tr("Clicked!"),tr("The button was clicked."));
    QString hello=tr("[Message] The button was clicked.  function 'on_pushButton_2_clicked ()'  called.\n");
    std::string hello1 = hello.toUtf8().constData();//Qstringからstd::stringへ
    std::cout << hello1;
}
void MainWindow::on_actionAbout_Qt_triggered()
{
        QMessageBox::aboutQt(this);
}
void MainWindow::slot1(){
    QMessageBox::warning(this,tr("Warning"),tr("This is a new message."));
}
void MainWindow::kyozetu(){
    QMessageBox::information(this,tr("Rejected"),tr("Rejected."));
}
void MainWindow::showName(){
    QString name=ui->nameEdit->text();
    if(name == ""){
        name="No name";
    }
    QMessageBox::information(this,tr("Your name is %1").arg(name),tr("Your name is %1.\nThank you for clicking.").arg(name));
}
void MainWindow::closeEvent(QCloseEvent *e){
    qDebug() << "Exit program";
}
