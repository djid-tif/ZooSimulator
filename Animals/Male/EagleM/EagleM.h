//
// Created by Raphael Arabeyre on 03/06/2021.
//

#ifndef ZOOSIMULATOR_EAGLEM_H
#define ZOOSIMULATOR_EAGLEM_H


#include "./Male.h"

class EagleM : public Male {

    class IAnimal;

    IAnimal* partner;

public:
    EagleM();
    EagleM(int ageSet);

    void updateAnimal();
};


#endif //ZOOSIMULATOR_EAGLEM_H
