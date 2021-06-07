//
// Created by Raphael Arabeyre on 03/06/2021.
//

#include "Chicken.h"

Chicken::Chicken() {
    age = 0;
    feed = "Seed";
    amountOfFoodToEaPerDay = 150;
    hungryDay = 1;
    sexualMaturity = 6 * 30;
    endOfReproduction = 8 * 365;
    lifeExperience = 15 * 365;
    purchasePriceAt6Month = 20;
    sellingPriceAt6Month = 10;
    purchasePriceAt4Year = 20;
    sellingPriceAt4Year = 10;
    purchasePriceAt14Year = 20;
    sellingPriceAt14Year = 10;
    numberOfVisitorsPerMonthOfHighSeason = 2;
    numberOfVisitorsPerMonthOfLowSeason = 0.5;
    annualGrant = 0;

    litter = 200;
    gestationTime = 6 * 7;
    percentInfantMortality = 50;
}

Chicken::Chicken(int ageSet) {
    age = ageSet;
    feed = "Seed";
    amountOfFoodToEaPerDay = 150;
    hungryDay = 1;
    sexualMaturity = 6 * 30;
    endOfReproduction = 8 * 365;
    lifeExperience = 15 * 365;
    purchasePriceAt6Month = 20;
    sellingPriceAt6Month = 10;
    purchasePriceAt4Year = 20;
    sellingPriceAt4Year = 10;
    purchasePriceAt14Year = 20;
    sellingPriceAt14Year = 10;
    numberOfVisitorsPerMonthOfHighSeason = 2;
    numberOfVisitorsPerMonthOfLowSeason = 0.5;
    annualGrant = 0;

    litter = 200;
    gestationTime = 6 * 7;
    percentInfantMortality = 50;
}
