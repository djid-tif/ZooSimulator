//
// Created by madjid on 03/06/2021.
//

#include "Seed.h"


void Seed::addSeeds(int q) {
    quantity += q;
}

string Seed::remove(int q) {
    if (q <= quantity) {
        quantity -= q;
        return to_string(q) + " kg of seeds remain";
    } else {
        return ""
    }
}

int Seed::getQuantity() {
    return quantity;
}


