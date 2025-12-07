#ifndef GRADEBOOK_H
#define GRADEBOOK_H


#include<string>
using namespace std;

class gradebook{
    public:
    gradebook(string);
    void setfunction(string);
    string getfunction();
    void display();
    private:
    string coursename;
};
#endif