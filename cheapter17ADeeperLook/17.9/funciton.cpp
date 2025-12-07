// Time.cpp
#include<iostream>
#include "refprivatechange.h" // Time sınıfı tanımını içeren header dosyasını dahil et
using namespace std;
// Constructor: Saat, dakika ve saniyeyi ayarla
Time::Time(int hr, int min, int sec) {
    setTime(hr, min, sec); // setTime fonksiyonunu çağır
}

// setTime: Saat, dakika ve saniyeyi doğrula ve ata
void Time::setTime(int h, int m, int s) {
    hour = (h >= 0 && h < 24) ? h : 0;     // Saat 0-23 arasında olmalı
    minute = (m >= 0 && m < 60) ? m : 0;  // Dakika 0-59 arasında olmalı
    second = (s >= 0 && s < 60) ? s : 0;  // Saniye 0-59 arasında olmalı
}

// getHour: Saat değerini döndür
int Time::getHour() {
    return hour; // Saat bilgisini döndür
}

// badSetHour: TEHLİKELİ, hour değişkenine referans döndürür
int &Time::badSetHour(int hh) {
    hour = (hh >= 0 && hh < 24) ? hh : 0; // Saat doğrulanır
    return hour; // Saatin referansını döndür (tehlikeli bir işlem)
}
