#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    const int* ptr1 = &a;  // Pointer to const (değeri değiştirilemez)
    int* const ptr2 = &a;  // Const pointer (işaretçi sabit)
    const int* const ptr3 = &b; // Const pointer to const data (tam sabitlik)

    cout << "ptr1: " << *ptr1 << endl;  // a'nın değerini okur
    // *ptr1 = 15;  // HATA: ptr1'in gösterdiği değer değiştirilemez
    ptr1 = &b;  // ptr1 başka bir adresi işaret edebilir

    cout << "ptr2: " << *ptr2 << endl;  // a'nın değerini okur
    *ptr2 = 30;  // ptr2'nin gösterdiği veri değiştirilebilir
    // ptr2 = &b;  // HATA: ptr2 başka bir adresi işaret edemez

    cout << "ptr3: " << *ptr3 << endl;  // b'nin değerini okur
    // *ptr3 = 25;  // HATA: ptr3'in gösterdiği değer değiştirilemez
    // ptr3 = &a;   // HATA: ptr3 başka bir adresi işaret edemez

    return 0;
}
