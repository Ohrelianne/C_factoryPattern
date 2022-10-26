#ifndef _sandwichMAKER_ 
#define _sandwichMAKER_
#include "sandwich.h"

class sandwichMaker {
    public:
    sandwich* makesandwich(char* type, double size);
    sandwichMaker();
    ~sandwichMaker();
};

#endif