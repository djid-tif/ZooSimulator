//
// Created by raphou le bg on 03/06/2021.
//

#ifndef ZOOSIMULATOR_IANIMAL_H
#define ZOOSIMULATOR_IANIMAL_H


#include "Food/IFood.h"

class IAnimal {

    IFood feed;
    int amountOfFoodToEaPerDay;
    int hungryDay;
    int sexualMaturity;
    int endOfReproduction;
    int lifeExperience;
    int buyingPrice;
    int sellingPrice;
    int numberOfVisitorsPerMonthOfHighSeason;
    int numberOfVisitorsPerMonthOfLowSeason;
    int annualGrant;

public:
    IAnimal();
    virtual ~IAnimal();
};


#endif //ZOOSIMULATOR_IANIMAL_H
