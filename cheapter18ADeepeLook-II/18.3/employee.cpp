#include<iostream>
#include"employee.h"
#include"composition.h"
using namespace std;

employee::employee(const string&first,const string&last,const Date &date0birht,const Date &hire0date):firstname(first),lastname(last),birthdate(date0birht),hireday(hire0date){
cout<<"employee object constructor"<<firstname<<' '<<lastname<<endl;
}
void employee::print()const{

    cout<<lastname<<", "<<firstname<<" hired: ";
    hireday.print1();
    cout<<" birthday: ";
    birthdate.print1();
    
}
employee::~employee(){

cout<<"employee object destructor: "<<lastname<<", "<<firstname<<endl;
}