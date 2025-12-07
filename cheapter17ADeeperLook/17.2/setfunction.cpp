#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double pi = 3.14159;
    cout << setw(10) << setfill('*') << fixed << setprecision(2) << pi << endl;




    // double sayi = 123.456789;

    // // Bilimsel gösterimde 4 anlamlı basamak
    // cout << scientific << setprecision(4) << sayi << endl; 

    // // Sabit nokta gösteriminde 2 ondalık basamak
    // cout << fixed << setprecision(2) << sayi << endl; 

    // return 0;

}
//Bu kod, sayi değişkenini 10 karakterlik bir alana yerleştirir ve boşlukları yıldız (*) karakteriyle doldurur.