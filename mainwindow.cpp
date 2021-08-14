#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    login();
}


void MainWindow::on_lineEdit_password_returnPressed()
{
    login();
}

void MainWindow::login()
{

    QString username=ui->lineEdit_username->text();
    QString password=ui->lineEdit_password->text();

    if(username == "doktor" && password == "1234"){
        QMessageBox::information(this,"Giriş","Doktor olarak giriş yapıldı.");
        hide();
        mainWindowDoctor = new MainWindowDoctor(this);
        mainWindowDoctor->show();
    }
    else if(username == "sekreter" && password == "1234"){
        QMessageBox::information(this,"Giriş","Sekreter olarak giriş yapıldı.");
        hide();
        mainWindowSecratary = new MainWindowSecretary(this);
        mainWindowSecratary->show();
    }
    else {
        QMessageBox::warning(this,"Giriş","Kullanıcı adı veya şifre yanlış.");
    }
}
