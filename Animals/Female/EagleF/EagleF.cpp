//
// Created by Raphael Arabeyre on 03/06/2021.
//

#include "EagleF.h"

EagleF::EagleF() {
    age = 0;
    feed = "Meet";
    amountOfFoodToEaPerDay = 300;
    hungryDay = 10;
    sexualMaturity = 4 * 365;
    endOfReproduction = 14 * 365;
    lifeExperience = 25 * 365;
    purchasePriceAt6Month = 1000;
    sellingPriceAt6Month = 500;
    purchasePriceAt4Year = 4000;
    sellingPriceAt4Year = 2000;
    purchasePriceAt14Year = 2000;
    sellingPriceAt14Year = 400;
    numberOfVisitorsPerMonthOfHighSeason = 15;
    numberOfVisitorsPerMonthOfLowSeason = 7;
    annualGrant = 2190;

    litter = 2;
    gestationTime = 45;
    percentInfantMortality = 50;

    partner = nullptr;
}

EagleF::EagleF(int ageSet) {
    age = ageSet;
    feed = "Meet";
    amountOfFoodToEaPerDay = 300;
    hungryDay = 10;
    sexualMaturity = 4 * 365;
    endOfReproduction = 14 * 365;
    lifeExperience = 25 * 365;
    purchasePriceAt6Month = 1000;
    sellingPriceAt6Month = 500;
    purchasePriceAt4Year = 4000;
    sellingPriceAt4Year = 2000;
    purchasePriceAt14Year = 2000;
    sellingPriceAt14Year = 400;
    numberOfVisitorsPerMonthOfHighSeason = 15;
    numberOfVisitorsPerMonthOfLowSeason = 7;
    annualGrant = 2190;

    litter = 2;
    gestationTime = 45;
    percentInfantMortality = 50;

    partner = nullptr;
}
