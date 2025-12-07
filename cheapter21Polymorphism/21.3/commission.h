#ifndef COMMİSSİON_H
#define COMMİSSİON_H
#include<string>
using namespace std;
class Commissioon{
public:
Commissioon(string&,string&,string&,double=0.0,double=0.0);
void setFirstName(string&);
string getFirstName();

void setLastName(string&);
string getLastName();


void setSocialSecurtyNumber(string&);
string getSocialSecurtyNumber();

void setGrossales(double);
double getGrossales();
virtual double earnings();
void setCommissionRate(double);
double getCommissionrate();
 virtual  void print();
private:
string firstname;
string lastname;
string socialsecurtynumber;
double grossales;
double commissionrate;

};
#endif