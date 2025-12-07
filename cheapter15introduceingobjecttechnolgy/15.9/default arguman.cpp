#include<iostream>
using namespace std;

int boxvolume(int lenght=1,int widht=1,int height=1);


int main(){
cout<<"default argumant with box volume is: \n"<<boxvolume()<<endl;
cout<<"\nThe volume of box with 10 lenght,\n"<<"widht 1 and height 1 is:"<<boxvolume(10);
cout<<"\nThe volume of box with 10 lenght,\n "<<"widht 5 and heidht 1 is:"<<boxvolume(10,5);
cout<<"\nThe volume of box with 10 lenght,\n"<<"widht 5 and height 18 is:"<<boxvolume(10,5,18);
}
int boxvolume(int lenght,int widht,int height){
    return lenght*widht*height;
}