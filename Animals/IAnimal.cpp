//
// Created by raphou le bg on 03/06/2021.
//

#include "IAnimal.h"


IAnimal::~IAnimal() {

}

void IAnimal::oneDaysHasPassed() {

}

void IAnimal::oneMonthHasPassed() {

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
    return sexualMaturity;
}

int IAnimal::getEndOfReproduction() const {
    return endOfReproduction;
}

int IAnimal::getLifeExperience() const {
    return lifeExperience;
}

int IAnimal::getPurchasePriceAt6Month() const {
    return purchasePriceAt6Month;
}

int IAnimal::getSellingPriceAt6Month() const {
    return sellingPriceAt6Month;
}

int IAnimal::getPurchasePriceAt4Year() const {
    return purchasePriceAt4Year;
}

int IAnimal::getSellingPriceAt4Year() const {
    return sellingPriceAt4Year;
}

int IAnimal::getPurchasePriceAt14Year() const {
    return purchasePriceAt14Year;
}

int IAnimal::getSellingPriceAt14Year() const {
    return sellingPriceAt14Year;
}

float IAnimal::getNumberOfVisitorsPerMonthOfLowSeason() const {
    return numberOfVisitorsPerMonthOfLowSeason;
}

int IAnimal::getAnnualGrant() const {
    return annualGrant;
}

int IAnimal::getNumberOfVisitorsPerMonthOfHighSeason() const {
    return numberOfVisitorsPerMonthOfHighSeason;
}
