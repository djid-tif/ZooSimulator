//
// Created by Raphael Arabeyre on 04/06/2021.
//

#include "IHabitat.h"

 vector<IAnimal *> IHabitat::getAnimalsInside() const {
    return animalsInside;
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

void IHabitat::addAnimalInThis(IAnimal* animal) {
    animalsInside.push_back(animal);
}

void IHabitat::eraseAnimalInside(int index){
    animalsInside.erase(animalsInside.begin()+index);
}


