#include<iostream>
#include<string>
using namespace std;

class Gradebook{
private:
string coursname;
public:
void setfunction(string name){
    coursname=name;
}
string getfunction(){
    return coursname;
}
void displaymessage(){
    cout<<"welcome the class gradebook\n"<<getfunction()<<"!"<<endl;
}


};

int main(){


string xx;
Gradebook xl;

cout<<"inital course name is:\n"<<xl.getfunction();


cout<<"please enter the promp:  ";
getline(cin,xx);
cout<<xx<<"\n";

xl.setfunction(xx);

xl.displaymessage();



}