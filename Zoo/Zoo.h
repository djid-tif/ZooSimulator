//
// Created by madjid on 03/06/2021.
//

#ifndef ZOOSIMULATOR_ZOO_H
#define ZOOSIMULATOR_ZOO_H


#include <cstdlib>
#include "Animals/IAnimal.h"
#include "Food/IFood.h"

typedef vector<IAnimal *> listAnimals;
typedef vector<IFood *> listFood;


class Zoo {

    uint budget;
    vector<IAnimal *> listAnimals;
    IFood listFood;


public:

    uint getBudget();
    void creditBudget(uint credit);
    void debiteBudget(uint debite);

    void addAnimal(IAnimal* animal);



};

#endif //ZOOSIMULATOR_ZOO_H
