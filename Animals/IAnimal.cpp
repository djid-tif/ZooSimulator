//
// Created by raphou le bg on 03/06/2021.
//

#include "IAnimal.h"


IAnimal::~IAnimal() = default;

void IAnimal::oneDaysHasPassed(Zoo* zoo,int indexOfHabitat, int indexOfAnimal) {

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
        oneDayOfPregnant(zoo, indexOfHabitat);
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
        zoo->getListHabitat().at(indexOfHabitat)->deleteAnimalInside(indexOfAnimal);
    }
}

void IAnimal::oneMonthHasPassed(int date, Zoo* zoo) {
    adaptedToHisHabitat = true;
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


