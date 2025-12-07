#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;

    // Tampondaki kalan karakterleri temizle
    cin.ignore();

    cout << "Enter your name: ";
    getline(cin, name); // Tüm satırı al

    cout << "Age: " << age << ", Name: " << name << endl;
    return 0;
}
