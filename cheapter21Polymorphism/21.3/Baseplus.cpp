#include<iostream>
#include"Baseplus.h"
using namespace std;

Baseplus::Baseplus(string &first,string&last,string&ssn,double sales,double rate,double salary):Commissioon(first,last,ssn,sales,rate){
    SetBasesalary(salary);
}
void Baseplus::SetBasesalary(double salary){
    basesalary=(salary<0.0)?0.0:salary;
}
double Baseplus::getbasesalary(){
  return  basesalary;
}

double Baseplus::earnings(){
    return getbasesalary()+Commissioon::earnings();
}
void Baseplus::print(){
    cout<<"base- salaried";
    Commissioon::print();
    cout<<"\n base salary: "<<getbasesalary();
}
