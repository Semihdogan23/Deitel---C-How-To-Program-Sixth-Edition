#include<iomanip>
#include"stream.h"
using namespace std;

//overloaded strem insertion operator; cannot ve 
// a memeber fuction if we would like to invoke it with
//cout<<somePhoneNumber;
ostream &operator<<(ostream& output,const PhoneNumber &number){
    output<<"("<<number.areaCode<<")"<<number.exchange<<"-"<<number.line;
    return output; //enable cout <<a<<b<<c;
}//end funciton operator<<

//overloaded stream extraction operator;cannot be
//a member function if we would like to invoke it with
// cin>>somePhoneNumber;
istream &operator>>(istream &input,PhoneNumber &number){
input.ignore();//skip
input>>setw(3)>>number.areaCode;//input area code
input.ignore(2);
input>>setw(3)>>number.exchange;
input.ignore();//skip dash(-)
input>>setw(4)>>number.line;
return input;//enables cin>>a>>b>>c;

}