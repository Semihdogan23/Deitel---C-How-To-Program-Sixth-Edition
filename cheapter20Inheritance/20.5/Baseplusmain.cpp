#include<iostream>
#include<iomanip>
#include"Baseplus.cpp"
using namespace std;
int main()
{
// set floating-point output formatting
cout << fixed << setprecision( 2 );
{ // begin new scope
CommissionEmployee employee1(
"Bob", "Lewis", "333-33-3333", 5000, .04 );
} // end scope
cout << endl;
Baseplus
employee2( "Lisa", "Jones", "555-55-5555", 2000, .06, 800 );
cout << endl;
Baseplus
employee3( "Mark", "Sands", "888-88-8888", 8000, .15, 2000 );
cout << endl;
}