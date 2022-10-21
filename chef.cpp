#include "chef.h"
#include <iostream>
void Chef::Welcome(){
    char rep1;
    char typesandwich;
    std::cout << "Welcome to the supermarket ! Would you like a sandwich ? (answer: y or n)"<< std::endl;
    std::cin >> rep1;
    int result1 = strmcp(rep1, "y");
    if (result1 == 0){
        std::cout << "Which type of sandwich would you like ? (answer:  kebab or clubsandwich)"<<std::endl;
        std::cin>>typesandwich;
        int result2 = strmcp(typesandwich, "kebab");
        int result3 = strmcp(typesandwich, "clubsandwich");
        if (result2==0){
            KebabMaker km;
            Kebab k = km.makeSandwich();
        } elif (result3 == 0){
            ClubSandwichMaker cm;
            ClubSandwich c = cm.makeSandwich();
        }else{
            std::cout << "If you're here to waste my time, get out !" std::endl;
        }

    } else{
        std::cout << "If you're here to waste my time, get out !" << std::endl;
    }
}