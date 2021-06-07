//
// Created by Raphael Arabeyre on 03/06/2021.
//

#include "Rooster.h"

Rooster::Rooster() {
    age = 0;
    feed = "Seed";
    amountOfFoodToEaPerDay = 180;
    hungryDay = 2;
    sexualMaturity = 6 * 30;
    endOfReproduction = 8 * 365;
    lifeExperience = 15 * 365;
    purchasePriceAt6Month = 100;
    sellingPriceAt6Month = 20;
    purchasePriceAt4Year = 100;
    sellingPriceAt4Year = 20;
    purchasePriceAt14Year = 100;
    sellingPriceAt14Year = 20;
    numberOfVisitorsPerMonthOfHighSeason = 2;
    numberOfVisitorsPerMonthOfLowSeason = 0.5;
    annualGrant = 0;
}

Rooster::Rooster(int ageSet) {
    age = ageSet;
    feed = "Seed";
    amountOfFoodToEaPerDay = 180;
    hungryDay = 2;
    sexualMaturity = 6 * 30;
    endOfReproduction = 8 * 365;
    lifeExperience = 15 * 365;
    purchasePriceAt6Month = 100;
    sellingPriceAt6Month = 20;
    purchasePriceAt4Year = 100;
    sellingPriceAt4Year = 20;
    purchasePriceAt14Year = 100;
    sellingPriceAt14Year = 20;
    numberOfVisitorsPerMonthOfHighSeason = 2;
    numberOfVisitorsPerMonthOfLowSeason = 0.5;
    annualGrant = 0;
}
