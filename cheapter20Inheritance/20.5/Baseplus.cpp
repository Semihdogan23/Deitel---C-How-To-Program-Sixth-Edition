#include<iostream>
#include"Baseplus.h"
#include"Commission.h"
using namespace std;

Baseplus::Baseplus(const string &first,const string &last,const string &ssn,double sales,double rate,double salary )
: CommissionEmployee( first, last, ssn, sales, rate ){
    setbasesalary(salary);
    cout << "BasePlusCommissionEmployee constructor: " << endl;
print();
cout << "\n\n";
}
Baseplus::~Baseplus()
{
cout << "BasePlusCommissionEmployee destructor: " << endl;
print();
cout << "\n\n";
} 
void Baseplus::setbasesalary(double salary){
baseSalary=(salary<0.0)?0.0:salary;
}
double Baseplus::earnings() 
{
return getbasesalary() + CommissionEmployee::earnings() ;
} // end function earnings
void Baseplus::print() 
{
cout << "base-salaried ";
// invoke CommissionEmployee's print function
CommissionEmployee::print();
cout << "\nbase salary: "<< getbasesalary();
}
double Baseplus::getbasesalary(){
    return baseSalary;
}