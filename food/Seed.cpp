//
// Created by madjid on 03/06/2021.
//

#include "./Seed.h"
#include <iostream>

using namespace std;

Seed::Seed() : quantity(2500), PRICE(1000) {}

int Seed::addSeeds(int q) {
    quantity += q;
    return PRICE * q;
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

int Seed::getQuantity() const {
    return quantity;
}
