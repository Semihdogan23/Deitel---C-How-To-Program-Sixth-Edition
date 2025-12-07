#ifndef TİME_H
#define TİME_H

class Time{
public:
Time();
void settime(int,int,int);
void printstandart();
void printuniversal();
private:
int hour;
int minute;
int second;
};
#endif