#ifndef _KEBABMAKER_ 
#define _KEBABMAKER_

#include "sandwichmaker.h"
#include "Kebab.h"

class KebabMaker : public SandwichMaker {
    public: 
    Sandwich makeSandwich();

};

#endif