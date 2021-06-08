//
// Created by raphou le bg on 03/06/2021.
//

#include "IAnimal.h"


IAnimal::~IAnimal() = default;

void IAnimal::oneDaysHasPassed(Zoo* zoo) {
    age++;

    if (age == ageToSexualMaturity){
        reproductiveCapacity = true;
    } else if (age == endOfReproduction){
        reproductiveCapacity = false;
    }

    if (sick && sickCount != 0){
        sickCount--;
    } else if (sick && sickCount == 0){
        sick = false;
    }



}

void IAnimal::oneMonthHasPassed(int date, Zoo* zoo) {
    if (!sick) {
        if (date % 12 * 30 > 5 * 30 && date % 12 * 30 < 9 * 30) {
            zoo->creditBudget(
                    numberOfVisitorsPerMonthOfHighSeason * 2 * 17 + numberOfVisitorsPerMonthOfHighSeason * 2 * 13);
        } else {
            zoo->creditBudget(
                    numberOfVisitorsPerMonthOfLowSeason * 2 * 17 + numberOfVisitorsPerMonthOfLowSeason * 2 * 13);
        }
    }
}

int IAnimal::getAge() const {
    return age;
}

string IAnimal::getFeed() const {
    return feed;
}

int IAnimal::getAmountOfFoodToEaPerDay() const {
    return amountOfFoodToEaPerDay;
}

int IAnimal::getHungryDay() const {
    return hungryDay;
}

int IAnimal::getSexualMaturity() const {
    return ageToSexualMaturity;
}

int IAnimal::getEndOfReproduction() const {
    return endOfReproduction;
}

int IAnimal::getLifeExperience() const {
    return lifeExperience;
}

int IAnimal::getPurchasePrice() const {
    return purchasePrice;
}

int IAnimal::getSellingPrice() const {
    return sellingPrice;
}

int IAnimal::getNumberOfVisitorsPerMonthOfLowSeason() const {
    return numberOfVisitorsPerMonthOfLowSeason;
}

int IAnimal::getAnnualGrant() const {
    return annualGrant;
}

int IAnimal::getNumberOfVisitorsPerMonthOfHighSeason() const {
    return numberOfVisitorsPerMonthOfHighSeason;
}

void IAnimal::deleteAnimal() {
    delete this;
}
