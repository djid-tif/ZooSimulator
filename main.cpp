#include <iostream>

#include <Zoo.h>
#include "Event/Event.h"

using namespace std;


int main() {

    Zoo *zoo = new Zoo(new Seed, new Meat);

    zoo->creditBudget(1000);
    zoo->debiteBudget(4500);
    
    Event->ProbabilityEvent();

    cout << zoo->getBudget() << endl;

    for (int i = 0; i <= 120; i++) {

    }

    cout << "Hello, World!" << endl;





    return 0;
}
