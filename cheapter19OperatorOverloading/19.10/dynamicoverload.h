#ifndef DYNAMICOVERLOAD_H
#define DYNAMICOVERLOAD_H

#include <iostream>
using namespace std;

class Array {
    friend ostream &operator<<(ostream &, const Array &);
    friend istream &operator>>(istream &, Array &);

public:
    Array(int = 10);                     // default constructor
    Array(const Array &);                // copy constructor
    ~Array();                            // destructor
    int getsize() const;                 // size accessor
    const Array &operator=(const Array &); // assignment operator
    bool operator==(const Array &) const;  // equality operator
    bool operator!=(const Array &right) const {
        return !(*this == right); // inequality operator
    }
    int &operator[](int);               // subscript operator (non-const)
    int operator[](int) const;          // subscript operator (const)

private:
    int size; // size of the array
    int *ptr; // pointer to the array
};

#endif
