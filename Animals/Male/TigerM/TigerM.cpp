//
// Created by Raphael Arabeyre on 03/06/2021.
//


#include "TigerM.h"

TigerM::TigerM() {
    age = 0;
    feed = "Meet";
    amountOfFoodToEaPerDay = 12000;
    hungryDay = 2;
    ageToSexualMaturity = 6 * 365;
    endOfReproduction = 14 * 365;
    lifeExperience = 25 * 365;
    purchasePrice = 3000;
    sellingPrice = 1500;
    numberOfVisitorsPerMonthOfLowSeason = 5;
    annualGrant = 43800;
    typeAnimal = "TigerM";

}

TigerM::TigerM(int ageSet) {
    age = ageSet;
    feed = "Meet";
    amountOfFoodToEaPerDay = 12000;
    hungryDay = 2;
    ageToSexualMaturity = 6 * 365;
    endOfReproduction = 14 * 365;
    lifeExperience = 25 * 365;
    purchasePrice = 3000;
    sellingPrice = 1500;
    numberOfVisitorsPerMonthOfHighSeason = 30;
    numberOfVisitorsPerMonthOfLowSeason = 5;
    annualGrant = 43800;
    typeAnimal = "TigerM";

}

void TigerM::updateAnimal(){

    if (age == 4*365){
        purchasePrice = 120000;
        sellingPrice = 60000;
    } else if (age == 14*365){
        purchasePrice = 60000;
        sellingPrice = 10000;
    }

}