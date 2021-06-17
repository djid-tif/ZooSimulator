//
// Created by Raphael Arabeyre on 04/06/2021.
//

#ifndef ZOOSIMULATOR_IHABITAT_H
#define ZOOSIMULATOR_IHABITAT_H


#include <iostream>
#include <string>
#include <vector>
#include "IAnimal.h"
#include "Chicken.h"
#include "Rooster.h"
#include "TigerF.h"
#include "TigerM.h"
#include "EagleF.h"
#include "EagleM.h"

using namespace std;

class IHabitat {


protected:
    vector<IAnimal*> animalsInside;
    int purchasePrice;
    int sellingPrice;
    int ability;
    int overpopulationLossPerMonth;
    int probabilityOfIllnessPerMonth;
    string typeOfAnimal;

public:

    ~IHabitat();
    vector<IAnimal *> getAnimalsInside() const;
    int getPurchasePrice() const;
    int getSellingPrice() const;
    int getAbility() const;
    int getOverpopulationLossPerMonth() const;
    int getProbabilityOfIllnessPerMonth() const;
    string getTypeOfAnimal() const;

    void addAnimalInThis(IAnimal*);
    void eraseAnimalInside(int index);
    void deleteAnimalInside(int indexOfAnimal);
    void buyAnimal(string animal, int age);
    void childBirth(IAnimal*);

    void oneMonthHasPassed();

    void oneDayHasPassed(int indexOfHabitat);
};


#endif //ZOOSIMULATOR_IHABITAT_H
