#ifndef MAINWINDOWDOCTOR_H
#define MAINWINDOWDOCTOR_H

#include <QMainWindow>
#include<QDebug>
#include<QValidator>
#include<QMessageBox>
#include<QDate>


namespace Ui {
class MainWindowDoctor;
}

class MainWindowDoctor : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowDoctor(QWidget *parent = nullptr);
    ~MainWindowDoctor();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_Save_clicked();

    void on_pushButton_find_clicked();

    void on_lineEdit_IDcheck_returnPressed();

private:
    Ui::MainWindowDoctor *ui;
    void find();

};

#endif // MAINWINDOWDOCTOR_H
