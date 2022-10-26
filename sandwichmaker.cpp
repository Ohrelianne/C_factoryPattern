#include "sandwichmaker.h"
#include "kebab.h"
#include "clubsandwich.h"
#include <iostream>
#include <string.h>

sandwich* sandwichMaker::makesandwich(char* type, double size){
    int result1 = strcmp(type, "kebab");
    int result2 = strcmp(type, "clubsandwich");
    if(result1==0){
        return new kebab(size);
    } else if(result2==0){
        return new clubsandwich(size);
    }
      else {
        return NULL;
      }
}

sandwichMaker::sandwichMaker(){
    std::cout << "We hire a new sandwichMaker" << std::endl;
}

sandwichMaker::~sandwichMaker(){
    std::cout << "We kill a sandwichMaker" << std::endl;
}