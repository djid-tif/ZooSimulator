//
// Created by madjid on 03/06/2021.
//

#include "Seed.h"
#include <iostream>

using namespace std;

void Seed::addSeeds(int q) {
    quantity += q;
}

bool Seed::remove(int q) {
    if (q <= quantity) {
        quantity -= q;
        cout << q << " kg of seeds remain" << endl;
        return true;
    } else {
        return false;
    }
}

int Seed::getQuantity() {
    return quantity;
}


