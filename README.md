



# PatientRecordSystem
Bir giriş menüsü var. Kullanıcı adı ve şifre istiyor.
![login ui](https://user-images.githubusercontent.com/88648358/129444454-e0410380-bdda-4a45-86d2-db2216786bb6.jpeg)
Arka planda text eşitlemesi ile çalışıyor. Veritabanına bağlayabiliriz.
Sekreter ve doktor için iki farklı arayüz var.
Eğer sekreter kullanıcısına ait bir giriş bilgisi kullanarak giriş yaparsa sekreter için olan arayüzü açıyor.
Sekreter arayüzünde yeni hasta oluşturma menüsü ve mevcut hastanın bilgilerini çağırma menüsü var.

Hasta ara menüsünde  Kimlik no girip aratınca. Json sorgusu yapacak. Eşlesen veri olursa,
Json verisinden aldığı bilgiler ile kutucukları dolduracak. Json dizisi kullanılabilir.
![sekreter ui - hasta bilgilerini getir](https://user-images.githubusercontent.com/88648358/129444453-7d369d09-4855-47fd-8c78-781cc5a2b2f8.jpeg)

Yeni hasta menüsünde istenen hasta bilgileri lineEdit kutucuklarına yazılacak. Kaydet butonu tıklanması ile
QLineEditteki verileri Json verisine kaydedilecek.
![sekreter ui - yeni hasta kaydı](https://user-images.githubusercontent.com/88648358/129444452-8bfaa925-4723-4196-9f93-edb2ec3a4376.jpeg)

Doktor arayüzünde, kimlik no girilen hastanın bilgileri çağırılacak.
Çağırılan hasta için Tanı,öneriler, tahlil&rapor, reçete girdisi yapıp bu kaydet butonu ile veriler tutulacak.
![doktor ui](https://user-images.githubusercontent.com/88648358/129444451-f1a17be4-e718-4e1a-953f-d3a232f887af.jpeg)
