#include<iostream>
#include<string>
#include"commission.h"
using namespace std;

Commissioon::Commissioon(string &first,string &last,string &ssn,double sales,double rate):firstname(first),lastname(last),socialsecurtynumber(ssn)
{
    setGrossales(sales);
    setCommissionRate(rate);
}
void Commissioon::setFirstName(string &first){
    firstname=first;
}
string Commissioon::getFirstName(){
    return firstname;
}
void Commissioon::setLastName(string&last){
    lastname=last;
}
string Commissioon::getLastName(){
    return lastname;
}
void Commissioon::setSocialSecurtyNumber(string &ssn){
    socialsecurtynumber=ssn;
}
string Commissioon::getSocialSecurtyNumber(){
    return socialsecurtynumber;
}
void Commissioon::setGrossales(double sales){
    grossales=(sales<0.0)?0.0:sales;
}
double Commissioon::getGrossales(){
    return grossales;
}
void Commissioon::setCommissionRate(double rate){
    commissionrate=(rate>0.0&&rate<1.0)?rate:0.0;
}
double Commissioon::getCommissionrate(){
    return commissionrate;
}
double Commissioon::earnings(){
    return getCommissionrate()*getGrossales();
}
void Commissioon::print(){
    cout<<"commission employee"<<getFirstName()<<' '<<getLastName()<<"\n social securty number: "<<getSocialSecurtyNumber()<<"\n gross sales: "<<getGrossales()<<"\n commission rate: "<<getCommissionrate();
}
