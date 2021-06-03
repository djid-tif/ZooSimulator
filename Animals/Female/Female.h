//
// Created by Raphael Arabeyre on 03/06/2021.
//

#ifndef ZOOSIMULATOR_FEMALE_H
#define ZOOSIMULATOR_FEMALE_H


#include <IAnimal.h>

class Female : public IAnimal{

protected:
    int litter;
    int gestationTime;
    int percentInfantMortality;
};


#endif //ZOOSIMULATOR_FEMALE_H
