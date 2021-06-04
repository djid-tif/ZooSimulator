//
// Created by Raphael Arabeyre on 04/06/2021.
//

#include "IHabitat.h"

const vector<IAnimal *> &IHabitat::getAnimalsInside() const {
    return AnimalsInside;
}

int IHabitat::getPurchasePrice() const {
    return purchasePrice;
}

int IHabitat::getSellingPrice() const {
    return sellingPrice;
}

int IHabitat::getAbility() const {
    return ability;
}

int IHabitat::getOverpopulationLossPerMonth() const {
    return overpopulationLossPerMonth;
}

int IHabitat::getProbabilityOfIllnessPerMonth() const {
    return probabilityOfIllnessPerMonth;
}
