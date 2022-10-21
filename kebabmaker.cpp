#include "kebabmaker.h"
#include <iostream>
#include "kebab.h"

sandwich kebabMaker::makesandwich(){
    kebab k;
    return k;
};

kebabMaker::kebabMaker(){
    std::cout << "Création d'un kebabMaker" << std::endl;
}

kebabMaker::~kebabMaker(){
    std::cout << "On tue un kebabMaker" << std::endl;
}