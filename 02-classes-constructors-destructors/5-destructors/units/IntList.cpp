#include "IntList.hpp"

void IntList::fill(int value) {
    for (size_t i=0; i<this->numInts; ++i)
        theInts[i] = value;
}

int IntList::get(size_t index) {
    return theInts[index];
}

void IntList::put(size_t index, int value) {
    theInts[index] = value;
}
