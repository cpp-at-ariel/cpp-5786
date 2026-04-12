#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class IntList {
    private:
        int* theInts;
        unsigned int numInts;

    public:
        IntList(size_t numInts):
          numInts(numInts),
          theInts (new int[numInts])
        {
            cout << "constructing an IntList with " << numInts << " ints." << endl;
        }

        IntList(unsigned int numInts, int value): IntList(numInts)
        {
            cout << "filling an IntList with " << numInts << " ints." << endl;
            // operator=(value);
            *this = value;
        }

        ~IntList() {
            cout << "destructing an intlist with " << numInts << " ints." << endl;
            delete[] theInts;
        }

        // Set all elements in this intList to value
        void operator=(int value);

        const int operator[](size_t index) const;
        int& operator[](size_t index);
        //int get(uint index) {return theInts[index];} // Java style
        //void set(uint index, int newValue); // Java style

        int operator[] (string s) const {
          if (s==string("first"))
            return theInts[0];
          else if (s==string("last"))
            return theInts[numInts-1];
          else throw invalid_argument{"invalid argument: "+s};
        }
        int& operator[] (string s)  {
          if (s==string("first"))
            return theInts[0];
          else if (s==string("last"))
            return theInts[numInts-1];
          else throw invalid_argument{"invalid argument: "+s};
        }
};
