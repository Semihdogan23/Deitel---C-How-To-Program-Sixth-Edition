#include<iostream>
#include<iomanip>
#include"Baseplus.h"
#include"commission.h"
#include"commission.cpp"
#include"Baseplus.cpp"
using namespace std;

int main(){
Commissioon commissionemployee("c","doğan","425470",10000,.06);
Commissioon *commissionptr=0;

Baseplus baseplusemployee("vf","canyatan","78954-644",5222,.04,300);
Baseplus *basepluscommissionptr=0;

cout<<fixed<<setprecision(2);
cout<<"print base-class and derived-class objects:\n\n";
cout<<"\n\n";
baseplusemployee.print();
commissionptr=&commissionemployee;
cout << "\n\n\nCalling print with base-class pointer to "
<< "\nbase-class object invokes base-class print function:\n\n";
commissionptr->print();
basepluscommissionptr=&baseplusemployee;
cout << "\n\n\nCalling print with derived-class pointer to "
<< "\nderived-class object invokes derived-class "
<< "print function:\n\n";
basepluscommissionptr->print(); 

commissionptr=&baseplusemployee;
cout << "\n\n\nCalling print with base-class pointer to "
<< "derived-class object\ninvokes base-class print "
<< "function on that derived-class object:\n\n";
commissionptr->print();

}