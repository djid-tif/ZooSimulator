//
// Created by Raphael Arabeyre on 03/06/2021.
//

#include "Chicken.h"

Chicken::Chicken() {
    feed = "Seed";
    amountOfFoodToEaPerDay = 150;
    hungryDay = 1;
    sexualMaturity = 6 * 30;
    endOfReproduction = 8 * 365;
    lifeExperience = 15 * 365;
    buyingPriceAt6Month = 20;
    sellingPriceAt6Month = 10;
    buyingPriceAt4Year = 20;
    sellingPriceAt4Year = 10;
    buyingPriceAt14Year = 20;
    sellingPriceAt14Year = 10;
    numberOfVisitorsPerMonthOfHighSeason = 2;
    numberOfVisitorsPerMonthOfLowSeason = 0.5;
    annualGrant = 0;

    litter = 200;
    gestationTime = 6 * 7;
    percentInfantMortality = 50;
}
