#include"gradebookfuntion.cpp"
#include<iostream>
using namespace std;

int main(){
gradebook gradeBook1( "CS101 Introduction to Programming in C++" );
gradebook gradeBook2( "CS102 C++ Data Structures" );
// display each GradeBook's courseName
cout << "gradeBook1's initial course name is: "
<< gradeBook1.getfunction()<< "\ngradeBook2's initial course name is: "<< gradeBook2.getfunction() << endl;
// modify myGradeBook's courseName (with a valid-length string)
gradeBook1.setfunction( "CS101 C++ Programming" );
// display each GradeBook's courseName
cout << "\ngradeBook1's course name is: "
<< gradeBook1.getfunction()
<< "\ngradeBook2's course name is: "
<< gradeBook2.getfunction() << endl;

}