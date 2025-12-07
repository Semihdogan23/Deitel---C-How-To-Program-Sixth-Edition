#include<iostream>
#include"employee.cpp"
#include"composition.cpp"
using namespace std;

int main(){
Date birth(7,24,1949);
Date hire(3,12,1922);
employee manager("bob","blue",birth,hire);

cout<<endl;
manager.print();

cout<<"\n test date constructor with invalid values:\n";
Date lastday0off(14,35,1994);
cout<<endl;






}