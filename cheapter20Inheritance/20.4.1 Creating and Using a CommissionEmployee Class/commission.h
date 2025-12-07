#ifndef COMMİSSİON_H
#define COMMİSSİON_H
#include<string>
using namespace std;


class CommissionEmployee{

public:
CommissionEmployee(const string&,const string&,const string&,double=0.0,double=0.0);
void setFirstName(const string&);
string getfirstname()const;
void setLastName(const string&);
string getlastname();
void setSocialSecuriytNumber(const string&);
string getsocialsecurytnumber();
void setGrossSales(double);
double getGrossSales()const;
void setCommissionRate(double);
double getCommissionRate();
double earnings();
void print();
private:
string firstName;
string lastName;
string socialSecuryNumber;
double grosSales;
double commissionRate;


};

#endif