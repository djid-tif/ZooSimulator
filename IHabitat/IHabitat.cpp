//
// Created by Raphael Arabeyre on 04/06/2021.
//

#include "./IHabitat.h"

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
    for (int i = 0; i < animalsInside.size();i++) {
        delete animalsInside[i];
    }
}

void IHabitat::oneDayHasPassed(int indexOfHabitat) {

    bool oneFemale = false;
    bool oneMale = false;

    for (int i =0; i < animalsInside.size(); ++i){
        animalsInside[i]->oneDaysHasPassed(indexOfHabitat, i);
        if (animalsInside[i]->isChildBirth()){
            childBirth(animalsInside[i]);
        }
    }



    for (int i = 0; i < animalsInside.size();++i){
        if (animalsInside[i]->isHungry() || !animalsInside[i]->isCanReproduce() || !animalsInside[i]->isAdaptedToHisHabitat() || !animalsInside[i]->isReproductiveCapacity() || animalsInside[i]->isSick()){
            return;
        }

        if (animalsInside[i]->getTypeAnimal() == "Chicken" || animalsInside[i]->getTypeAnimal() == "TigerF" || animalsInside[i]->getTypeAnimal() == "EagleF"){
            oneFemale = true;
        } else if (animalsInside[i]->getTypeAnimal() == "Rooster" || animalsInside[i]->getTypeAnimal() == "TigerM" || animalsInside[i]->getTypeAnimal() == "EagleM") {
            oneMale = true;
        }
    }

    if (oneFemale && oneMale) {
        for (int i = 0; i < animalsInside.size(); ++i) {
            animalsInside[i]->reproduction();
        }
    }

}

void IHabitat::oneMonthHasPassed() {

    for (int i = 0; i < animalsInside.size(); ++i) {
        animalsInside[i]->oneMonthHasPassed();
    }

}

string IHabitat::getTypeOfAnimal() const {
    return typeOfAnimal;
}

void IHabitat::buyAnimal(string animal, int age) {
    if (animal == "Chicken"){
        addAnimalInThis(new Chicken(age));
    } else if (animal == "Rooster"){
        addAnimalInThis(new Rooster(age));
    } else if (animal == "EagleF"){
        addAnimalInThis(new EagleF(age));
    }else if (animal == "EagleM"){
        addAnimalInThis(new EagleM(age));
    }else if (animal == "TigerF"){
        addAnimalInThis(new TigerF(age));
    }else if (animal == "TigerM"){
        addAnimalInThis(new TigerM(age));
    }
}

void IHabitat::childBirth(IAnimal* animal) {
    if (animal->getTypeAnimal() == "Chicken"){
        if (rand() < 50){
            addAnimalInThis(new Chicken);
        } else {
            addAnimalInThis(new Rooster);
        }
    } else if (animal->getTypeAnimal() == "EagleF"){
        if (rand() < 50){
            addAnimalInThis(new EagleM);
        } else{
            addAnimalInThis(new EagleF);
        }
    } else if (animal->getTypeAnimal() == "TigerF"){
        if (rand() < 50){
            addAnimalInThis(new TigerM);
        } else {
            addAnimalInThis(new TigerF);
        }
    }

    animal->setChildBirth(false);
}



