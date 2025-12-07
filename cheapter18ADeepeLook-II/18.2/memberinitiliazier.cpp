#include<iostream>
#include"memberinitiliazier.h"
using namespace std;

Increment::Increment(int c,int i):count(c),incremant(i)
{}
void Increment::print()const{

    cout<<"count= "<<count<<   " incremant= "<<endl;
}