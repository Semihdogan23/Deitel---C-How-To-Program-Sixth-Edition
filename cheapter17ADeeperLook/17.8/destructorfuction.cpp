#include<iostream>
#include"destructor.h"
using namespace std;

CreateandDestroy::CreateandDestroy(int ID,string messageString){
objectID=ID;
message=messageString;
cout<<"Object  "<<objectID<<"  constructor runs   "<<message<<endl;
}

CreateandDestroy::~CreateandDestroy(){
cout<<(objectID==1||objectID==6?"\n":"");

 cout << "Object " << objectID << "destructor runs"<<message<<endl;

}