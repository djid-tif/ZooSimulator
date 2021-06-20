#include <iostream>

#include "./zoo/Zoo.h"
#include "./gameManager/gameManager.h"


using namespace std;


int main() {



    Zoo *zoo = new Zoo(new Seed, new Meat);
    GameManager::displayWelcome();

    int date = 0;

    while (date < 120 * 360) {
        date++;


        GameManager::displayBudget(zoo->getBudget());



        int menuChoice = 0;

        while ( menuChoice != 4) {

            menuChoice = GameManager::displayMenu();

            if (menuChoice != 1 && menuChoice != 2 && menuChoice != 3 && menuChoice != 4) {
                GameManager::correctAnswer();
                GameManager::displayMenu();
            }

            if (menuChoice == 1) {
                if (GameManager::buyorSell() == 1) {
                    zoo->buyAnimal();
                } else {
                    zoo->sellAnimal();
                }
            }



            if (menuChoice == 3) {
                if (GameManager::buyorSell() == 1) {
                    zoo->buyHabitat(GameManager::diplaywichHabitat());
                } else {
                    zoo->sellHabitat();
                }


            }






        }


        cout << "que voulez vous faire :" << endl;
        cout << "       - acheter un habitat press 1" << endl;
        cout << "       - vendre un habitat press 2" << endl;
        cout << "       - acheter un animal press 3" << endl;
        cout << "       - vendre un animal press 4" << endl;
        cout << "       - quite 5" << endl;

        int res = 0;

        cin >> res;




        switch (res) {
            case 1:
//                zoo->buyHabitat();
                break;
            case 2:
                zoo->sellHabitat();
                break;
            case 3:
                zoo->buyAnimal();
                break;
            case 4:
                zoo->sellAnimal();
                break;
            default:
                break;
        }
        while (res != 5) {
            cout << "que voulez vous faire :" << endl;
            cout << "       - acheter un habitat press 1" << endl;
            cout << "       - vendre un habitat press 2" << endl;
            cout << "       - acheter un animal press 3" << endl;
            cout << "       - vendre un animal press 4" << endl;
            cout << "       - quite 5" << endl;


            cin >> res;

            switch (res) {
                case 1:
//                    zoo->buyHabitat();
                    break;
                case 2:
                    zoo->sellHabitat();
                    break;
                case 3:
                    zoo->buyAnimal();
                    break;
                case 4:
                    zoo->sellAnimal();
                    break;
            }

        }

        for (int i = 0; i < 30; ++i) {
            zoo->oneDayHasPassed();
            date++;
        }


        zoo->oneMonthHasPassed();
    }

    return 0;
}
