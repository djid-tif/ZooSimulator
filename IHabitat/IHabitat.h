//
// Created by Raphael Arabeyre on 04/06/2021.
//

#ifndef ZOOSIMULATOR_IHABITAT_H
#define ZOOSIMULATOR_IHABITAT_H


#include <IAnimal.h>
#include <iostream>
#include <vector>

class IHabitat {
    vector<IAnimal*> AnimalsInside;
    int purchasePrice;
    int sellingPrice;
    int ability;
    int overpopulationLossPerMonth;
    int probabilityOfIllnessPerMonth;

public:
    const vector<IAnimal *> &getAnimalsInside() const;

    int getPurchasePrice() const;

    int getSellingPrice() const;

    int getAbility() const;

    int getOverpopulationLossPerMonth() const;

    int getProbabilityOfIllnessPerMonth() const;
};


#endif //ZOOSIMULATOR_IHABITAT_H
