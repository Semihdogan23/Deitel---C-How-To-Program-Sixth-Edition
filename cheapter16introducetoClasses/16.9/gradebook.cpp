#include"gradebookfunction.cpp"
using namespace std;

int main(){
    gradebook xl("CS101 Introduction to C++ Programming");
    gradebook xlx("CS102 Data Structures in C++" );

    cout<<"gradeBook1 created for course: "<<xl.getfunction()<<"\ngradeBook2 created for course: "<<xlx.getfunction();


}