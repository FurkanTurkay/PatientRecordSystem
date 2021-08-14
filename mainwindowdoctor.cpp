#include "mainwindowdoctor.h"
#include "ui_mainwindowdoctor.h"

MainWindowDoctor::MainWindowDoctor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowDoctor)
{
    ui->setupUi(this);
    ui->lineEdit_IDcheck->setValidator(new QIntValidator());

    ui->lineEdit_ID_2->setReadOnly(true);
    ui->lineEdit_Name_2->setReadOnly(true);
    ui->lineEdit_gender->setReadOnly(true);
    ui->lineEdit_Age_2->setReadOnly(true);
    ui->lineEdit_birth_date->setReadOnly(true);
    ui->lineEdit_Address_2->setReadOnly(true);

    ui->lineEdit_record_date->setReadOnly(true);
    ui->lineEdit_doctorName_2->setReadOnly(true);
    ui->lineEdit_clinic_2->setReadOnly(true);
    ui->lineEdit_pulse_2->setReadOnly(true);
    ui->lineEdit_Body_Temperature_2->setReadOnly(true);
    ui->lineEdit_complaint_2->setReadOnly(true);

    ui->lineEdit_blood_group_2->setReadOnly(true);
    ui->lineEdit_height_2->setReadOnly(true);
    ui->lineEdit_weight_2->setReadOnly(true);
    ui->lineEdit_personelHistory_2->setReadOnly(true);
    ui->lineEdit_familyHistory_2->setReadOnly(true);
    ui->lineEdit_meds_2->setReadOnly(true);

}

MainWindowDoctor::~MainWindowDoctor()
{
    delete ui;
}

void MainWindowDoctor::on_pushButton_2_clicked()//clear button
{
       ui->lineEdit_diagnosis->clear();
       ui->lineEdit_suggestions->clear();
       ui->lineEdit_test_report->clear();
       ui->lineEdit_receipt->clear();
}


void MainWindowDoctor::on_pushButton_Save_clicked()
{
   QString IDnumber = ui->lineEdit_ID_2->text();
   QString diagnosis = ui->lineEdit_diagnosis->text();
   QString suggestions = ui->lineEdit_suggestions->text();
   QString test_report =ui->lineEdit_test_report->text();
   QString receipt = ui->lineEdit_receipt->text();


}


void MainWindowDoctor::on_pushButton_find_clicked()
{
    find();
}


void MainWindowDoctor::on_lineEdit_IDcheck_returnPressed()
{
    find();
}

void MainWindowDoctor::find()
{
    QString mID = "123456789" ;
    QString mname = "furkan";
    QString mgender;
    QString mage;
    QString mbirthDate;
    QString mphoneNumber;
    QString maddress;

    QString mrecordDate;
    QString mdoctorName ;
    QString mclinic ;
    QString mpulse;
    QString mbody_temperature;
    QString mcomplaint;

    QString mblood_group ;
    QString mheight ;
    QString mweight;
    QString mpersonelHistory;
    QString mfamilyHistory ;
    QString mmeds ;

    ui->lineEdit_ID_2->setText(mID);
    ui->lineEdit_Name_2->setText(mname);
    ui->lineEdit_gender->setText(mgender);
    ui->lineEdit_Age_2->setText(mage);
    ui->lineEdit_birth_date->setText(mbirthDate);
    ui->lineEdit_phoneNumber_2->setText(mphoneNumber);
    ui->lineEdit_Address_2->setText(maddress);

    ui->lineEdit_record_date->setText(mrecordDate);
    ui->lineEdit_doctorName_2->setText(mdoctorName);
    ui->lineEdit_clinic_2->setText(mclinic);

    ui->lineEdit_pulse_2->setText(mpulse);
    ui->lineEdit_Body_Temperature_2->setText(mbody_temperature);
    ui->lineEdit_complaint_2->setText(mcomplaint);

    ui->lineEdit_blood_group_2->setText(mblood_group);
    ui->lineEdit_height_2->setText(mheight);
    ui->lineEdit_weight_2->setText(mweight);
    ui->lineEdit_personelHistory_2->setText(mpersonelHistory);
    ui->lineEdit_familyHistory_2->setText(mfamilyHistory);
    ui->lineEdit_meds_2->setText(mmeds);

}
