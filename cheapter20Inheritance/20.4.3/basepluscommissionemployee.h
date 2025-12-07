#ifndef BASEPLUSCOMMİSSİONEMPLOYEE_H
#define BASEPLUSCOMMİSSİONEMPLOYEE_H

#include<string>
#include"commission.h"
using namespace std;
class basederived:public CommmissionEmployee
{
private:
    double baseSalary;
public:
    basederived(const string&,const string&,const string&,double=0.0,double=0.0,double=0.0);
    void setBaseSalary(double);
    double getBaseSalary();
    double earnings()const;
    void print()const;
};

#endif