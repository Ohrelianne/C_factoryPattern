#include "kebab.h" 
#include <iostream>

double kebab::getSize() const{
    return size;
}

kebab::kebab(){
    std::cout << "Creating a kebab"<< std::endl;
}

kebab::kebab(double length){
    std::cout << "Creating a kebab"<< std::endl;
    size = length;
}
kebab::~kebab(){
    std::cout << "Eating a kebab"<< std::endl;
}