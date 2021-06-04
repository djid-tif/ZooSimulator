//
// Created by Raphael Arabeyre on 03/06/2021.
//

#include "TigerF.h"

TigerF::TigerF() {
    age = 0;
    feed = "Meet";
    amountOfFoodToEaPerDay = 10000;
    hungryDay = 2;
    sexualMaturity = 4 * 365;
    endOfReproduction = 14 * 365;
    lifeExperience = 25 * 365;
    purchasePriceAt6Month = 3000;
    sellingPriceAt6Month = 1500;
    purchasePriceAt4Year = 120000;
    sellingPriceAt4Year = 60000;
    purchasePriceAt14Year = 60000;
    sellingPriceAt14Year = 10000;
    numberOfVisitorsPerMonthOfHighSeason = 30;
    numberOfVisitorsPerMonthOfLowSeason = 5;
    annualGrant = 43800;

    litter = 3;
    gestationTime = 3 * 30;
    percentInfantMortality = 33;

    waitingDayForNewLitter = 20 * 7;
}