#ifndef _sandwich_ 
#define _sandwich_

class sandwich {
    public:
        virtual double getSize() const;
        virtual ~sandwich();
        sandwich();
    private:
        double Size;
};

#endif