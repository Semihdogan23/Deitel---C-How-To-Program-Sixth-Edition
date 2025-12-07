#ifndef DESTRUCTOR_H
#define DESTRUCTOR_H
#include<string>
using namespace std;

class CreateandDestroy{
public:
CreateandDestroy(int ,string );
~CreateandDestroy();

private:
int objectID;
string message;
};

#endif