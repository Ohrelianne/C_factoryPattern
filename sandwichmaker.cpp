#include "sandwichmaker.h"
#include "kebab.h"
#include "clubsandwich.h"
#include <iostream>

sandwich* sandwichMaker::makesandwich(int number, double size){
    if(number==0){
        return new kebab(size);
    } else {
        return new clubsandwich(size);
    }
    
}

sandwichMaker::sandwichMaker(){
    std::cout << "Création d'un sandwichMaker" << std::endl;
}

sandwichMaker::~sandwichMaker(){
    std::cout << "On tue un sandwichMaker" << std::endl;
}