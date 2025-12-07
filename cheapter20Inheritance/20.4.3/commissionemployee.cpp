#include<iostream>
#include"commission.h"
using namespace std;
//constructor
CommmissionEmployee::CommmissionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate){
    firstname=first;//should validate
    lastname=last;
    socialsecuritynumber=ssn;
    setgrossales(sales);
    setcommissionrate(rate);
}
void CommmissionEmployee::setfirsname(const string &first){
    firstname=first;
}
string CommmissionEmployee::getfirstname()const{
    return firstname;
}
void CommmissionEmployee::setlastname(const string &last){
    lastname=last;
}
string CommmissionEmployee::getlastname()const{
    return lastname;
}
void CommmissionEmployee::socialsecurynumber(const string &ssn){
    socialsecuritynumber=ssn;
}
string CommmissionEmployee::getsocialsecurtynymber()const{
    return  socialsecuritynumber;
}
void CommmissionEmployee::setgrossales(double sales){
    grossales=(sales<0.0)?0.0:sales;
}
double CommmissionEmployee::getgrosssales()const{
    return grossales;
}
void CommmissionEmployee::setcommissionrate(double rate){
    commissionrate = ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0;
}
double CommmissionEmployee::getcommissinrate()const{
    return commissionrate;
}
double CommmissionEmployee::earnings()const{
    return commissionrate*grossales;
}
//print commissionremployee object

void CommmissionEmployee::print()const{
    cout<<"commision employee:"<<firstname<<' '<<lastname<<"\n sovial security number :"<<socialsecuritynumber<<"\ngross sales:"<<grossales<<"\n commision rate:"<<commissionrate;
}