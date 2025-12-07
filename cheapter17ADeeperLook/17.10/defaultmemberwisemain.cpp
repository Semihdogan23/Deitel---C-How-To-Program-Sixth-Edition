#include"defaultmemberwise.cpp"
#include<iostream>
using namespace std;

int main(){

Date Date1(9,8,1864);
Date Date2;

cout<<"date=\n";
Date1.print();
cout<<"\ndatel=\n";
Date2.print();

Date2=Date1;

cout<<",\nwith change value:\n";
Date2.print();





}