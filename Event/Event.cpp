//
// Created by gnaou on 07/06/2021.
//

#include <Zoo.h>
#include <iostream>
#include "Event.h"
#include "IAnimal.h"
#include <math.h>

using namespace std;

void Event::Steal(const vector<IAnimal *> &listAnimals) {
    delete listAnimals[1];
}

void Event::Fire(int indexOfHabitat,Zoo* zoo) {
    zoo->deleteHabitat(indexOfHabitat)
}

int Event::RottenMeat(int totalMeat) {
    return round(totalMeat*0.9);
}

int Event::Harmful(int totalSeeds) {
    return round(totalSeeds*0.9);
}

void Event::ProbabilityEvent(Zoo* zoo) {
    for (int i = 0; i < 4; i++) {
        int random = rand() % 100 + 1;
        switch (i) {
            case 0:{
                if ( random == 1) {
                    Steal(zoo->getListAnimals());
                }
            }
            case 1: {
                if (random == 1) {
               Fire( (rand() % zoo.getListHabitat.size()), zoo);
                }
            }
            case 2: {
                if (random <=20) {
//                    Harmful(int totalSeeds);
                }
            }
            case 3: {
                if (random <= 10) {
//                    RottenMeat(int totalMeat);
                }
            }
        }
    }
}


