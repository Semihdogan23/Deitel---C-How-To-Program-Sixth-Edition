#include "time.h"
#include<iostream>
#include<iomanip>
using namespace std;
Time::Time(){

    hour=0;
    second=0;
    minute=0;
}

void Time::settime(int h,int m,int s ){
hour=(h>0&&h<24)?h:0;
minute=(m>0&&m<60)?m:0;
second=(s>0&&s<60)?s:0;
}

void Time::printuniversal(){
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setfill('0')<<setw(2)<<minute<<":"<<setw(2)<<second;
}

void Time::printstandart(){
    cout<<((hour==0||hour==12)?12:hour%12)<<":"<<setfill('0')<<setw(2)<<minute<<":"<< setw(2)<<second<<(hour<12?" AM ":" PM ");


// cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 ) << ":"
// << setfill( '0' ) << setw( 2 ) << minute << ":" << setw( 2 )
// << second << ( hour < 12 ? " AM" : " PM" );
}