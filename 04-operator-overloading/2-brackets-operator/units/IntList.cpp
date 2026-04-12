#include "IntList.hpp"
#include <stdexcept>

void IntList::operator=(int value) {
    for (size_t i=0; i<this->numInts; ++i)
        theInts[i] = value;
}

const int IntList::operator[](size_t index) const {
    cout << "c ";
    if (index >= numInts)
        throw out_of_range("Array index out of bounds: "+to_string(index));
    return theInts[index];
}

int& IntList::operator[](size_t index) {
    cout << "r ";
    if (index >= numInts)
        throw out_of_range("Array index out of bounds: "+to_string(index));
    return theInts[index];
}
