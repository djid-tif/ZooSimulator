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

void IHabitat::deleteAnimalInside(int indexOfAnimal){
    IAnimal* animal = animalsInside.at(indexOfAnimal);
    animalsInside.erase(animalsInside.begin()+indexOfAnimal);
    delete animal;
}

IHabitat::~IHabitat() {
    for (auto & i : animalsInside) {   //TODO: when IHabitat has deleted, animals inside hasn't deleted, and i do no why ?
        delete i;
    }
}

void IHabitat::oneDayHasPassed(Zoo* zoo, int indexOfHabitat) {

    bool oneFemale = false;
    bool oneMale = false;

    for (int i =0; i < animalsInside.size(); ++i){
        animalsInside[i]->oneDaysHasPassed(zoo, indexOfHabitat, i);
    }

    for (auto &animal : animalsInside){
        if (animal->isHungry() || !animal->isCanReproduce() || !animal->isAdaptedToHisHabitat() || !animal->isReproductiveCapacity() || animal->isSick()){
            return;
        }

        if (animal->getTypeAnimal() == "Chicken" || animal->getTypeAnimal() == "TigerF" || animal->getTypeAnimal() == "EagleF"){
            oneFemale = true;
        } else if (animal->getTypeAnimal() == "Rooster" || animal->getTypeAnimal() == "TigerM" || animal->getTypeAnimal() == "EagleM") {
            oneMale = true;
        }
    }

    if (oneFemale && oneMale) {
        for (auto &animal : animalsInside) {
            animal->reproduction();
        }
    }

}

void IHabitat::oneMonthHasPassed(int date, Zoo* zoo) {

    for (auto &animal : animalsInside){
        animal->oneMonthHasPassed(date, zoo);
    }

}

string IHabitat::getTypeOfAnimal() const {
    return typeOfAnimal;
}

