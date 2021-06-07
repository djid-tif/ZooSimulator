//
// Created by gnaou on 07/06/2021.
//
#ifndef ZOOSIMULATOR_EVENT_H
#define ZOOSIMULATOR_EVENT_H
#include <vector>
#include <IAnimal.h>

using namespace std;

class Event {

public:
    void Steal(const vector<IAnimal *>& listAnimals);
    void Fire(const vector<IAnimal *>& animalsInside);
    int RottenMeat(int totalMeat);
    int Harmful(int totalSeeds);
    void ProbabilityEvent(Zoo*);
};

#endif //ZOOSIMULATOR_EVENT_H
