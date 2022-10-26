#include "kebab.h" 
#include <iostream>

double kebab::getSize() const{
    std::cout << "Kebab of size : "<<size<< std::endl;
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