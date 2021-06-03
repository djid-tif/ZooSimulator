//
// Created by raphou le bg on 03/06/2021.
//

#include <iostream>
#include "Zoo.h"
#include <iostream>

using namespace std;

uint Zoo::getBudget() {
    return budget;
}
void Zoo::creditBudget(uint credit) {
    budget += credit;
    cout << "%d" << credit << "credited ! \n" << endl;
    cout << "New budget : %d" << budget << endl;
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
void Zoo::deleteAnimal(IAnimal *animal)

IFood Zoo::getFood() {
    return listFood ;
}




