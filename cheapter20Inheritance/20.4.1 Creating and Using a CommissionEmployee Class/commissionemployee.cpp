#include<iostream>
#include"commission.h"
using namespace std;

CommissionEmployee::CommissionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate){
firstName=first;
lastName=last;
socialSecuryNumber=ssn;
setGrossSales(sales);
setCommissionRate(rate);
}
void CommissionEmployee::setFirstName(const string &first){
firstName=first;
}
string CommissionEmployee::getfirstname()const{
    return firstName;
}
void CommissionEmployee::setLastName(const string &last){
lastName=last;
}
string CommissionEmployee::getlastname(){
    return lastName;
}
 void CommissionEmployee::setSocialSecuriytNumber(const string &ssn){
    socialSecuryNumber=ssn;
}
string CommissionEmployee::getsocialsecurytnumber(){
    return socialSecuryNumber;
}
void CommissionEmployee::setGrossSales(double sales){
grosSales=(sales<0.0)?0.0:sales;
}
double CommissionEmployee::getGrossSales()const{
return grosSales;
}
void CommissionEmployee::setCommissionRate( double rate )
{
commissionRate = ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0;
}
double CommissionEmployee::getCommissionRate(){
return commissionRate;
}
double CommissionEmployee::earnings(){
    return commissionRate*grosSales;
}
void CommissionEmployee::print(){
    cout<<"commission employee: "<<firstName<<' '<<lastName<<' '<<"\n  socail securty number: "<<socialSecuryNumber<<"\n gross sales: "<<grosSales<<"\n commission rate: "<<commissionRate;
}