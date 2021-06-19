//
// Created by Raphael Arabeyre on 03/06/2021.
//

#include "./Rooster.h"

Rooster::Rooster() {
    age = 0;
    feed = "Seed";
    amountOfFoodToEaPerDay = 180;
    hungryDay = 2;
    ageToSexualMaturity = 6 * 30;
    endOfReproduction = 8 * 365;
    lifeExperience = 15 * 365;
    purchasePrice = 100;
    sellingPrice = 20;
    numberOfVisitorsPerMonthOfHighSeason = 2;
    numberOfVisitorsPerMonthOfLowSeason = 1;
    annualGrant = 0;
    typeAnimal = "Rooster";

}

Rooster::Rooster(int ageSet) {
    age = ageSet;
    feed = "Seed";
    amountOfFoodToEaPerDay = 180;
    hungryDay = 2;
    ageToSexualMaturity = 6 * 30;
    endOfReproduction = 8 * 365;
    lifeExperience = 15 * 365;
    purchasePrice = 100;
    sellingPrice = 20;
    numberOfVisitorsPerMonthOfHighSeason = 2;
    numberOfVisitorsPerMonthOfLowSeason = 1;
    annualGrant = 0;
    typeAnimal = "Rooster";
}

void Rooster::updateAnimal() {

}
