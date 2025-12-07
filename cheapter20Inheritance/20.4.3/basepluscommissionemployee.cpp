#include<iostream>
#include "basepluscommissionemployee.h"
using namespace std;

basederived::basederived(const string&first,const string& last,const string&ssn,double sales,double rate,double salary):CommmissionEmployee(first,last,ssn,sales,rate)
{
    setBaseSalary(salary);
}
void basederived::setBaseSalary(double salary){
    baseSalary=(salary<0.0)?0.0:salary;
}
double basederived::getBaseSalary(){
    return baseSalary;
}
double basederived::earnings()const{
    //derived class cannot acces the base class' s private data
    return baseSalary+(commissionrate*grossales);
}
void basederived::print()const{
    cout << "base-salaried commission employee: " << firstname << ' '
<< lastname << "\nsocial security number: " << socialsecuritynumber
<< "\ngross sales: " <<grossales
<< "\ncommission rate: " << commissionrate
<< "\nbase salary: " << baseSalary;
} // end function print
