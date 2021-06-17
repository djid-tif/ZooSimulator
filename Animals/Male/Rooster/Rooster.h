//
// Created by Raphael Arabeyre on 03/06/2021.
//

#ifndef ZOOSIMULATOR_ROOSTER_H
#define ZOOSIMULATOR_ROOSTER_H


#include "Male.h"

class Rooster : public Male{
public:
    Rooster();
    Rooster(int);

    void updateAnimal();

};


#endif //ZOOSIMULATOR_ROOSTER_H
