#include "dynamicoverload.cpp"
#include <iostream>
using namespace std;

int main() {
    Array integers1(7); // Seven-element Array
    Array integers2;    // 10-element Array by default

    // Print integers1 size and contents
    cout << "Size of Array integers1 is "
         << integers1.getsize()
         << "\nArray after initialization:\n" << integers1;

    cout << "\nSize of Array integers2 is "
         << integers2.getsize()
         << "\nArray after initialization:\n" << integers2;

    // Input and print integers1 and integers2
    cout << "\nEnter 17 integers:" << endl;
    cin >> integers1 >> integers2;

    cout << "\nAfter input, the Arrays contain:\n"
         << "integers1:\n" << integers1
         << "integers2:\n" << integers2;

    // Use overloaded inequality (!=) operator
    cout << "\nEvaluating: integers1 != integers2" << endl;
    if (integers1 != integers2)
        cout << "integers1 and integers2 are not equal" << endl;

    // Create Array integers3 using integers1 as an initializer
    Array integers3(integers1); // Invokes copy constructor
    cout << "\nSize of Array integers3 is "
         << integers3.getsize()
         << "\nArray after initialization:\n" << integers3;

    // Use overloaded assignment (=) operator
    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2; // Note target Array is smaller
    cout << "integers1:\n" << integers1
         << "integers2:\n" << integers2;

    // Use overloaded equality (==) operator
    cout << "\nEvaluating: integers1 == integers2" << endl;
    if (integers1 == integers2)
        cout << "integers1 and integers2 are equal" << endl;

    // Use overloaded subscript operator to create rvalue
    cout << "\nintegers1[5] is " << integers1[5];

    // Use overloaded subscript operator to create lvalue
    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1:\n" << integers1;

    // Attempt to use out-of-range subscript
    cout << "\nAttempt to assign 1000 to integers1[15]" << endl;
    integers1[15] = 1000; // ERROR: out of range
}
