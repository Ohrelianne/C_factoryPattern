#ifndef _kebab_ 
#define _kebab_
#include "sandwich.h"

class kebab : public sandwich {
    public:
        double getSize() const;
    private:
        double size;
};


#endif 