//
// Created by madjid on 07/06/2021.
//

#ifndef ZOOSIMULATOR_GAMEMANAGER_H
#define ZOOSIMULATOR_GAMEMANAGER_H

#include <iostream>
#include <iomanip>


class GameManager {

public:
    static void displayWelcome();
    static int displayMenu();
    static bool yesOrNoQuestion();
    static int buyorSell();
    static int WichAnimal();

    static int howOld();
};




#endif //ZOOSIMULATOR_GAMEMANAGER_H
