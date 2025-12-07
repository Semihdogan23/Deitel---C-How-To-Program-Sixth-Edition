#include"destructorfuction.cpp"
#include<iostream>


void crate(void);

CreateandDestroy first(1,"(global before main)");

int main(){
cout<<"\n main function: execution begins "<<endl;
CreateandDestroy second(2,"(local automatic in main)");
static CreateandDestroy third(3,"(local static main)");
crate();

cout<<"\n main function:execution resumes"<<endl;
CreateandDestroy fourth(4,"local automatic in main");
cout<<"\n main funtion:execution ends"<<endl;
}
void crate(void){
cout<<"\n create fuction:execution begins"<<endl;
CreateandDestroy fifth(5,"(local automatic in crate)");
static CreateandDestroy sixth(6,"local static in crate");
CreateandDestroy seventh(7,"(local automatic in crate)");
cout<<"\n create funciton:execution ends"<<endl;
}