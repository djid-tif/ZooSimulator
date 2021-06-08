//
// Created by Raphael Arabeyre on 03/06/2021.
//

#include "Female.h"

void Female::reproduction() {
    canReproduce = false;
    pregnant = true;
    pregnantCount = gestationTime;
}

void Female::oneDayOfPregnant(Zoo* zoo, int indexOfHabitat) {
    pregnantCount--;
    if (pregnantCount == 0){
        pregnant = false;
        countDayReFertilization = dayReFertilization;
        zoo->childbirth(indexOfHabitat, this, percentInfantMortality);
    }
}

int Female::getLitter() const {
    return litter;
}

int Female::getGestationTime() const {
    return gestationTime;
}

int Female::getPercentInfantMortality() const {
    return percentInfantMortality;
}
