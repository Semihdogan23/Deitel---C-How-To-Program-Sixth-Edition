#include<iostream>
using namespace std;
double squarebyvalue(int);
void squarebyreferance(int&); 

int main(){
int x,y;
cout<<"enter the first number";
cin>>x;
cout<<"\nfirst number is: "<<x<<"\nvalue the returned by squarebyvalue "<<squarebyvalue(x);
cout<<"\nx= "<<x<<"\tafter the returned by squarebyvalue "<<endl;

cout<<"enter the second number";
cin>>y;
cout<<"\nsecond number is "<<y;
squarebyreferance(y);
cout<<"\ny= "<<y<<"\t after the retured by squarebyreferance"<<endl;

}
double squarebyvalue(int number){
    return number*=number;
}
void squarebyreferance(int &numberx){
    numberx*=numberx;
}