#include "chef.h"
#include <iostream>
#include <string.h>
#include "kebab.h"
#include "clubsandwich.h"
#include "sandwichmaker.h"

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
        sandwichMaker sm;
        if (result2==0){
            sandwich* kebabTropBon;
            kebabTropBon = sm.makesandwich(0, 6.0);
            delete kebabTropBon;
        } else if (result3 == 0){
            sandwich* sandwichTriangle;
            sandwichTriangle = sm.makesandwich(1, 7.0);
            delete sandwichTriangle;
        }else{
            std::cout << "If you're here to waste my time, get out !" << std::endl;
        }
    } else{
        std::cout << "If you're here to waste my time, get out !" << std::endl;
    }  
}