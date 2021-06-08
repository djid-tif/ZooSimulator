#include <iostream>
#include "zoo/Zoo.h"
#include "food/Seed.h"
#include "food/Meat.h"
#include "gameManager/gameManager.h"


using namespace std;


int main() {

    Zoo *zoo = new Zoo(new Seed, new Meat);


    GameManager::displayWelcome();
    GameManager::WichAnimal();
    GameManager::howOld();

    zoo->creditBudget(1000);
    zoo->debiteBudget(4500);


    cout << zoo->getBudget() << endl;

    for (int i = 0; i <= 120; i++) {


    }

    std::cout << "Hello, World!" << std::endl;





    return 0;
}