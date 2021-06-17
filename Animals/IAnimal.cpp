//
// Created by raphou le bg on 03/06/2021.
//

#include "./IAnimal.h"


IAnimal::~IAnimal() = default;;

void IAnimal::oneDaysHasPassed(int indexOfHabitat, int indexOfAnimal) {

    if (age == ageToSexualMaturity){
        reproductiveCapacity = true;
        canReproduce = true;
    } else if (age == endOfReproduction){
        canReproduce = false;
        reproductiveCapacity = false;
    }
    if (sick && sickCount != 0){
        sickCount--;
    } else if (sick && sickCount == 0){
        sick = false;
    }

    if (countOfDayNoEating != hungryDay){
        countOfDayNoEating++;
    } else if (countOfDayNoEating == hungryDay){
        if (getFeed() == "Seed") {
            // if can eat {
            // ######### ######### ###### ######### ######## # #### TODO eat and look if he can eat
            countOfDayNoEating = 0;
            hungry = false;
            //} else hungry = true
        } else{
            // if can eat
            // ######### ######### ###### ######### ######## # #### TODO eat and look if he can eat
            countOfDayNoEating = 0;
            hungry = false;
            //} else hungry = true
        }
    }

    if (pregnant){
        oneDayOfPregnant(indexOfHabitat);
    }

    if (countDayReFertilization != 0){
        countDayReFertilization--;
        if (countDayReFertilization == 0){
            canReproduce = true;
        }
    }


    age++;

    if (age == lifeExperience){
        cout << "Animal dead of old age." << endl;
        dead = true;
    }
}

void IAnimal::oneMonthHasPassed() {
    adaptedToHisHabitat = true;
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

int IAnimal::getAgeToSexualMaturity() const {
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

string IAnimal::getTypeAnimal() const {
    return typeAnimal;
}

bool IAnimal::isReproductiveCapacity() const {
    return reproductiveCapacity;
}

bool IAnimal::isSick() const {
    return sick;
}

int IAnimal::getSickCount() const {
    return sickCount;
}

int IAnimal::getCountOfDayNoEating() const {
    return countOfDayNoEating;
}

bool IAnimal::isAdaptedToHisHabitat() const {
    return adaptedToHisHabitat;
}

bool IAnimal::isCanReproduce() const {
    return canReproduce;
}

bool IAnimal::isHungry() const {
    return hungry;
}

bool IAnimal::isPregnant() const {
    return pregnant;
}

bool IAnimal::isDead() const {
    return dead;
}

bool IAnimal::isChildBirth() const {
    return childBirth;
}

void IAnimal::setChildBirth(bool childBirth) {
    IAnimal::childBirth = childBirth;
}

void IAnimal::reproduction() {

}

void IAnimal::oneDayOfPregnant(int indexOfHabitat) {

}


