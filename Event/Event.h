//
// Created by gnaou on 07/06/2021.
//
#ifndef ZOOSIMULATOR_EVENT_H
#define ZOOSIMULATOR_EVENT_H


#include <vector>
#include <math.h>
#include <iostream>
#include "../zoo/Zoo.h"

using namespace std;

class Event {

public:
    static void Steal(const vector<IAnimal *>& listAnimals);
    static void Fire(const vector<IAnimal *>& animalsInside);
    static int RottenMeat(int totalMeat);
    static int Harmful(int totalSeeds);
    static void ProbabilityEvent(Zoo*);
    static void AnimalSick();
};

#endif //ZOOSIMULATOR_EVENT_H
