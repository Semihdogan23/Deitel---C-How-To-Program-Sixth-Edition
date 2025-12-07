#include<iostream>
#include"BasePlusCommissionEmployee.h"
#include"CommissionEmployee.h"
using namespace std;

Baseplus::Baseplus(const string &first,const string &last,const string &ssn,double sales,double rate,double salary )
: CommissionEmployee( first, last, ssn, sales, rate ){
    setbasesalary(salary);
}
void Baseplus::setbasesalary(double salary){
baseSalary=(salary<0.0)?0.0:salary;
}
double Baseplus::earnings(){
return baseSalary+(commissionRate *grossSales);
}
void Baseplus::print(){
// derived class cannot access the base class’s private data
cout << "base-salaried commission employee: " << firstName << ' '
<< lastName << "\nsocial security number: " << socialSecurityNumber
<< "\ngross sales: " << grossSales
<< "\ncommission rate: " << commissionRate
<< "\nbase salary: " << baseSalary;
}