#include<iostream>
#include"memberinitiliazier.cpp"
using namespace std;

int main(){
Increment value(10,5);
cout<<"Before incrementing: ";
value.print();

for(  int j=1;j<=3;j++){
value.addIncrement();
cout<<"after increment "<<j<<": ";
value.print();
}


}