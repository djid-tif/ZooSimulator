//
// Created by Raphael Arabeyre on 04/06/2021.
//

#ifndef ZOOSIMULATOR_IHABITAT_H
#define ZOOSIMULATOR_IHABITAT_H


#include <iostream>
#include <string>
#include <vector>
#include "../Animals/IAnimal.h"
#include "../Animals/IAnimal.cpp"
#include "../Animals/Female/Chicken/Chicken.h"
#include "../Animals/Female/Chicken/Chicken.cpp"
#include "../Animals/Male/Rooster/Rooster.h"
#include "../Animals/Male/Rooster/Rooster.cpp"
#include "../Animals/Female/TigerF/TigerF.h"
#include "../Animals/Female/TigerF/TigerF.cpp"
#include "../Animals/Male/TigerM/TigerM.h"
#include "../Animals/Male/TigerM/TigerM.cpp"
#include "../Animals/Female/EagleF/EagleF.h"
#include "../Animals/Female/EagleF/EagleF.cpp"
#include "../Animals/Male/EagleM/EagleM.h"
#include "../Animals/Male/EagleM/EagleM.cpp"

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
