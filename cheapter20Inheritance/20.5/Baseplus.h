#ifndef BASEPLUSCOMMİSSİONEMPLOYEE_H
#define BASEPLUSCOMMİSSİONEMPLOYEE_H
#include<string>
#include"Commission.h"
using namespace std;

class Baseplus:public CommissionEmployee{
public:
Baseplus(const string&,const string&,const string&,double=0.0,double=0.0,double=0.0);
~Baseplus();
void setbasesalary(double);
double getbasesalary();
double earnings();//calculate earnings
void print();//print baseplus object
private:
double baseSalary;
};
#endif