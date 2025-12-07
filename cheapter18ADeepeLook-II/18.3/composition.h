#ifndef COMPOSİTİON_H
#define COMPOSİTİON_H

class Date{
public:
static const int monthperyear=12;
Date(int=1,int=1,int=1900);
void print1() const;
~Date();
private:
int month;
int year;
int day;
int cheakday(int)const;//utility function
};

#endif
