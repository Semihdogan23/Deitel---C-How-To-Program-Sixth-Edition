#include<iostream>
#include"basepluscommissionemployee.cpp"
#include"commission.h"
#include<iomanip>
#include"commissionemployee.cpp"
#include"basepluscommissionemployee.h"
using namespace std;
int main(){
    CommmissionEmployee employee(
        "Sue","Jones","222-22-2222",10000,.06
    );
//set floating point output formatting 
cout<<fixed<<setprecision(2);
//get commission employee date
cout<<"Employee information obrained by get functiın :\n"<<"\n First name is "<<employee.getfirstname()<<"\n last name is"<<employee.getlastname()<< "\nSocial security number is "
<< employee.getsocialsecurtynymber()
<< "\nGross sales is " << employee.getcommissinrate()
<< "\nCommission rate is " << employee.getcommissinrate() << endl;
employee.setgrossales( 8000 ); // set gross sales
employee.setcommissionrate( .1 ); // set commission rate
cout << "\nUpdated employee information output by print function: \n"
<< endl;
employee.print(); // display the new employee information
// display the employee's earnings
cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
} // end main

