//
// Created by Raphael Arabeyre on 03/06/2021.
//

#include "TigerF.h"

TigerF::TigerF() {
    age = 0;
    feed = "Meet";
    amountOfFoodToEaPerDay = 10000;
    hungryDay = 2;
    ageToSexualMaturity = 4 * 365;
    endOfReproduction = 14 * 365;
    lifeExperience = 25 * 365;
    purchasePrice = 3000;
    sellingPrice = 1500;
    numberOfVisitorsPerMonthOfHighSeason = 30;
    numberOfVisitorsPerMonthOfLowSeason = 5;
    annualGrant = 43800;

    litter = 3;
    gestationTime = 3 * 30;
    percentInfantMortality = 33;

    waitingDayForNewLitter = 20 * 7;
}

TigerF::TigerF(int ageSet) {
    age = ageSet;
    feed = "Meet";
    amountOfFoodToEaPerDay = 10000;
    hungryDay = 2;
    ageToSexualMaturity = 4 * 365;
    endOfReproduction = 14 * 365;
    lifeExperience = 25 * 365;
    purchasePrice = 3000;
    sellingPrice = 1500;
    numberOfVisitorsPerMonthOfHighSeason = 30;
    numberOfVisitorsPerMonthOfLowSeason = 5;
    annualGrant = 43800;

    litter = 3;
    gestationTime = 3 * 30;
    percentInfantMortality = 33;

    waitingDayForNewLitter = 20 * 7;
}

void TigerF::updateAnimal(){

    if (age == 4*365){
        purchasePrice = 120000;
        sellingPrice = 60000;
    } else if (age == 14*365){
        purchasePrice = 60000;
        sellingPrice = 10000;
    }

}