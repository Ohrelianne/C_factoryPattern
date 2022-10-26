#include "clubsandwich.h" 
#include <iostream>

double clubsandwich::getSize() const{
    std::cout << "Club sandwich of size : "<<size<< std::endl;
    return size;
}
clubsandwich::clubsandwich(){
    std::cout << "Creating a clubsandwich"<< std::endl;

}
clubsandwich::clubsandwich(double length){
    std::cout << "Creating a clubsandwich"<< std::endl;
    size = length;
}

clubsandwich::~clubsandwich(){
    std::cout << "Eating a clubsandwich"<< std::endl;
}