#include "dynamicoverload.h"
#include <iostream>
#include <iomanip>
#include <cstdlib> // for exit()
using namespace std;

// Default constructor
Array::Array(int arraySize) 
    : size((arraySize > 0 ? arraySize : 10)) {
    ptr = new int[size];
    for (int i = 0; i < size; i++)
        ptr[i] = 0; // Initialize all elements to 0
}

// Copy constructor
Array::Array(const Array &arrayToCopy) 
    : size(arrayToCopy.size) {
    ptr = new int[size];
    for (int i = 0; i < size; i++)
        ptr[i] = arrayToCopy.ptr[i];
}

// Destructor
Array::~Array() {
    delete[] ptr; // Deallocate memory
}

// Return the size of the array
int Array::getsize() const {
    return size;
}

// Assignment operator
const Array &Array::operator=(const Array &right) {
    if (&right != this) { // Avoid self-assignment
        if (size != right.size) { // Reallocate if sizes differ
            delete[] ptr;
            size = right.size;
            ptr = new int[size];
        }
        for (int i = 0; i < size; i++)
            ptr[i] = right.ptr[i]; // Copy elements
    }
    return *this;
}

// Equality operator
bool Array::operator==(const Array &right) const {
    if (size != right.size)
        return false;
    for (int i = 0; i < size; i++)
        if (ptr[i] != right.ptr[i])
            return false;
    return true;
}

// Subscript operator for non-const objects
int &Array::operator[](int subscript) {
    if (subscript < 0 || subscript >= size) {
        cerr << "\nError: Subscript " << subscript << " out of range" << endl;
        exit(1); // Terminate program
    }
    return ptr[subscript];
}

// Subscript operator for const objects
int Array::operator[](int subscript) const {
    if (subscript < 0 || subscript >= size) {
        cerr << "\nError: Subscript " << subscript << " out of range" << endl;
        exit(1); // Terminate program
    }
    return ptr[subscript];
}

// Input operator
istream &operator>>(istream &input, Array &a) {
    for (int i = 0; i < a.size; i++)
        input >> a.ptr[i];
    return input;
}

// Output operator
ostream &operator<<(ostream &output, const Array &a) {
    for (int i = 0; i < a.size; i++) {
        output << setw(12) << a.ptr[i];
        if ((i + 1) % 4 == 0)
            output << endl;
    }
    if (a.size % 4 != 0)
        output << endl;
    return output;
}
