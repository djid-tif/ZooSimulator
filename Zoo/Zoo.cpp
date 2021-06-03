//
// Created by madjid on 03/06/2021.
//

#include <iostream>
#include "Zoo.h"

using namespace std;

uint Zoo::getBudget() {
    return budget;
}
void Zoo::creditBudget(uint credit) {
    budget += credit;
    cout << "%d" << credit << "credited ! \n" << endl;
    cout << "New budget : %d" << budget << endl;
}
void Zoo::debiteBudget(uint debite) {
    if (debite > budget) {
        cout << "It's superior as your budget !!" << endl;
        return;
    } else {
        budget -= debite;
    }
}

void Zoo::addAnimal(IAnimal *animal) {
    listAnimals.push_back(animal);
}
void Zoo::deleteAnimal(IAnimal *animal)

IFood Zoo::getFood() {
    return listFood ;
}




