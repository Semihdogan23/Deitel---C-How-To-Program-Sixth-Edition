#include"sales.h"
#include<iostream>
#include<iomanip>

using namespace std;


Sales::Sales(){
for(int i=0;i<mountperyears;i++){
sales[i]=0.0;
}
}

void Sales::getfromuser(){
double user;
for(int i=0;i<mountperyears;i++){
cout<<"enter the sales amount for mounths: "<<i<<endl;
cin>>user;
setsales(i,user);
}
}

void Sales::setsales(int m,double s){
if(m>=0 && m<mountperyears&&s>0){
    sales[m]=s;
}
else
cout<<"invalid data ";
}

void Sales::printannual(){
cout<<setprecision(2)<<fixed<<"totalannualsales is :\n"<<totalannual();
}

double Sales::totalannual(){
double total=0.0;
for(int i;i<mountperyears;i++){
total+=sales[i];
}
return total;
}