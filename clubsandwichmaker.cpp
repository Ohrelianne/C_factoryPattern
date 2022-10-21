#include "clubsandwichmaker.h"
#include "clubsandwich.h"
#include <iostream>

sandwich clubsandwichmaker::makesandwich(){
    clubsandwich cs;
    return cs;
}

clubsandwichmaker::clubsandwichmaker(){
    std::cout << "Création d'un clubsandwichmaker" << std::endl;
}

clubsandwichmaker::~clubsandwichmaker(){
    std::cout << "On tue un clubsandwichmaker" << std::endl;
}