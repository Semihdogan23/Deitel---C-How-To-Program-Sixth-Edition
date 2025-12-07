#include<iostream>
#include<iomanip>
#include"commissionemployee.cpp"
using namespace std;
int main(){

CommissionEmployee employee("sue","jones","222-22-2222",10000,.06);

cout<<fixed<<setprecision(2);

cout<<"employee information obtained by get functions:\n"<<"\nfirst name is "<<employee.getfirstname()<<"\nlast name is "<<employee.getlastname()<<"\nsocial securiyt number is "<<employee.getsocialsecurytnumber()<<"\n Gross sales is "<<employee.getGrossSales()<<"\n commission rate is "<<employee.getCommissionRate()<<endl;
employee.setGrossSales(8000);
employee.setCommissionRate(.1);
cout<<"\n updated employee information output by print fucntion: \n"<<endl;
//employee.print();
cout<<"\n\n employee's earining: $"<<employee.earnings()<<endl;



}