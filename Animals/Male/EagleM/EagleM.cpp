//
// Created by Raphael Arabeyre on 03/06/2021.
//

#include "./EagleM.h"

EagleM::EagleM() {
    age = 0;
    feed = "Meet";
    amountOfFoodToEaPerDay = 250;
    hungryDay = 10;
    ageToSexualMaturity = 4 * 365;
    endOfReproduction = 14 * 365;
    lifeExperience = 25 * 365;
    purchasePrice = 1000;
    sellingPrice = 500;
    numberOfVisitorsPerMonthOfHighSeason = 15;
    numberOfVisitorsPerMonthOfLowSeason = 7;
    annualGrant = 2190;
    typeAnimal = "EagleM";

    partner = nullptr;
}


EagleM::EagleM(int ageSet) {
    age = ageSet;
    feed = "Meet";
    amountOfFoodToEaPerDay = 250;
    hungryDay = 10;
    ageToSexualMaturity = 4 * 365;
    endOfReproduction = 14 * 365;
    lifeExperience = 25 * 365;
    purchasePrice = 1000;
    sellingPrice = 500;
    numberOfVisitorsPerMonthOfHighSeason = 15;
    numberOfVisitorsPerMonthOfLowSeason = 7;
    annualGrant = 2190;
    typeAnimal = "EagleM";

    partner = nullptr;
}

void EagleM::updateAnimal(){

    if (age == 4*365){
        purchasePrice = 4000;
        sellingPrice = 2000;
    } else if (age == 14*365){
        purchasePrice = 2000;
        sellingPrice = 400;
    }

}

