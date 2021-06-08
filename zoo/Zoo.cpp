//
// Created by raphou le bg on 03/06/2021.
//

#include "Zoo.h"
#include <iostream>

using namespace std;

Zoo::Zoo(Seed *seed, Meat *meat) : budget(4000), m_seed(*seed), m_meat(*meat) {};

uint Zoo::getBudget() const {
    return budget;
}

bool Zoo::creditBudget(uint credit) {
    budget += credit;
    cout << credit << " credited ! " << "New budget : " << budget << endl;
    return true;
}

bool Zoo::debiteBudget(uint debite) {
    if (debite > budget) {
        cout << "It's superior as your budget !!" << endl;
        return false;
    } else {
        budget -= debite;
        return true;
    }
}

void Zoo::addAnimal(IAnimal *animal) {
    listAnimals.push_back(animal);
}

void Zoo::buyFood(int seed ,int meat) {
    debiteBudget(m_seed.addSeeds(seed));

}









