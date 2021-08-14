#include "mainwindowsecretary.h"
#include "ui_mainwindowsecretary.h"

MainWindowSecretary::MainWindowSecretary(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowSecretary)
{
    ui->setupUi(this);
    ui->lineEdit_IDcheck->setValidator(new QIntValidator());
    ui->dateEdit_recordDate->setDate(QDate::currentDate());

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

MainWindowSecretary::~MainWindowSecretary()
{
    delete ui;
}




void MainWindowSecretary::on_pushButton_cancel_clicked()
{
    ui->lineEdit_Address->clear();
    ui->lineEdit_Age->clear();
    ui->lineEdit_Body_Temperature->clear();
    ui->lineEdit_ID->clear();
    ui->lineEdit_Name->clear();
    ui->lineEdit_blood_group->clear();
    ui->lineEdit_clinic->clear();
    ui->lineEdit_complaint->clear();
    ui->lineEdit_doctorName->clear();
    ui->lineEdit_familyHistory->clear();
    ui->lineEdit_height->clear();
    ui->lineEdit_meds->clear();
    ui->lineEdit_personelHistory->clear();
    ui->lineEdit_phoneNumber->clear();
    ui->lineEdit_pulse->clear();
    ui->lineEdit_weight->clear();
    ui->dateEdit_birth_day->clear();

}

void MainWindowSecretary::on_lineEdit_IDcheck_returnPressed()
{
    find();
}

void MainWindowSecretary::on_pushButton_find_clicked()
{
    find();
}


void MainWindowSecretary::on_pushButton_save_clicked()
{

    QString address = ui->lineEdit_Address->text();
    QString age = ui->lineEdit_Age->text();
    QString body_temperature = ui->lineEdit_Body_Temperature->text();
    QString ID = ui->lineEdit_ID->text();
    QString name = ui->lineEdit_Name->text();
    QString blood_group = ui->lineEdit_blood_group->text();
    QString clinic = ui->lineEdit_clinic->text();
    QString complaint = ui->lineEdit_complaint->text();
    QString doctorName = ui->lineEdit_doctorName->text();
    QString familyHistory = ui->lineEdit_familyHistory->text();
    QString height = ui->lineEdit_height->text();
    QString meds = ui->lineEdit_meds->text();
    QString personelHistory = ui->lineEdit_personelHistory->text();
    QString phoneNumber = ui->lineEdit_phoneNumber->text();
    QString pulse = ui->lineEdit_pulse->text();
    QString weight = ui->lineEdit_weight->text();
    QString birthDate = ui->dateEdit_birth_day->text();
    QString recordDate = ui->dateEdit_recordDate->text();
    
//    address = ui->lineEdit_Address->text();
//    age = ui->lineEdit_Age->text();
//    body_temperature = ui->lineEdit_Body_Temperature->text();
//    ID = ui->lineEdit_ID->text();
//    name = ui->lineEdit_Name->text();
//    blood_group = ui->lineEdit_blood_group->text();
//    clinic = ui->lineEdit_clinic->text();
//    complaint = ui->lineEdit_complaint->text();
//    doctorName = ui->lineEdit_doctorName->text();
//    familyHistory = ui->lineEdit_familyHistory->text();
//    height = ui->lineEdit_height->text();
//    meds = ui->lineEdit_meds->text();
//    personelHistory = ui->lineEdit_personelHistory->text();
//    phoneNumber = ui->lineEdit_phoneNumber->text();
//    pulse = ui->lineEdit_pulse->text();
//    weight = ui->lineEdit_weight->text();
//    birthDate = ui->dateEdit_birth_day->text();
//    recordDate = ui->dateEdit_recordDate->text();
   

    if(ui->radioButton_GenderFemale->isCheckable())
            QString gender="Kadın";
    else if (ui->radioButton_GenderMale->isCheckable())
         QString gender="Erkek";
    else
         QString gender="-";

    if(ID != "" && name != ""){             //diğer koşullar eklenecek
        ui->lineEdit_Address->clear();
        ui->lineEdit_Age->clear();
        ui->lineEdit_Body_Temperature->clear();
        ui->lineEdit_ID->clear();
        ui->lineEdit_Name->clear();
        ui->lineEdit_blood_group->clear();
        ui->lineEdit_clinic->clear();
        ui->lineEdit_complaint->clear();
        ui->lineEdit_doctorName->clear();
        ui->lineEdit_familyHistory->clear();
        ui->lineEdit_height->clear();
        ui->lineEdit_meds->clear();
        ui->lineEdit_personelHistory->clear();
        ui->lineEdit_phoneNumber->clear();
        ui->lineEdit_pulse->clear();
        ui->lineEdit_weight->clear();
        ui->radioButton_GenderFemale->setChecked(false);
        ui->radioButton_GenderMale->setChecked(false);

        //*********
        //QStringe kaydedilen verileri Json olarak kaydetmek istiyorum
        //*********


        ui->statusbar->showMessage("Kayıt Başarılı Bir Şekilde Yapıldı.", 3000);
        // QMessageBox::information(this,"YENİ HASTA KAYDI","Kayıt Başarılı bir şekilde yapıldı.");
    }

    else
        ui->statusbar->showMessage("Lütfen eksik yerleri doldurunuz.",3000);

}

//void MainWindowSecretary::write(QJsonObject &json) const
//{
// json["ID"]= ID;
// json["name"]= name;
// json["gender"]= gender;
// json["age"]= age;
// json["birthDate"]= birthDate;
// json["phoneNumber"]= phoneNumber;
// json["address"]= address;
 
// json["recordDate"]= recordDate;
// json["doctorName"]= doctorName;
// json["clinic"]= clinic;
// json["pulse"]= pulse;
// json["body_temperature"]= body_temperature;
// json["complaint"]= complaint;
 
// json["blood_group"]= blood_group;
// json["height"]= height;
// json["weight"]= weight;
// json["personelHistory"]= personelHistory;
// json["familyHistory"]= familyHistory;
// json["meds"]= meds;
 
//}


//bool MainWindowSecretary::saveData(MainWindowSecretary::SaveFormat saveFormat) const
//{
// QFile saveFile(saveFormat == Json ?
// QStringLiteral("data.json"):QStringLiteral("save.dat"));

// QJsonObject dataObject;
// write(dataObject);
// QJsonDocument saveDoc(dataObject);
// saveFile.write(saveFormat == Json ?
// saveDoc.toJson():saveDoc.toBinaryData());
// return true;
//}

void MainWindowSecretary::find()//   ..._2 find patient objects
{
    QString ID_check = ui->lineEdit_IDcheck->text();
    qDebug()<<ID_check;
    ui->lineEdit_IDcheck->clear();

//***
//eşleşen veri olursa json verisinden ayrı ayrı verileri çekip QLineEditte yazdırmak istiyorum.
//***

    QString mID = "1234";
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

//    ID ;
//    name ;
//    gender;
//    age;
//    birthDate;
//    phoneNumber;
//    address;

//    recordDate;
//    doctorName ;
//    clinic ;
//    pulse;
//    body_temperature;
//    complaint;

//    blood_group ;
//    height ;
//    weight;
//    personelHistory;
//    familyHistory ;
//    meds ;


