#ifndef COMMİSSİON_H
#define COMMİSSİON_H
#include<string>
using namespace std;
class CommmissionEmployee

{
protected:
    string firstname;
    string lastname;
    string socialsecuritynumber;
    double grossales;
    double commissionrate;
public:
    CommmissionEmployee
    (const string&,const string&,const string&,double=0.0,double=0.0);
    void setfirsname(const string &);//set first name
    string getfirstname() const;//get first name
    void setlastname(const string&);
    string getlastname()const;
    void socialsecurynumber(const string &);
    string getsocialsecurtynymber()const;
    void setgrossales(double);
    double getgrosssales()const;
    void setcommissionrate(double);
    double getcommissinrate()const;
    double earnings()const;
    void print()const;
    };




#endif