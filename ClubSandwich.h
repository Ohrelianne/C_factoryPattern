#ifndef _CLUBSANDWICH_ 
#define _CLUBSANDWICH_

#include "Sandwich.h"

class ClubSandwich : public Sandwich {
    public:
        double getSize() const;
    private:
        double size;
};

#endif