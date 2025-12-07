#include"gradebook.h"
#include<string>
#include<iostream>
using namespace std;
gradebook::gradebook(string name){
    setfunction(name);
}
void gradebook::setfunction(string namex){
    if(namex.length()<=25)
        coursename=namex;
    
    if(namex.length()>25)
        coursename=namex.substr(0,25);
    cout<<"Name \"" <<namex<< "\" exceeds maximum length (25).\n"<< "Limiting courseName to first 25 characters.\n" << endl;
 }
string gradebook::getfunction(){
    return coursename;
}
void gradebook::display(){
    cout<<"Welcome to the grade book for\n" << getfunction()
<< "!" << endl;
}

