#include "chef.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
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
        sandwichMaker sm;
        sandwich* sandwichmystere;
        sandwichmystere = sm.makesandwich(typesandwich, 9.0);
        if (sandwichmystere == NULL){
            std::cout << "If you're here to waste my time, get out !" << std::endl;
            return ;
        }
        sandwichmystere->getSize();
        delete sandwichmystere;
        }
    else{
        std::cout << "If you're here to waste my time, get out !" << std::endl;
    }  
}  