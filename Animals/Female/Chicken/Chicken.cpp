//
// Created by Raphael Arabeyre on 03/06/2021.
//

#include "./Chicken.h"

Chicken::Chicken() {
    age = 0;
    feed = "Seed";
    amountOfFoodToEaPerDay = 150;
    hungryDay = 1;
    ageToSexualMaturity = 6 * 30;
    endOfReproduction = 8 * 365;
    lifeExperience = 15 * 365;
    purchasePrice = 20;
    sellingPrice = 10;
    numberOfVisitorsPerMonthOfHighSeason = 2;
    numberOfVisitorsPerMonthOfLowSeason = 1;
    annualGrant = 0;
    typeAnimal = "Chicken";

    litter = 200;
    gestationTime = 6 * 7;
    percentInfantMortality = 50;
    dayReFertilization = 2;
}

Chicken::Chicken(int ageSet) {
    age = ageSet;
    feed = "Seed";
    amountOfFoodToEaPerDay = 150;
    hungryDay = 1;
    ageToSexualMaturity = 6 * 30;
    endOfReproduction = 8 * 365;
    lifeExperience = 15 * 365;
    purchasePrice = 20;
    sellingPrice = 10;
    numberOfVisitorsPerMonthOfHighSeason = 2;
    numberOfVisitorsPerMonthOfLowSeason = 1;
    annualGrant = 0;
    typeAnimal = "Chicken";

    litter = 200;
    gestationTime = 6 * 7;
    percentInfantMortality = 50;
    dayReFertilization = 2;
}

void Chicken::updateAnimal() {

}
