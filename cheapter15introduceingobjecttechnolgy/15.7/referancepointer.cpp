#include<iostream>
using namespace std;


int main(){
    int x=32;
    int& cref=x;
    cref++;
    cout<<"x= "<<x<<" cref  = "<<cref;
    cref=98;
    cout<<"x= "<<x<<" cref  = "<<cref;
}