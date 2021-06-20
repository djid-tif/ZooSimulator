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
    int ageToSexualMaturity;
    int endOfReproduction;
    int lifeExperience;
    int purchasePrice;
    int sellingPrice;
    int numberOfVisitorsPerMonthOfHighSeason;
    int numberOfVisitorsPerMonthOfLowSeason;
    int annualGrant;
    string typeAnimal;
    bool reproductiveCapacity;
    bool sick;
    int  sickCount;
    int  countOfDayNoEating;
    bool adaptedToHisHabitat;
    bool canReproduce;
    bool hungry;
    bool pregnant;
    bool dead;
    bool childBirth;
    int pregnantCount;
    int countDayReFertilization;
    int dayReFertilization;

public:
    IAnimal();
    virtual ~IAnimal();
    void oneDaysHasPassed(int indexHabitat,int indexAnimal);
    void oneMonthHasPassed();



    int getAge() const;
    string getFeed() ;
    int getAmountOfFoodToEaPerDay() const;
    int getHungryDay() const;
    int getAgeToSexualMaturity() const;
    int getEndOfReproduction() const;
    int getLifeExperience() const;
    int getPurchasePrice() const;
    int getSellingPrice() const;
    int getNumberOfVisitorsPerMonthOfHighSeason() const;
    int getNumberOfVisitorsPerMonthOfLowSeason() const;
    int getAnnualGrant() const;
    string getTypeAnimal() const;


    bool isReproductiveCapacity() const;
    bool isSick() const;
    int getSickCount() const;
    int getCountOfDayNoEating() const;
    bool isAdaptedToHisHabitat() const;
    bool isCanReproduce() const;
    bool isHungry() const;
    bool isDead() const;
    bool isPregnant() const;
    bool isChildBirth() const;

    virtual void reproduction();

    virtual void oneDayOfPregnant(int indexOfHabitat);

    void setChildBirth(bool childBirth);


};


#endif //ZOOSIMULATOR_IANIMAL_H
