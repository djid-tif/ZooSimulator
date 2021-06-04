#include <iostream>


using namespace std;


int main() {

    Zoo *zoo = new Zoo(new Seed, new Meat);

    zoo->creditBudget(1000);
    zoo->debiteBudget(4500);
    

    cout << zoo->getBudget() << endl;

    for (int i = 0; i <= 120; i++) {

    }

    std::cout << "Hello, World!" << std::endl;





    return 0;
}
