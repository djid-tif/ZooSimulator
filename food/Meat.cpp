//
// Created by madjid on 03/06/2021.
//

#include "Meat.h"
#include "iostream"


using namespace std;

Meat::Meat() : quantity(5000) {}

void Meat::addMeat(int q) {
    quantity += q;
}

int Meat::getQuantity() {
    return 0;
}

bool Meat::remove(int q) {
    if (q <= quantity) {
        quantity -= q;
        cout << q << " kg of seeds remain" << endl;
        return true;
    } else {
        return false;
    }
}
