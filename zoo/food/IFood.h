//
// Created by madjid on 03/06/2021.
//

#ifndef ZOOSIMULATOR_IFOOD_H
#define ZOOSIMULATOR_IFOOD_H


#include "../Zoo.h"

class Zoo;

class IFood {
    Zoo *m_zoo;

public:
    IFood(Zoo *);
    Zoo *getZoo() const;

};


#endif //ZOOSIMULATOR_IFOOD_H
