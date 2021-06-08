//
// Created by raphou le bg on 03/06/2021.
//

#ifndef ZOOSIMULATOR_IANIMAL_H
#define ZOOSIMULATOR_IANIMAL_H

#include <iostream>
#include <string>
#include <Zoo.h>

using namespace std;

class IAnimal {

protected:
    int age;
    string feed;
    int amountOfFoodToEaPerDay;
    int hungryDay;
    int ageToSexualMaturity;
    int endOfReproduction;
    int lifeExperience;
    int purchasePrice;
    int sellingPrice;
    int numberOfVisitorsPerMonthOfHighSeason;
    int numberOfVisitorsPerMonthOfLowSeason;
    int annualGrant;

    bool reproductiveCapacity = false;
    bool sick = false;
    int sickCount;

public:
    ~IAnimal();
    void deleteAnimal();
    void oneDaysHasPassed(Zoo*);
    void oneMonthHasPassed(int, Zoo*);


    int getAge() const;
    string getFeed() const;
    int getAmountOfFoodToEaPerDay() const;
    int getHungryDay() const;
    int getSexualMaturity() const;
    int getEndOfReproduction() const;
    int getLifeExperience() const;
    int getPurchasePrice() const;
    int getSellingPrice() const;
    int getNumberOfVisitorsPerMonthOfHighSeason() const;
    int getNumberOfVisitorsPerMonthOfLowSeason() const;
    int getAnnualGrant() const;


};


#endif //ZOOSIMULATOR_IANIMAL_H
