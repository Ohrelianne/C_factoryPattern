#include "sandwichmaker.h"
#include <iostream>

void sandwichMaker::makesandwich(){
    return new sandwich();
}

sandwichMaker::sandwichMaker(){
    std::cout << "Création d'un sandwichMaker" << std::endl;
}

sandwichMaker::~sandwichMaker(){
    std::cout << "On tue un sandwichMaker" << std::endl;
}