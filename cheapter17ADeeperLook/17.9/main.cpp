#include"funciton.cpp"
#include <iostream>
 // Time sınıfını içeren header dosyasını dahil et
using namespace std;

int main() {
    Time t; // Time nesnesi oluştur

    // Referansı kullanarak saat ayarla ve ardından doğrudan değiştir
    int &hourRef = t.badSetHour(20); // Saat 20 olarak ayarlanır
    cout << "Valid hour before modification: " << hourRef;
    hourRef = 30; // Referansı kullanarak geçersiz bir değer atanır
    cout << "\nInvalid hour after modification: " << t.getHour();

    // badSetHour fonksiyonunu lvalue olarak kullanma
    t.badSetHour(12) = 74; // Saat 74 olarak atanır (geçersiz)
    cout << "\n\n*************************************************\n"
         << "POOR PROGRAMMING PRACTICE!!!!!!!!\n"
         << "t.badSetHour(12) as an lvalue, invalid hour: "
         << t.getHour()
         << "\n*************************************************" << endl;

    return 0; // Program sonlanır
}
