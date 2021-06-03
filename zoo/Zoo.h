//
// Created by madjid on 03/06/2021.
//

#ifndef ZOOSIMULATOR_ZOO_H
#define ZOOSIMULATOR_ZOO_H

#include <vector>
#include <string>

using namespace std;

#include <cstdlib>
#include "animal/IAnimal.h"
#include "food/IFood.h"

class IAnimal;
class IFood;

class Zoo {

    uint budget;
    vector<IAnimal *> listAnimals;
    vector<IFood *> listFood;


public:

    Zoo();

    uint getBudget();
    void creditBudget(uint credit);
    bool debiteBudget(uint debite);

    void addAnimal(IAnimal* animal);



};

#endif //ZOOSIMULATOR_ZOO_H
