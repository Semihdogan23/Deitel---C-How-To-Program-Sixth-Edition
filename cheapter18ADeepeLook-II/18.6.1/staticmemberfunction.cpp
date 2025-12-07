#include <iostream>
using namespace std;

class MyClass {
private:
    static int staticVar; // Static üye
    int normalVar;        // Normal üye

public:
    static void staticFunction() {
        cout << "Static Function: StaticVar = " << staticVar << endl;
        // normalVar++; // HATA: static fonksiyon normal üyeye erişemez
    }

    void normalFunction() {
        cout << "Normal Function: StaticVar = " << staticVar << ", NormalVar = " << normalVar << endl;
    }
};

int MyClass::staticVar = 42;

int main() {
    // Static fonksiyon doğrudan sınıf adıyla çağrılır
    MyClass::staticFunction();

    // Normal fonksiyon için bir nesne gerekir
    MyClass obj;
    obj.normalFunction();

    return 0;
}
// static üye fonksiyonlar, yalnızca sınıfın static üyelerine ve diğer static üye fonksiyonlarına erişebilir.
// Normal üye fonksiyonlar ise hem static hem de non-static üyelere erişebilir.