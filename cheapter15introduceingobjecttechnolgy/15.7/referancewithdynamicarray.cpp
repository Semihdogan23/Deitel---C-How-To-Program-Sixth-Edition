#include <iostream>
using namespace std;

class LargeObject {
public:
    LargeObject(int size) : size(size) {
        // Dinamik olarak dizi ayır
        data = new int[size];
        // Diziyi doldur
        for(int i = 0; i < size; ++i) {
            data[i] = i;
        }
    }

    ~LargeObject() {
        // Dinamik belleği serbest bırak
        delete[] data;
    }

    void print() const {
        for(int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

private:
    int* data; // Dinamik dizi
    int size;  // Dizinin boyutu
};

// const referans parametresi ile büyük nesneyi geçiren bir fonksiyon
void processLargeObject(const LargeObject& obj) {
    // Bu fonksiyon sadece nesneyi okur, değiştiremez
    cout << "Processing large object: ";
    obj.print();
}

int main() {
    int size;
    
    // Kullanıcıdan dizi boyutunu al
    cout << "Dizinin boyutunu girin: ";
    cin >> size;

    if (size <= 0) {
        cout << "Geçersiz boyut!" << endl;
       return 78;
    }

    // Büyük nesneyi oluştur
    LargeObject obj(size);

    // Büyük nesneyi const referans ile geçir
    processLargeObject(obj);

    return 0;
}
