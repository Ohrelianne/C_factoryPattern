#include "chef.h"
#include <iostream>
#include <string.h>
#include "kebabmaker.h"
#include "kebab.h"
#include "clubsandwichmaker.h"
#include "clubsandwich.h"

void Chef::Welcome(){
    char rep1[30];
    char typesandwich[30];
    std::cout << "Welcome to the supermarket ! Would you like a sandwich ? (answer: y or n)"<< std::endl;
    std::cin >> rep1;
    int result1 = strcmp(rep1, "y");
    if (result1 == 0){
        std::cout << "Which type of sandwich would you like ? (answer:  kebab or clubsandwich)"<<std::endl;
        std::cin>>typesandwich;
        int result2 = strcmp(typesandwich, "kebab");
        int result3 = strcmp(typesandwich, "clubsandwich");
        if (result2==0){
            kebabMaker km;
            sandwich kebabTropBon = km.makesandwich();
        } else if (result3 == 0){
            clubsandwichmaker cm;
            sandwich sandwichTriangle = cm.makesandwich();
        }else{
            std::cout << "If you're here to waste my time, get out !" << std::endl;
        }

    } else{
        std::cout << "If you're here to waste my time, get out !" << std::endl;
    }
}