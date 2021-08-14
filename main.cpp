//Furkan Türkay
//Patient Record System

/*
Bir giriş menüsü var. Kullanıcı adı ve şifre istiyor.
Arka planda text eşitlemesi ile çalışıyor. Veritabanına bağlayabiliriz.
Sekreter ve doktor için iki farklı arayüz var.
Eğer sekreter kullanıcısına ait bir giriş bilgisi kullanarak giriş yaparsa sekreter için olan arayüzü açıyor.
Sekreter arayüzünde yeni hasta oluşturma menüsü ve mevcut hastanın bilgilerini çağırma menüsü var.

Hasta ara menüsünde  Kimlik no girip aratınca. Json sorgusu yapacak. Eşlesen veri olursa,
Json verisinden aldığı bilgiler ile kutucukları dolduracak. Json dizisi kullanılabilir.

Yeni hasta menüsünde istenen hasta bilgileri lineEdit kutucuklarına yazılacak. Kaydet butonu tıklanması ile
QLineEditteki verileri Json verisine kaydedilecek.

Doktor arayüzünde, kimlik no girilen hastanın bilgileri çağırılacak.
Çağırılan hasta için Tanı,öneriler, tahlil&rapor, reçete girdisi yapıp bu kaydet butonu ile veriler tutulacak.

*/

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
