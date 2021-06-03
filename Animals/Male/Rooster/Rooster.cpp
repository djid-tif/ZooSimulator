//
// Created by Raphael Arabeyre on 03/06/2021.
//

#include "Rooster.h"

Rooster::Rooster() {
    feed = "Seed";
    amountOfFoodToEaPerDay = 180;
    hungryDay = 2;
    sexualMaturity = 6 * 30;
    endOfReproduction = 8 * 365;
    lifeExperience = 15 * 365;
    buyingPriceAt6Month = 100;
    sellingPriceAt6Month = 20;
    buyingPriceAt4Year = 100;
    sellingPriceAt4Year = 20;
    buyingPriceAt14Year = 100;
    sellingPriceAt14Year = 20;
    numberOfVisitorsPerMonthOfHighSeason = 2;
    numberOfVisitorsPerMonthOfLowSeason = 0.5;
    annualGrant = 0;
}
