//
// Created by raphou le bg on 03/06/2021.
//

#ifndef ZOOSIMULATOR_IANIMAL_H
#define ZOOSIMULATOR_IANIMAL_H

#include "string"

using namespace std;

class IAnimal {

protected:

    string feed;
    int amountOfFoodToEaPerDay;
    int hungryDay;
    int sexualMaturity;
    int endOfReproduction;
    int lifeExperience;
    int buyingPriceAt6Month;
    int sellingPriceAt6Month;
    int buyingPriceAt4Year;
    int sellingPriceAt4Year;
    int buyingPriceAt14Year;
    int sellingPriceAt14Year;
    int numberOfVisitorsPerMonthOfHighSeason;
    float numberOfVisitorsPerMonthOfLowSeason;
    int annualGrant;

public:
    IAnimal();
    virtual ~IAnimal();
};


#endif //ZOOSIMULATOR_IANIMAL_H
