#include <iostream>
using namespace std;

// Global değişkenler
const int defaultVal = 20;

// Basit bir fonksiyon
int getDefaultValue() {
    return 10;
}

// Varsayılan argümanları olan fonksiyon tanımı
void printValues(int a = 5, int b = defaultVal, int c = getDefaultValue()) {
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
}

// Inline fonksiyon
inline void inlineFunction(int x = 1, int y = 2) {
    cout << "x: " << x << ", y: " << y << endl;
}

int main() {
    // Farklı çağrı örnekleri
    printValues(); // a, b ve c varsayılan değerlerini alır
    printValues(15); // b ve c varsayılan değerlerini alır
    printValues(15, 25); // c varsayılan değerini alır
    printValues(15, 25, 35); // Hiçbir varsayılan değer kullanılmaz

    // Inline fonksiyon çağrısı
    inlineFunction(); // x ve y varsayılan değerlerini alır
    inlineFunction(10); // y varsayılan değerini alır
    inlineFunction(10, 20); // Hiçbir varsayılan değer kullanılmaz

    return 0;
}
