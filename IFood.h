//
// Created by madjid on 03/06/2021.
//

#ifndef ZOOSIMULATOR_IFOOD_H
#define ZOOSIMULATOR_IFOOD_H


class IFood {
    int meat;
    int seed;

public:
    IFood();

    int getMeatQuantity();

    int getSeedquantity();
};


#endif //ZOOSIMULATOR_IFOOD_H
