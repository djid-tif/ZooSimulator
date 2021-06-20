//
// Created by madjid on 03/06/2021.
//

#ifndef ZOOSIMULATOR_ZOO_H
#define ZOOSIMULATOR_ZOO_H

#include <vector>
#include <string>
#include <cstdlib>
#include "../food/Seed.h"
//#include "../food/Seed.cpp"
#include "../food/Meat.h"
//#include "../food/Meat.cpp"

#include "../IHabitat/IHabitat.h"
//#include "../IHabitat/IHabitat.cpp"
#include "../IHabitat/ChickenCoop/ChickenCoop.h"
//#include "../IHabitat/ChickenCoop/ChickenCoop.cpp"
#include "../IHabitat/TigerHabitat/TigerHabitat.h"
//#include "../IHabitat/TigerHabitat/TigerHabitat.cpp"
#include "../IHabitat/EagleHabitat/EagleHabitat.h"
//#include "../IHabitat/EagleHabitat/EagleHabitat.cpp"


using namespace std;



class Zoo {

    int date{};

    uint budget;
    vector<IHabitat *> listHabitat;
    Seed m_seed;
    Meat m_meat;


public:

    Zoo(Seed *, Meat *);

    Zoo();

    uint getBudget() const;
    bool creditBudget(uint credit);
    bool debiteBudget(uint debite);

    void buyFood(int seed, int meat);
    

    vector<IHabitat *> getListHabitat() const;
    void deleteHabitat(int);

    void buyHabitat();
    void addHabitat(IHabitat *);
    void sellHabitat();

    void addAnimalInsideHabitat(IHabitat *habitat, IAnimal *aninal);
    void moveAnAnimal(int indexOfOldHabitat, int indexOfAnimalInOldHabitat, int indexOfNewHabitat);
    void buyAnimal();
    void sellAnimal();


    void oneDayHasPassed();
    void oneMonthHasPassed();
};

#endif //ZOOSIMULATOR_ZOO_H
