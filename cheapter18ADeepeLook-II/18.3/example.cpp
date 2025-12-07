#include <iostream>
#include <cstring> // strcpy, strlen gibi string fonksiyonları için
using namespace std;

// Address sınıfı
class Address {
private:
    char* street; // Dinamik bellek ile tutulacak
    int number;

public:
    // Parametreli kurucu
    Address(const char* str, int num) {
        // street için dinamik bellek ayırıyoruz
        street = new char[strlen(str) + 1];
        strcpy(street, str); // Değeri kopyalıyoruz
        number = num;
    }

    // Kopya kurucu (Deep Copy yapılmalı)
    Address(const Address& other) {
        street = new char[strlen(other.street) + 1]; // Yeni bellek ayır
        strcpy(street, other.street); // Değeri kopyala
        number = other.number; // Diğer üyeyi kopyala
    }

    // Atama operatörü (Deep Copy yapılmalı)
    Address& operator=(const Address& other) {
        if (this != &other) { // Kendi kendine atamayı engelle
            delete[] street; // Eski belleği serbest bırak
            street = new char[strlen(other.street) + 1]; // Yeni bellek ayır
            strcpy(street, other.street); // Değeri kopyala
            number = other.number; // Diğer üyeyi kopyala
        }
        return *this;
    }

    // Destructor (Dinamik belleği serbest bırak)
    ~Address() {
        delete[] street;
    }

    // Adresi yazdırmak için bir yardımcı fonksiyon
    void display() const {
        cout << "Street: " << street << ", Number: " << number << endl;
    }
};

// Employee sınıfı, Address nesnesini composition ile içerir
class Employee {
private:
    string name;
    Address* address; // Dinamik olarak oluşturulan Address nesnesi

public:
    // Parametreli kurucu
    Employee(const string& n, const char* str, int num)
        : name(n) {
        address = new Address(str, num); // Dinamik olarak Address nesnesi oluşturuluyor
    }

    // Kopya kurucu (Deep Copy yapılmalı)
    Employee(const Employee& other)
        : name(other.name) {
        address = new Address(*other.address); // Dinamik nesneyi kopyalıyoruz
    }

    // Atama operatörü (Deep Copy yapılmalı)
    Employee& operator=(const Employee& other) {
        if (this != &other) { // Kendi kendine atamayı engelle
            delete address; // Eski Address nesnesini serbest bırak
            name = other.name; // İsmi kopyala
            address = new Address(*other.address); // Yeni Address nesnesi oluştur
        }
        return *this;
    }

    // Destructor (Dinamik belleği serbest bırak)
    ~Employee() {
        delete address;
    }

    // Çalışanı yazdırmak için bir yardımcı fonksiyon
    void display() const {
        cout << "Name: " << name << endl;
        address->display();
    }
};

int main() {
    // İlk çalışanı oluşturuyoruz
    Employee emp1("Ali", "Main Street", 42);

    cout << "Employee 1:" << endl;
    emp1.display();

    // İkinci çalışanı kopya kurucu ile oluşturuyoruz
    Employee emp2 = emp1;

    cout << "\nEmployee 2 (Copied from Employee 1):" << endl;
    emp2.display();

    // Atama operatörünü test ediyoruz
    Employee emp3("Veli", "Elm Street", 13);
    emp3 = emp1;

    cout << "\nEmployee 3 (Assigned from Employee 1):" << endl;
    emp3.display();

    return 0;
}
