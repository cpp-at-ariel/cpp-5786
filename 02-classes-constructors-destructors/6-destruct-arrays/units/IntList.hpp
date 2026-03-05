#pragma once

#include <iostream>
using namespace std;

class IntList {
    private:
        int* theInts;
        unsigned int numInts;

    public:
        IntList(unsigned int numInts) {
            cout << "construct(" << numInts << ")" << endl;
            theInts = new int[numInts];
            this->numInts = numInts;
        }

        ~IntList() {
            cout << "destruct(" << numInts << ")" << endl;
            delete[] theInts;
        }

        void fill(int value);
        int get(unsigned int index);
        void put(unsigned int index, int value);
};
