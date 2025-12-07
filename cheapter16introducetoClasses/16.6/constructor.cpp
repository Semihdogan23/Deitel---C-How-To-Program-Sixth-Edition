#include<iostream>
#include<string>
using namespace std;


class Gradebook{
public:
Gradebook(string name)// constructors cannot return values (or even void)
{
setcoursename(name);
}
void setcoursename(string namex){
coursname=namex;
}
string getcoursename(){
    return coursname ; 
}
void displaymessage(){
cout<<"welcome the our gradeclass\n"<<getcoursename()<<"!"<<endl;
}
private:
string coursname;
};

int main(){

    
    Gradebook xl("CS101 Introduction to C++ Programming");
    Gradebook xlx("CS102 Data Structures in C++");

    cout<<"gradebook1 crated for course: "<<xl.getcoursename()<<"\ngradebokk2 cradet for course: "<<xlx.getcoursename()<<endl;



}