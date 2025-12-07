#include <iostream>
using namespace std;

class MyClass {
public:
    static int staticVar; // Static üye
    int normalVar;        // Normal üye
};

int MyClass::staticVar = 10; // Static üye sınıf dışında tanımlandı ve başlatıldı

int main() {
    MyClass obj1, obj2;
    obj1.normalVar = 5;
    obj2.normalVar = 15;

    cout << "StaticVar (Shared): " << MyClass::staticVar << endl; // Doğrudan sınıf adıyla erişim
    cout << "Obj1 NormalVar: " << obj1.normalVar << endl;
    cout << "Obj2 NormalVar: " << obj2.normalVar << endl;

    obj1.staticVar = 20; // Static üye, tüm nesneler için ortak
    cout << "StaticVar after change: " << obj2.staticVar << endl; // Tüm nesneler etkilenir
}
