#ifndef _KEBAB_ 
#define _KEBAB_
#include "Sandwich.h"

class Kebab : public Sandwich {
    public:
        double getSize() const;
    private:
        double size;
};


#endif 