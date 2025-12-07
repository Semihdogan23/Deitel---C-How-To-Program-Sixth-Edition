#include<iostream>
using namespace std;


inline double cube(const double side){
   return side*side*side;
}
int main(){
    int sidevalue;
    for(int i=0;i<3;i++){
        cout<<"enter the cube of lenght: ";
        cin>>sidevalue;
        cout<<"\nvolume of cube side "<<sidevalue<<" is: "<<cube(sidevalue)<<endl;

    }
}