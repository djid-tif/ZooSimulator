//
// Created by Raphael Arabeyre on 04/06/2021.
//

#ifndef ZOOSIMULATOR_IHABITAT_H
#define ZOOSIMULATOR_IHABITAT_H


#include <IAnimal.h>
#include <iostream>
#include <vector>

class IHabitat {

protected:
    vector<IAnimal*> animalsInside;
    int purchasePrice;
    int sellingPrice;
    int ability;
    int overpopulationLossPerMonth;
    int probabilityOfIllnessPerMonth;

public:

    ~IHabitat();
    vector<IAnimal *> getAnimalsInside() const;
    int getPurchasePrice() const;
    int getSellingPrice() const;
    int getAbility() const;
    int getOverpopulationLossPerMonth() const;
    int getProbabilityOfIllnessPerMonth() const;

    void addAnimalInThis(IAnimal*);
    void eraseAnimalInside(int index);
    void deleteAnimalInside(int indexOfAnimal);
};


#endif //ZOOSIMULATOR_IHABITAT_H
