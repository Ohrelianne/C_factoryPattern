#ifndef _clubsandwich_ 
#define _clubsandwich_

#include "sandwich.h"

class clubsandwich : public sandwich {
    public:
        double getSize() const;
        clubsandwich();
        ~clubsandwich();
};

#endif