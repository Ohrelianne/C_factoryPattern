#ifndef _sandwich_ 
#define _sandwich_

class sandwich {
    public:
        virtual double getSize() const = 0;
        virtual ~sandwich(){};
        sandwich(){};
    protected:
        double size;
};

#endif