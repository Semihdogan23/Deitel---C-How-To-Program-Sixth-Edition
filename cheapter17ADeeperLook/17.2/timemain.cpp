#include"timefucntion.cpp"

int main(){
  Time s;

  cout<<"initial Time standart is:\n";
  s.printstandart();
  cout<<"\ninitail Time universal is:";
  s.printuniversal();

s.settime(14,33,99);

cout<<"\ncurrent time zone for time standart\n";
s.printstandart();
cout<<"\ncurrent time zone for universal time:\n";
s.printuniversal();

s.settime(26,7,48);
cout<<"\nlast time zone for universal time :\n";
s.printuniversal();

cout<<"\nlast time zone for standart time line is :\n";

s.printstandart();




}