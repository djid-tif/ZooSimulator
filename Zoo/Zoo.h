//
// Created by madjid on 03/06/2021.
//

#ifndef ZOOSIMULATOR_ZOO_H
#define ZOOSIMULATOR_ZOO_H

#include <vector>
#include <string>
#include <cstdlib>
#include <Seed.h>
#include <Meat.h>
#include <IHabitat.h>
#include <ChickenCoop.h>
#include <TigerHabitat.h>
#include <EagleHabitat.h>

using namespace std;


class IAnimal;
class IFood;

class Zoo {

    uint budget;
    vector<IAnimal *> listAnimals;
    vector<IHabitat *> listHabitat;
    Seed m_seed;
    Meat m_meat;


public:

    Zoo(Seed *, Meat *);

    Zoo();

    uint getBudget() const;
    bool creditBudget(uint credit);
    bool debiteBudget(uint debite);

    void addAnimal(IAnimal* animal);


    void buyFood(int seed, int meat);

    vector<IHabitat *> getListHabitat() const;

    void buyHabitat();

    void addHabitat(IHabitat *);

    void sellHabitat(IHabitat *habitat);


    void addAnimalInsideHabitat(IHabitat *habitat, IAnimal *aninal);

    void moveAnAnimal(int indexOfOldHabitat, int indexOfAnimalInOldHabitat, int indexOfNewHabitat);

    void buyAnimal();
};

#endif //ZOOSIMULATOR_ZOO_H
