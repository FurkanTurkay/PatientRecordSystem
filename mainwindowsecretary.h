#ifndef MAINWINDOWSECRETARY_H
#define MAINWINDOWSECRETARY_H

#include <QMainWindow>
#include<QDebug>
#include<QValidator>
#include<QMessageBox>
#include<QDate>

#include <QDialog>
#include <QFile>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QString>
#include <QDir>
#include <QTemporaryFile>

namespace Ui {
class MainWindowSecretary;
}

class MainWindowSecretary : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowSecretary(QWidget *parent = nullptr);
    ~MainWindowSecretary();


private slots:
    void on_pushButton_cancel_clicked();

    void on_pushButton_find_clicked();

    void on_pushButton_save_clicked();

    void on_lineEdit_IDcheck_returnPressed();

private:
    Ui::MainWindowSecretary *ui;
    void find();


};

#endif // MAINWINDOWSECRETARY_H
