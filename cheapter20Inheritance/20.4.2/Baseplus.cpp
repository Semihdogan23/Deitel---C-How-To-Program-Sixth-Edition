#include<iostream>
#include"BASEPLUS.h"
using namespace std;

 BasePlusCommissionEmployee:: BasePlusCommissionEmployee(const string &first,const string &last,const string & socialnumber,double sales,double rate,double salary){
    firstName=first;
    lastName=last;
    socialSecurityNumber=socialnumber;
    setGrossSales(sales);
    setCommissionRate(rate);
    setBaseSalary(salary);
}
 // set first name
void BasePlusCommissionEmployee::setFirstName( const string &first )
{
firstName = first; // should validate
} // end function setFirstName
// return first name
string BasePlusCommissionEmployee::getFirstName() const
{
return firstName;
} // end function getFirstName
// set last name
void BasePlusCommissionEmployee::setLastName( const string &last )
{
lastName = last; // should validate
} // end function setLastName
// return last name
string BasePlusCommissionEmployee::getLastName() const
{
return lastName;
} // end function getLastName
// set social security number
void BasePlusCommissionEmployee::setSocialSecurityNumber(
const string &ssn )
{
socialSecurityNumber = ssn; // should validate
} // end function setSocialSecurityNumber
// return social security number
string BasePlusCommissionEmployee::getSocialSecurityNumber() const
{
return socialSecurityNumber;
} // end function getSocialSecurityNumber
// set gross sales amount
void BasePlusCommissionEmployee::setGrossSales( double sales )
{
grossSales = ( sales < 0.0 ) ? 0.0 : sales;
} // end function setGrossSales
// return gross sales amount
double BasePlusCommissionEmployee::getGrossSales() const
{
return grossSales;
} // end function getGrossSales
// set commission rate
void BasePlusCommissionEmployee::setCommissionRate( double rate )
{
commissionRate = ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0;
} // end function setCommissionRate
// return commission rate
double BasePlusCommissionEmployee::getCommissionRate() const
{
return commissionRate;
} // end function getCommissionRate
// set base salary
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
baseSalary = ( salary < 0.0 ) ? 0.0 : salary;
} // end function setBaseSalary
double BasePlusCommissionEmployee::getBaseSalary()const{
    return baseSalary;
} 
double BasePlusCommissionEmployee::earnings()const{
    return baseSalary +(commissionRate*grossSales);
}
void BasePlusCommissionEmployee::print()const{
    cout<<"base- salaried commission employee: "<<firstName<<' '<<lastName<<"\nsocial security number"<<socialSecurityNumber<<"\ngross sales"<<grossSales<<"\ncommission rate"<<commissionRate<<"\nbasesalary"<<baseSalary;
}