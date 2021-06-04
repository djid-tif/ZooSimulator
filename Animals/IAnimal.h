//
// Created by raphou le bg on 03/06/2021.
//

#ifndef ZOOSIMULATOR_IANIMAL_H
#define ZOOSIMULATOR_IANIMAL_H

#include "string"

<<<<<<< HEAD:Animals/IAnimal.h
using namespace std;

class IAnimal {

protected:
    int age;
    string feed;
=======
#include "../food/IFood.h"

class IFood;

class IAnimal {

    IFood *feed;
>>>>>>> main:zoo/animal/IAnimal.h
    int amountOfFoodToEaPerDay;
    int hungryDay;
    int sexualMaturity;
    int endOfReproduction;
    int lifeExperience;
    int purchasePriceAt6Month;
    int sellingPriceAt6Month;
    int purchasePriceAt4Year;
    int sellingPriceAt4Year;
    int purchasePriceAt14Year;
    int sellingPriceAt14Year;
    int numberOfVisitorsPerMonthOfHighSeason;
    float numberOfVisitorsPerMonthOfLowSeason;
    int annualGrant;

public:
    IAnimal();
    virtual ~IAnimal();


};


#endif //ZOOSIMULATOR_IANIMAL_H
