#include"composition.h"
#include<iostream>
using namespace std;

Date::Date(int m,int d,int y){

if(m>0&&m<monthperyear)
month=m;
else{
month=1;
cout<<"invaliad month("<<m<<") set to 1.\n";
}
year=y;
day=cheakday(d);
//output date object to show when its constructor is called 
cout<<"date object constructor for date\n";
print1();
}
void Date::print1()const{
cout<<month<<"/"<<day<<"/"<<year<<"\n";
}
Date::~Date(){
cout<< "Data object destructor for date\n";
print1();
}
int Date::cheakday(int testday)const{
static const int dayspermonth[monthperyear+1]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//determine whether testday is valid for specified month
if(testday>0&& testday<=dayspermonth[month])
return testday;
//feburary check for leap year
if(month==2&&testday==29&&(year%400==0||(year%4==0&&year%100!=0)))
return testday;
cout<<"invalid day("<<testday<<") set to 1.\n";
return 1; //leave object in consisten state if bad value

}