#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int* ptr = arr;

    while (ptr != (arr + 4)) { // Dizinin son elemanından bir sonrasına kadar
        cout << *ptr << " ";  // 1. Çıktı nedir?
        ptr++;                // İşaretçiyi bir sonraki elemana kaydır
    }
    return 0;

}




// #include<iostream>
// using namespace std;


// class Count {
// public:
// void setx(int a){
//     x=a;
// }

//  void print(){
//     cout<<x<<endl;
//  }
//  private:
// int x;
// };
// int main(){
// Count counter;
// Count *counterpointer=&counter;
// Count &counterref=counter;



// cout<<"set 1:\n";
// counter.setx(1);
// counter.print();

// cout<<"set 2:\n";
// counterref.setx(2);
// counterref.print();

// cout<<"set 4\n:";
// counterpointer->setx(4);
// counterpointer->print();



// }