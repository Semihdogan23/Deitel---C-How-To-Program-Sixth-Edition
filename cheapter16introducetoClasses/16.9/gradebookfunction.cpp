#include<iostream>
#include<string>
using namespace std;
#include"gradebook.h"

gradebook::gradebook(string name){
    setfunction(name);

}
void gradebook::setfunction(string name){
    coursename=name;

}

string gradebook::getfunction(){
    return coursename;
}
void gradebook::display(){
    cout<<"wWelcome to the grade book for\n"<<getfunction()<<"!"<<endl;
}