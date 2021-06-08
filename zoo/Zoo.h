//
// Created by madjid on 03/06/2021.
//

#ifndef ZOOSIMULATOR_ZOO_H
#define ZOOSIMULATOR_ZOO_H

#include <vector>
#include <string>

using namespace std;

#include <cstdlib>
#include <iostream>
#include "../food/Seed.h"
#include "../food/Meat.h"
#include "../Animals/IAnimal.h"

typedef unsigned int uint;



class Zoo {

    uint budget;
    vector<IAnimal *> listAnimals;
    Seed m_seed;
    Meat m_meat;


public:

    Zoo(Seed *, Meat *);

    uint getBudget() const;
    bool creditBudget(uint credit);
    bool debiteBudget(uint debite);

    void addAnimal(IAnimal* animal);

    const vector<IAnimal *> &getListAnimals() const;


    void buyFood(int seed, int meat);
};

#endif //ZOOSIMULATOR_ZOO_H
