//
// Created by Raphael Arabeyre on 03/06/2021.
//

#ifndef ZOOSIMULATOR_EAGLEM_H
#define ZOOSIMULATOR_EAGLEM_H


#include <Male.h>

class EagleM : public Male {


    IAnimal* partner;

public:
    EagleM();
    EagleM(int ageSet);
};


#endif //ZOOSIMULATOR_EAGLEM_H
