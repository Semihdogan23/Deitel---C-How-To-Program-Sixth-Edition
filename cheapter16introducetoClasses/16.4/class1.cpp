#include<iostream>
using namespace std;
#include<string>

class Gradebook{
public:
void displaymessage(string parameter){

    cout<<"Welcome the class gradebook\n"<<parameter<<"!";
}


};

int main(){
string xx;
Gradebook xl;
cout<<"please enter the prompt:\t";
getline(cin,xx);
cout<<xx<<"\n";
xl.displaymessage(xx);
}