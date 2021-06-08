//
// Created by raphou le bg on 03/06/2021.
//

#ifndef ZOOSIMULATOR_IANIMAL_H
#define ZOOSIMULATOR_IANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class IAnimal {

protected:
    int age;
    string feed;
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
    ~IAnimal();
    void deleteAnimal();
    void oneDaysHasPassed();
    void oneMonthHasPassed();

    int getAge() const;
    string getFeed() const;
    int getAmountOfFoodToEaPerDay() const;
    int getHungryDay() const;
    int getSexualMaturity() const;
    int getEndOfReproduction() const;
    int getLifeExperience() const;
    int getPurchasePriceAt6Month() const;
    int getSellingPriceAt6Month() const;
    int getPurchasePriceAt4Year() const;
    int getSellingPriceAt4Year() const;
    int getPurchasePriceAt14Year() const;
    int getSellingPriceAt14Year() const;
    int getNumberOfVisitorsPerMonthOfHighSeason() const;
    float getNumberOfVisitorsPerMonthOfLowSeason() const;
    int getAnnualGrant() const;



};


#endif //ZOOSIMULATOR_IANIMAL_H
