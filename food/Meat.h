//
// Created by madjid on 03/06/2021.
//

#ifndef ZOOSIMULATOR_MEAT_H
#define ZOOSIMULATOR_MEAT_H

#include <iostream>
#include "IFood.h"

class Meat: public IFood {


    int quantity;

public:

    Meat();

    void addMeat(int q);

    int getQuantity();


    bool remove(int q);
};


#endif //ZOOSIMULATOR_MEAT_H
