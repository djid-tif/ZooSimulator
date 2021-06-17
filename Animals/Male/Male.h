//
// Created by Raphael Arabeyre on 03/06/2021.
//

#ifndef ZOOSIMULATOR_MALE_H
#define ZOOSIMULATOR_MALE_H


#include "./IAnimal.h"

class Male : public IAnimal{

public:
    void reproduction();
    void oneDayOfPregnant( int indexOfHabitat);
};


#endif //ZOOSIMULATOR_MALE_H
