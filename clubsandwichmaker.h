#ifndef _clubsandwichmaker_ 
#define _clubsandwichmaker_

#include "sandwichmaker.h"
class clubsandwichmaker : public sandwichMaker {
    public:
    sandwich makesandwich();

    clubsandwichmaker();
    ~clubsandwichmaker();
};

#endif