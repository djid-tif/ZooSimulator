//
// Created by madjid on 03/06/2021.
//

#ifndef ZOOSIMULATOR_SEED_H
#define ZOOSIMULATOR_SEED_H


#include <cstdlib>
#include "IFood.h"
#include <map>

using namespace std;

class Seed : public IFood {

    int quantity;

public:

    Seed():quantity(2500) {};

    void addSeeds(int q);

    int getQuantity();


    string remove(int q);
};


#endif //ZOOSIMULATOR_SEED_H