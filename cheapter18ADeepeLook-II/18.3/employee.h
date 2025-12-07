#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include"composition.h"
#include<string>
using namespace std;
class employee{
public:
employee(const string &,const string&,const Date &,const Date&);
void print()const;
~employee();//provided to confirm destruction order
private:
string firstname;//composition member object
string lastname;//composition memeber object
const Date birthdate;//composition member object
const Date  hireday;//composition member object
};

#endifko