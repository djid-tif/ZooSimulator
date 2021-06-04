//
// Created by madjid on 03/06/2021.
//

#ifndef ZOOSIMULATOR_SEED_H
#define ZOOSIMULATOR_SEED_H


#include <cstdlib>

#include <map>
#include <IFood.h>


using namespace std;

class Seed : public IFood {

    int quantity;

public:

    Seed();

    void addSeeds(int q);

    int getQuantity();


    bool remove(int q);
};


#endif //ZOOSIMULATOR_SEED_H
