// Time.h
// Time sınıfı tanımı ve çoklu dahil etmeyi önlemek için koruma.
#ifndef TIME_H
#define TIME_H

// Time sınıfı tanımı
class Time {
public:
    Time(int = 0, int = 0, int = 0); // Constructor, varsayılan değerler 0
    void setTime(int, int, int);     // Saat, dakika ve saniyeyi ayarla
    int getHour();                   // Saat bilgisini döndür
    int &badSetHour(int);            // TEHLİKELİ: Saat referansı döndürür

private:
    int hour;    // Saat
    int minute;  // Dakika
    int second;  // Saniye
}; // Sınıf tanımı biter

#endif // TIME_H
