//
// Created by Raphael Arabeyre on 03/06/2021.
//

#ifndef ZOOSIMULATOR_FEMALE_H
#define ZOOSIMULATOR_FEMALE_H


#include "../IAnimal.h"

class Female : public IAnimal{

protected:
    int litter;
    int gestationTime;
    int percentInfantMortality;

public:
    int getLitter() const;

    int getGestationTime() const;

    int getPercentInfantMortality() const;

public:
    void reproduction();
    void oneDayOfPregnant( int indexOfHabitat);
};


#endif //ZOOSIMULATOR_FEMALE_H
