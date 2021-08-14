#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainwindowdoctor.h"
#include "mainwindowsecretary.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_Login_clicked();

    void on_lineEdit_password_returnPressed();

private:
    Ui::MainWindow *ui;
    MainWindowDoctor *mainWindowDoctor;
    MainWindowSecretary *mainWindowSecratary;
    void login();
};
#endif // MAINWINDOW_H
