#ifndef _sandwichMAKER_ 
#define _sandwichMAKER_
#include "sandwich.h"

class sandwichMaker {
    public:
    virtual sandwich makesandwich();

    public:
    sandwichMaker();
    virtual ~sandwichMaker();
};

#endif