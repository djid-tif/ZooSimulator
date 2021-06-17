//
// Created by Raphael Arabeyre on 03/06/2021.
//

#include "./EagleF.h"

EagleF::EagleF() {
    age = 0;
    feed = "Meet";
    amountOfFoodToEaPerDay = 300;
    hungryDay = 10;
    ageToSexualMaturity = 4 * 365;
    endOfReproduction = 14 * 365;
    lifeExperience = 25 * 365;
    purchasePrice = 1000;
    sellingPrice = 500;
    numberOfVisitorsPerMonthOfHighSeason = 15;
    numberOfVisitorsPerMonthOfLowSeason = 7;
    annualGrant = 2190;
    typeAnimal = "EagleF";

    litter = 2;
    gestationTime = 45;
    percentInfantMortality = 50;
    dayReFertilization = 350;

    partner = nullptr;
}

EagleF::EagleF(int ageSet) {
    age = ageSet;
    feed = "Meet";
    amountOfFoodToEaPerDay = 300;
    hungryDay = 10;
    ageToSexualMaturity = 4 * 365;
    endOfReproduction = 14 * 365;
    lifeExperience = 25 * 365;
    purchasePrice = 1000;
    sellingPrice = 500;
    numberOfVisitorsPerMonthOfHighSeason = 15;
    numberOfVisitorsPerMonthOfLowSeason = 7;
    annualGrant = 2190;
    typeAnimal = "EagleF";

    litter = 2;
    gestationTime = 45;
    percentInfantMortality = 50;
    dayReFertilization = 350;

    partner = nullptr;
}


void EagleF::updateAnimal(){

    if (age == 4*365){
        purchasePrice = 4000;
        sellingPrice = 2000;
    } else if (age == 14*365){
        purchasePrice = 2000;
        sellingPrice = 400;
    }

}
