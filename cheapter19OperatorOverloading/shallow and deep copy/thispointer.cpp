#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;    // Çalışanın adı
    int id;         // Çalışanın kimlik numarası
    double salary;  // Çalışanın maaşı

public:
    // Constructor
    Employee(const string &name, int id, double salary) {
        // this pointer ile aynı isimli parametreler ve üye değişkenler ayrılır
        this->name = name;
        this->id = id;
        this->salary = salary;
    }

    // Setters (Fonksiyon zincirleme için this pointer kullanılır)
    Employee &setName(const string &name) {
        this->name = name;
        return *this; // this pointer ile nesnenin kendisi döndürülür
    }

    Employee &setId(int id) {
        this->id = id;
        return *this;
    }

    Employee &setSalary(double salary) {
        this->salary = salary;
        return *this;
    }

    // Getter (this pointer olmadan direkt erişim)
    string getName() const { return name; }
    int getId() const { return id; }
    double getSalary() const { return salary; }

    // print function (this pointer ile nesneye doğrudan erişim)
    void print() const {
        cout << "Employee Info: "
             << "Name: " << this->name
             << ", ID: " << this->id
             << ", Salary: $" << this->salary << endl;
    }

    // Compare function (this pointer ile başka bir nesneyle karşılaştırma)
    bool isEqual(const Employee &other) const {
        return (this->id == other.id && this->name == other.name);
    }
};

int main() {
    // Nesne oluşturma
    Employee emp1("Alice", 101, 5000.0);
    Employee emp2("Bob", 102, 4500.0);

    // this pointer ile erişim
    cout << "Initial Employee Info:" << endl;
    emp1.print();
    emp2.print();

    // Fonksiyon zincirleme ile güncelleme
    emp1.setName("Alicia").setId(201).setSalary(5500.0);
    cout << "\nAfter Updating emp1:" << endl;
    emp1.print();

    // Nesneleri karşılaştırma
    cout << "\nComparing emp1 and emp2:" << endl;
    if (emp1.isEqual(emp2)) {
        cout << "emp1 and emp2 are the same." << endl;
    } else {
        cout << "emp1 and emp2 are different." << endl;
    }

    return 0;
}
