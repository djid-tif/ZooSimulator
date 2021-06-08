//
// Created by raphou le bg on 03/06/2021.
//

#include <iostream>
#include "Zoo.h"
#include <Chicken.h>
#include <Rooster.h>
#include <TigerF.h>
#include <TigerM.h>
#include <EagleF.h>
#include <EagleM.h>

using namespace std;

Zoo::Zoo() {
    budget =80000;
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

void Zoo::addAnimal(IAnimal *animal) {
    listAnimals.push_back(animal);
}

void Zoo::buyFood(int seed ,int meat) {
    m_seed.addSeeds(seed);
}

void Zoo::addHabitat(IHabitat* habitat){
    listHabitat.push_back(habitat);
}
void Zoo::deleteHabitat(int indexOfHabitat) {
    IHabitat* habitat = listHabitat.at(indexOfHabitat);

    for (int i = 0; i < habitat->getAnimalsInside().size(); ++i){
        habitat->deleteAnimalInside(i);
    }

    listHabitat.erase(listHabitat.begin()+indexOfHabitat);
    delete habitat;
}

void Zoo::buyHabitat(){
    cout << "witch habit want you buy ?" << endl;                   //TODO Lakhdar
    cout << "       Chicken coop ? (300€)       (press 1)" << endl; //TODO Lakhdar
    cout << "       Tiger habitat ? (2'000€)    (press 2)" << endl; //TODO Lakhdar
    cout << "       Eagle habitat ? (2'000€)    (press 3)" << endl; //TODO Lakhdar

    char res = ' ';                                                 //TODO Lakhdar

    cin >> res;

    if (res == '1'){
        ChickenCoop chickenCoop;
        addHabitat(&chickenCoop);
        debiteBudget(chickenCoop.getPurchasePrice());
    } else if (res == '2'){
        TigerHabitat tigerHabitat;
        addHabitat(&tigerHabitat);
        debiteBudget(tigerHabitat.getPurchasePrice());
    } else if (res == '3'){
        EagleHabitat eagleHabitat;
        addHabitat(&eagleHabitat);
        debiteBudget(eagleHabitat.getPurchasePrice());
    }
}
void Zoo::sellHabitat(int indexOfHabitat){

    IHabitat* habitat = listHabitat.at(indexOfHabitat);

    if (habitat->getAnimalsInside().size() != 0){
        cout << "You can sell habitat, cause is not empty !" << endl; //TODO lakhdar
    } else {
        cout << "You are sell habitat." << endl;                      //TODO lakhdar
        creditBudget(habitat->getSellingPrice());

        listHabitat.erase(listHabitat.begin()+indexOfHabitat);

        delete habitat;
    }
}


void Zoo::moveAnAnimal(int indexOfOldHabitat, int indexOfAnimalInOldHabitat, int indexOfNewHabitat){

    IHabitat* oldHabitat = listHabitat.at(indexOfOldHabitat);
    IAnimal* animal = oldHabitat->getAnimalsInside().at(indexOfAnimalInOldHabitat);
    IHabitat* newHabitat = listHabitat.at(indexOfNewHabitat);

    for (int i = 0; i < oldHabitat->getAnimalsInside().size(); ++i) {

        if (oldHabitat->getAnimalsInside().at(i) == animal){
            newHabitat->addAnimalInThis(oldHabitat->getAnimalsInside().at(i));
            oldHabitat->eraseAnimalInside(i);

            cout << "Animal is moved to habitat." << endl; //TODO lakhdar

            break;
        }
    }
}
void Zoo::addAnimalInsideHabitat(IHabitat* habitat, IAnimal* aninal){
    habitat->addAnimalInThis(aninal);
}
void Zoo::buyAnimal(){

    cout << " Animal :               | 	Prix achat:  "   << endl;          //TODO Lakhdar
    cout << "-----------------------------------------"   << endl;          //TODO Lakhdar
    cout << " Tigre 6 mois	         |    3000€  "   << endl;          //TODO Lakhdar
    cout << " Poule 6 mois	         |    20€  "   << endl;             //TODO Lakhdar
    cout << " Coq 6 mois	         |    100€  "   << endl;             //TODO Lakhdar
    cout << " Aigle 6 mois	         |    1000€  "   << endl;             //TODO Lakhdar
    cout << " Tigre 4 ans	         |    120000€  "   << endl;             //TODO Lakhdar
    cout << " Aigle 4 ans	         |    4000€  "   << endl;             //TODO Lakhdar
    cout << " Tigre 14 ans	         |    60000€  "   << endl;             //TODO Lakhdar
    cout << " Aigle 14 ans	         |    2000€  "   << endl;             //TODO Lakhdar
    cout << ""   << endl;                                                  //TODO Lakhdar
    cout << ""   << endl;                                                 //TODO Lakhdar

    cout << "witch animal want you buy ?" << endl;                       //TODO Lakhdar
    cout << "                           press :  Chicken - 1 " << endl; //TODO Lakhdar
    cout << "                                    Rooster - 2 " << endl; //TODO Lakhdar
    cout << "                                    Tiger   - 3 " << endl; //TODO Lakhdar
    cout << "                                    Eagle   - 4 " << endl; //TODO Lakhdar

    char resForAnimal = ' ';                                             //TODO Lakhdar
    cin >> resForAnimal;

    if (resForAnimal == '1'){

        for (auto & i : listHabitat) {      // It's for verify if zoo has already a appropriate habitat
            if (i->getAbility() == 10 ){
                break;
            }
        }

        cout << "ses habitats" << endl; // TODO Lakhdar

        char resForIndexOfHisHabitat = ' ';

        cin >> resForIndexOfHisHabitat;

        Chicken* chicken = new Chicken(6*30);
        debiteBudget(chicken->getPurchasePrice());

        addAnimalInsideHabitat(listHabitat[resForIndexOfHisHabitat], chicken);

    } else if (resForAnimal == '2'){

        for (auto & i : listHabitat) {      // It's for verify if zoo has already a appropriate habitat
            if (i->getAbility() == 10 ){
                break;
            }
        }

        cout << "ses habitats" << endl; // TODO Lakhdar
        cout << "Choose witch habitat would you take." << endl; // TODO Lakhdar

        char resForIndexOfHisHabitat = ' ';

        cin >> resForIndexOfHisHabitat;

        Rooster* rooster = new Rooster(6*30);
        debiteBudget(rooster->getPurchasePrice());

        addAnimalInsideHabitat(listHabitat[resForIndexOfHisHabitat], rooster);

    } else {

        cout << "OK, now at what age ?" << endl;
        cout << "                           press :  6 month  - 1 " << endl; //TODO Lakhdar
        cout << "                                    4 years  - 2 " << endl; //TODO Lakhdar
        cout << "                                    14 years - 3 " << endl; //TODO Lakhdar

        char resForAge = ' ';                                             //TODO Lakhdar
        cin >> resForAge;
        int age = 0;

        if (resForAge == '1'){
            age = 6 *60;
        } else if ( resForAnimal == '2'){
            age = 4 * 365;
        } else if ( resForAnimal == '3'){
            age = 14 * 365;
        }

        cout << "OK, now female or male ?" << endl;
        cout << "                           press :  Female  - F " << endl; //TODO Lakhdar
        cout << "                                    Male    - M " << endl; //TODO Lakhdar

        char resForSex = ' ';                                             //TODO Lakhdar
        cin >> resForSex;


        if (resForAnimal == '3') {
            if (resForSex == 'F'){

                cout << "ses habitats" << endl; // TODO Lakhdar
                cout << "Choose witch habitat would you take." << endl; // TODO Lakhdar

                char resForIndexOfHisHabitat = ' ';
                cin >> resForIndexOfHisHabitat;

                TigerF* tigerF = new TigerF(age);
                tigerF->updateAnimal();
                debiteBudget(tigerF->getPurchasePrice());

                addAnimalInsideHabitat(listHabitat[resForIndexOfHisHabitat], tigerF);

            } else {
                cout << "ses habitats" << endl; // TODO Lakhdar
                cout << "Choose witch habitat would you take." << endl; // TODO Lakhdar

                char resForIndexOfHisHabitat = ' ';
                cin >> resForIndexOfHisHabitat;

                TigerM* tigerM = new TigerM(age);
                tigerM->updateAnimal();
                debiteBudget(tigerM->getPurchasePrice());

                addAnimalInsideHabitat(listHabitat[resForIndexOfHisHabitat], tigerM);

            }
        } else {
            if (resForSex == 'F'){

                cout << "ses habitats" << endl; // TODO Lakhdar
                cout << "Choose witch habitat would you take." << endl; // TODO Lakhdar

                char resForIndexOfHisHabitat = ' ';
                cin >> resForIndexOfHisHabitat;

                EagleF* eagleF = new EagleF(age);
                eagleF->updateAnimal();
                debiteBudget(eagleF->getPurchasePrice());

                addAnimalInsideHabitat(listHabitat[resForIndexOfHisHabitat], eagleF);

            } else {
                cout << "ses habitats" << endl; // TODO Lakhdar
                cout << "Choose witch habitat would you take." << endl; // TODO Lakhdar

                char resForIndexOfHisHabitat = ' ';
                cin >> resForIndexOfHisHabitat;

                EagleM* eagleM = new EagleM(age);
                eagleM->updateAnimal();
                debiteBudget(eagleM->getPurchasePrice());

                addAnimalInsideHabitat(listHabitat[resForIndexOfHisHabitat], eagleM);

            }
        }


    }
}
void Zoo::sellAnimal(int indexOfHabitat, int indexOfAnimal){

    IHabitat* habitat = listHabitat.at(indexOfHabitat);
    IAnimal* animal = habitat->getAnimalsInside().at(indexOfAnimal);

    creditBudget(animal->getSellingPrice());
    habitat->deleteAnimalInside(indexOfAnimal);
}


