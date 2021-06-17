//
// Created by raphou le bg on 03/06/2021.
//

#include <iostream>
#include "Zoo.h"
#include "IHabitat.h"
#include "ChickenCoop.h"
#include "TigerHabitat.h"
#include "EagleHabitat.h"



using namespace std;

Zoo::Zoo() {
    budget = 80000;
}

Zoo::Zoo(Seed *seed, Meat *meat) : budget(4000), m_seed(*seed), m_meat(*meat) {}

uint Zoo::getBudget() const {
    return budget;
}

vector<IHabitat *> Zoo::getListHabitat() const {
    return listHabitat;
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

void Zoo::addAnimal(IAnimal *animal) { // TODO Update RAPHAEL
    listAnimals.push_back(animal);
}

void Zoo::buyFood(int seed, int meat) {
    m_seed.addSeeds(seed);
}

void Zoo::addHabitat(IHabitat *habitat) {
    listHabitat.push_back(habitat);
}

void Zoo::deleteHabitat(int indexOfHabitat) {
    IHabitat *habitat = listHabitat.at(indexOfHabitat);

    for (int i = 0; i < habitat->getAnimalsInside().size(); ++i) {
        habitat->deleteAnimalInside(i);
    }

    listHabitat.erase(listHabitat.begin() + indexOfHabitat);
    delete habitat;
}

void Zoo::buyHabitat() {
    cout << "witch habit want you buy ?" << endl;                   //TODO Lakhdar
    cout << "       Chicken coop ? (300€)       (press 1)" << endl; //TODO Lakhdar
    cout << "       Tiger habitat ? (2'000€)    (press 2)" << endl; //TODO Lakhdar
    cout << "       Eagle habitat ? (2'000€)    (press 3)" << endl; //TODO Lakhdar

    char res = ' ';                                                 //TODO Lakhdar

    cin >> res;

    if (res == '1') {
        ChickenCoop chickenCoop;
        addHabitat(&chickenCoop);
        debiteBudget(chickenCoop.getPurchasePrice());
    } else if (res == '2') {
        TigerHabitat tigerHabitat;
        addHabitat(&tigerHabitat);
        debiteBudget(tigerHabitat.getPurchasePrice());
    } else if (res == '3') {
        EagleHabitat eagleHabitat;
        addHabitat(&eagleHabitat);
        debiteBudget(eagleHabitat.getPurchasePrice());
    }
}

void Zoo::sellHabitat() {

    cout << "liste de ses habitat" << endl;   //TODO lakhdar
    cout << "choisir quel habitat" << endl;   //TODO lakhdar

    int resIndexHabitat = 0;

    cin >> resIndexHabitat;


    IHabitat *habitat = listHabitat.at(resIndexHabitat);

    if (habitat->getAnimalsInside().size() != 0) {
        cout << "You can sell habitat, cause is not empty !" << endl; //TODO lakhdar
    } else {
        cout << "You are sell habitat." << endl;                      //TODO lakhdar
        creditBudget(habitat->getSellingPrice());

        listHabitat.erase(listHabitat.begin() + resIndexHabitat);

        delete habitat;
    }
}


void Zoo::moveAnAnimal(int indexOfOldHabitat, int indexOfAnimalInOldHabitat, int indexOfNewHabitat) {

    IHabitat *oldHabitat = listHabitat.at(indexOfOldHabitat);
    IAnimal *animal = oldHabitat->getAnimalsInside().at(indexOfAnimalInOldHabitat);
    IHabitat *newHabitat = listHabitat.at(indexOfNewHabitat);

    if (newHabitat->getTypeOfAnimal() == "Chicken") {
        if (animal->getTypeAnimal() != "Chicken" && animal->getTypeAnimal() != "Rooster") {
            cout << "The new habitat isn't appropriated." << endl;
            return;
        }
    } else if (newHabitat->getTypeOfAnimal() == "Tiger") {
        if (animal->getTypeAnimal() != "TigerM" && animal->getTypeAnimal() != "TigerF") {
            cout << "The new habitat isn't appropriated." << endl;
            return;
        }
    } else if (newHabitat->getTypeOfAnimal() == "Eagle") {
        if (animal->getTypeAnimal() != "EagleM" && animal->getTypeAnimal() != "EagleF") {
            cout << "The new habitat isn't appropriated." << endl;
            return;
        }
    }

    for (int i = 0; i < oldHabitat->getAnimalsInside().size(); ++i) {

        if (oldHabitat->getAnimalsInside().at(i) == animal) {
            newHabitat->addAnimalInThis(oldHabitat->getAnimalsInside().at(i));
            oldHabitat->eraseAnimalInside(i);

            cout << "Animal is moved to habitat." << endl; //TODO lakhdar

            break;
        }
    }

}

void Zoo::addAnimalInsideHabitat(IHabitat *habitat, IAnimal *aninal) {
    habitat->addAnimalInThis(aninal);
}

void Zoo::buyAnimal() {

    cout << " Animal :               | 	Prix achat:  " << endl;          //TODO Lakhdar
    cout << "-----------------------------------------" << endl;          //TODO Lakhdar
    cout << " Tigre 6 mois	         |    3000€  " << endl;          //TODO Lakhdar
    cout << " Poule 6 mois	         |    20€  " << endl;             //TODO Lakhdar
    cout << " Coq 6 mois	         |    100€  " << endl;             //TODO Lakhdar
    cout << " Aigle 6 mois	         |    1000€  " << endl;             //TODO Lakhdar
    cout << " Tigre 4 ans	         |    120000€  " << endl;             //TODO Lakhdar
    cout << " Aigle 4 ans	         |    4000€  " << endl;             //TODO Lakhdar
    cout << " Tigre 14 ans	         |    60000€  " << endl;             //TODO Lakhdar
    cout << " Aigle 14 ans	         |    2000€  " << endl;             //TODO Lakhdar
    cout << "" << endl;                                                  //TODO Lakhdar
    cout << "" << endl;                                                 //TODO Lakhdar

    cout << "witch animal want you buy ?" << endl;                       //TODO Lakhdar
    cout << "                           press :  Chicken - 1 " << endl; //TODO Lakhdar
    cout << "                                    Rooster - 2 " << endl; //TODO Lakhdar
    cout << "                                    Tiger   - 3 " << endl; //TODO Lakhdar
    cout << "                                    Eagle   - 4 " << endl; //TODO Lakhdar

    int resForAnimal = 0;                                             //TODO Lakhdar
    cin >> resForAnimal;

    if (resForAnimal == 1) {

        cout << "Tableau de ses habitat" << endl; // TODO Lakhdar
        cout << "Selectionner un habitat" << endl; // TODO Lakhdar

        int resForIndexOfHisHabitat = 0;

        cin >> resForIndexOfHisHabitat;

        debiteBudget(20);

        listHabitat.at(resForIndexOfHisHabitat)->buyAnimal("Chicken",6*30);

    } else if (resForAnimal == 2) {

        cout << "Tableau de ses habitat" << endl; // TODO Lakhdar
        cout << "Selectionner un habitat" << endl; // TODO Lakhdar

        int resForIndexOfHisHabitat = 0;

        cin >> resForIndexOfHisHabitat;

        debiteBudget(100);

        listHabitat.at(resForIndexOfHisHabitat)->buyAnimal("Rooster",6*30);

    } else {

        cout << "OK, now at what age ?" << endl;
        cout << "                           press :  6 month  - 1 " << endl; //TODO Lakhdar
        cout << "                                    4 years  - 2 " << endl; //TODO Lakhdar
        cout << "                                    14 years - 3 " << endl; //TODO Lakhdar

        int resForAge = 0;                                             //TODO Lakhdar
        cin >> resForAge;
        int age = 0;

        if (resForAge == 1) {
            age = 6 * 60;
        } else if (resForAge == 2) {
            age = 4 * 365;
        } else if (resForAge == 3) {
            age = 14 * 365;
        }

        cout << "OK, now female or male ?" << endl;
        cout << "                           press :  Female  - F " << endl; //TODO Lakhdar
        cout << "                                    Male    - M " << endl; //TODO Lakhdar

        char resForSex = ' ';                                             //TODO Lakhdar
        cin >> resForSex;


        if (resForAnimal == 3) {
            if (resForSex == 'F') {

                cout << "Tableau de ses habitat" << endl; // TODO Lakhdar
                cout << "Selectionner un habitat" << endl; // TODO Lakhdar

                int resForIndexOfHisHabitat = 0;

                cin >> resForIndexOfHisHabitat;

                if (resForAge == 1) {
                    debiteBudget(3000);
                } else if (resForAge == 2) {
                    debiteBudget(120000);
                } else if (resForAge == 3) {
                    debiteBudget(60000);
                }

                listHabitat.at(resForIndexOfHisHabitat)->buyAnimal("TigerF",age);

            } else {

                cout << "Tableau de ses habitat" << endl; // TODO Lakhdar
                cout << "Selectionner un habitat" << endl; // TODO Lakhdar

                int resForIndexOfHisHabitat = 0;

                cin >> resForIndexOfHisHabitat;

                if (resForAge == 1) {
                    debiteBudget(3000);
                } else if (resForAge == 2) {
                    debiteBudget(120000);
                } else if (resForAge == 3) {
                    debiteBudget(60000);
                }

                listHabitat.at(resForIndexOfHisHabitat)->buyAnimal("TigerM",age);

            }
        } else {
            if (resForSex == 'F') {

                cout << "Tableau de ses habitat" << endl; // TODO Lakhdar
                cout << "Selectionner un habitat" << endl; // TODO Lakhdar

                int resForIndexOfHisHabitat = 0;

                cin >> resForIndexOfHisHabitat;

                if (resForAge == '1') {
                    debiteBudget(1000);
                } else if (resForAnimal == '2') {
                    debiteBudget(4000);
                } else if (resForAnimal == '3') {
                    debiteBudget(2000);
                }

                listHabitat.at(resForIndexOfHisHabitat)->buyAnimal("EagleF",age);

            } else {

                cout << "Tableau de ses habitat" << endl; // TODO Lakhdar
                cout << "Selectionner un habitat" << endl; // TODO Lakhdar

                int resForIndexOfHisHabitat = 0;

                cin >> resForIndexOfHisHabitat;

                if (resForAge == '1') {
                    debiteBudget(1000);
                } else if (resForAnimal == '2') {
                    debiteBudget(4000);
                } else if (resForAnimal == '3') {
                    debiteBudget(2000);
                }

                listHabitat.at(resForIndexOfHisHabitat)->buyAnimal("EagleM",age);

            }
        }


    }
}

void Zoo::sellAnimal() {

    cout << " Animal :               | 	Prix de vente:  " << endl;          //TODO Lakhdar
    cout << "-----------------------------------------" << endl;          //TODO Lakhdar
    cout << " Tigre 6 mois	         |    3000€  " << endl;          //TODO Lakhdar
    cout << " Poule 6 mois	         |    20€  " << endl;             //TODO Lakhdar
    cout << " Coq 6 mois	         |    100€  " << endl;             //TODO Lakhdar
    cout << " Aigle 6 mois	         |    1000€  " << endl;             //TODO Lakhdar
    cout << " Tigre 4 ans	         |    120000€  " << endl;             //TODO Lakhdar
    cout << " Aigle 4 ans	         |    4000€  " << endl;             //TODO Lakhdar
    cout << " Tigre 14 ans	         |    60000€  " << endl;             //TODO Lakhdar
    cout << " Aigle 14 ans	         |    2000€  " << endl;             //TODO Lakhdar
    cout << "" << endl;                                                  //TODO Lakhdar
    cout << "" << endl;                                                 //TODO Lakhdar

    cout << "Tableau de ses habitat" << endl; // TODO Lakhdar
    cout << "Selectionner un habitat" << endl; // TODO Lakhdar


    int resForIndexOfHisHabitat = 0;
    cin >> resForIndexOfHisHabitat;

    IHabitat* habitat = listHabitat.at(resForIndexOfHisHabitat);

    cout << "Tableau des animaux dans les habitat" << endl; // TODO Lakhdar
    cout << "Selectionner un animal" << endl; // TODO Lakhdar


    int resForIndexOfHisAnimal = 0;
    cin >> resForIndexOfHisAnimal;


    creditBudget(habitat->getAnimalsInside().at(resForIndexOfHisAnimal)->getSellingPrice());
    habitat->eraseAnimalInside(resForIndexOfHisAnimal);
}


void Zoo::oneDayHasPassed() {
    for (int i = 0; i < listHabitat.size();++i){
        listHabitat[i]->oneDayHasPassed(i);
    }
}

void Zoo::oneMonthHasPassed() {
    for (int i = 0; i < listHabitat.size();++i){
        listHabitat[i]->oneMonthHasPassed();

        for (int i2 = 0; i < listHabitat[i]->getAnimalsInside().size();++i2) {
            if (!listHabitat[i]->getAnimalsInside().at(i2)->isSick()) {
                if (date % 12 * 30 > 5 * 30 && date % 12 * 30 < 9 * 30) {
                    creditBudget(
                            listHabitat[i]->getAnimalsInside().at(i2)->getNumberOfVisitorsPerMonthOfHighSeason() * 2 * 17 +
                                    listHabitat[i]->getAnimalsInside().at(i2)->getNumberOfVisitorsPerMonthOfHighSeason() * 2 * 13);
                } else {
                    creditBudget(
                            listHabitat[i]->getAnimalsInside().at(i2)->getNumberOfVisitorsPerMonthOfLowSeason() * 2 * 17 +
                                    listHabitat[i]->getAnimalsInside().at(i2)->getNumberOfVisitorsPerMonthOfLowSeason() * 2 * 13);
                }
            }
        }
    }
}
