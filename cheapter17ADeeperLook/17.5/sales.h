#ifndef SALES_H
#define SALES_H



class Sales{
public:
static const int mountperyears=12;
Sales();
void getfromuser();
void  setsales(int,double);
void printannual();


private:
double sales[mountperyears];
double totalannual();

};



#endif