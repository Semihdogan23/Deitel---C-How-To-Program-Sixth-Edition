#ifndef BASEPLUS_H
#define BASEPLUS_H
#include"commission.h"
using namespace std;
class Baseplus:public Commissioon{
public:
Baseplus(string&,string&,string&,double=0.0,double=0.0,double=0.0);
void SetBasesalary(double);
double getbasesalary();
virtual double earnings();
virtual void print();
private:
double basesalary;

};

#endif