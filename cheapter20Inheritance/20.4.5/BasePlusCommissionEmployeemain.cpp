#include<iostream>
#include<iomanip>
#include"BasePlusCommissionEmployee.cpp"
using namespace std;

int main(){
Baseplus employee("Semih","Doğan","425470",7000,.07,400);
cout<<fixed<<setprecision(2);

cout<<"Employee information obtained by get function:\n"<<"\n first name is: "<<employee.getFirstName()<<"\n last name is:"<<employee.getLastName()<<"\n socialsecurty number is: "<<employee.getSocialSecurityNumber()<<"\n grosSales is "<<employee.getGrossSales()<<"\n commision rate is: "<<employee.getCommissionRate()<<"\n base salary is : "<<employee.getbasesalary();
employee.setbasesalary(1000);
cout<<"\n uodated employee information output by print function: \n"<<endl;
employee.print();
cout<<"\n\nEmployee's earnings: $"<<employee.earnings()<<endl;

}