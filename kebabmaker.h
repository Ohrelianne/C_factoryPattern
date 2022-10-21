#ifndef _kebabMAKER_ 
#define _kebabMAKER_

#include "sandwichmaker.h"
#include "kebab.h"

class kebabMaker : public sandwichMaker {
    public: 
    sandwich makesandwich();

    kebabMaker();
    ~kebabMaker();
};

#endif