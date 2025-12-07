#include "constfunction.cpp" // Time sınıfı tanımı
#include<iostream>
using namespace std;
int main() {
    Time wakeUp(6, 45, 0);      // Non-constant (sabit olmayan) bir nesne oluşturuluyor
    const Time noon(12, 0, 0);  // Constant (sabit) bir nesne oluşturuluyor

    // Non-constant nesne, non-constant bir üye fonksiyon çağırabilir
    wakeUp.setHour(18); 

    // Constant nesne, non-constant üye fonksiyon çağırmaya çalışırsa derleme hatası alır
    // noon.setHour(12); // Bu hatalı bir kullanım! Yorum satırı yaptım.

    // Non-constant nesne, constant üye fonksiyon çağırabilir
    wakeUp.getHour();

    // Constant nesne, constant üye fonksiyon çağırabilir
    noon.getMinute();
    noon.printUniversal();

    // Constant nesne, non-constant üye fonksiyon çağırmaya çalışırsa derleme hatası alır
    // noon.printStandard(); // Bu hatalı bir kullanım! Yorum satırı yaptım.

    return 0;
}
