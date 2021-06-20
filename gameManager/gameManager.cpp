//
// Created by madjid on 07/06/2021.
//

#include "gameManager.h"

using namespace std;

void GameManager::displayWelcome() {
    cout << "+--------------------------------------+" << endl;
    cout << "|       Welcome in Zoo Simulator©      |" << endl;
    cout << "|                                      |" << endl;
    cout << "|    you will be the boss of the zoo   |" << endl;
    cout << "|           are you ready ?            |" << endl;
    cout << "|                                      |" << endl;
    cout << "+--------------------------------------+" << endl;
}



int GameManager::displayMenu() {

    string answer;

    cout << "+--------------------------------------+" << endl;
    cout << "|  what do you want to take care of ?  |" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << "|1 - Buy/Sell Animal                   |" << endl;
    cout << "|2 - Buy/sell Food                     |" << endl;
    cout << "|3 - Buy/sell habitat                  |" << endl;
    cout << "|4 - Next Mouth                        |" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << "chose 1, 2, 3 or 4 : ";

    cin >> answer;

    while (answer != "1" && answer != "2" && answer != "3" && answer != "4") {
        cout << "chose 1, 2, 3 or 4 : ";
        cin >> answer;
    }

    return stoi(answer);
}

int GameManager::buyorSell() {

    string answer;

    cout << "+--------------------------------------+" << endl;
    cout << "|  what do you want to take care of ?  |" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << "|1 - Buy                               |" << endl;
    cout << "|2 - sell                              |" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << "chose 1 or 2 : ";
    cin >> answer;

    while (answer != "1" && answer != "2") {
        cout << "chose 1 or 2 : ";
        cin >> answer;
    }

    return stoi(answer);
}

int GameManager::WichAnimal() {
    string answer;

    cout << "+--------------------------------------+" << endl;
    cout << "| which animal do you want to choose ? |" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << "|1 - Tiger male                        |" << endl;
    cout << "|2 - Tiger female                      |" << endl;
    cout << "|3 - Chicken                           |" << endl;
    cout << "|4 - cock                              |" << endl;
    cout << "|5 - eagle male                        |" << endl;
    cout << "|6 - eagle female                      |" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << "chose 1, 2, 3, 4, 5 or 6 : ";
    cin >> answer;

    while (answer != "1" && answer != "2" && answer != "3" && answer != "4" && answer != "5" && answer != "6") {
        cout << "chose 1, 2, 3, 4, 5 or 6 : ";
        cin >> answer;
    }

    return stoi(answer);
}

int GameManager::howOld() {

    string answer;

    int test = 120;

    cout << "+--------------------------------------+" << endl;
    cout << "| which animal do you want to choose ? |" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << "|1 - 6 month                " << setw(8) << test << " $ |" <<  endl;
    cout << "|2 - 4 years                " << setw(8) << 1000 << " $ |" <<  endl;
    cout << "|3 - 14 years               " << setw(8) << 12000 << " $ |" <<  endl;
    cout << "+--------------------------------------+" << endl;
    cout << "chose 1, 2 or 3 : ";
    cin >> answer;

    while (answer != "1" && answer != "2" && answer != "3") {
        cout << "chose 1, 2 or 3 : ";
        cin >> answer;
    }

    return stoi(answer);
}



bool GameManager::yesOrNoQuestion() {

    string answer;

    cout << "+--------------------------------------+" << endl;
    cout << "|              yes or no               |" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << "chose (y) or n(n) : ";
    cin >> answer;



    while (answer != "y" && answer != "n") {

        cout << "+--------------------------------------+" << endl;
        cout << "|  choose (y) for yes or (n) for no !  |" << endl;
        cout << "+--------------------------------------+" << endl;
        cout << "chose (y) or n(n) : ";
        cin >> answer;

    }
    return (answer[0] == *"y");
}

void GameManager::displayBudget(uint budget) {
    cout << "+--------------------------------------+" << endl;
    cout << "|           Budget : "<< setw(8) << budget << " $        |" <<  endl;
    cout << "+--------------------------------------+" << endl;

}

void GameManager::correctAnswer() {
    cout << "+--------------------------------------+" << endl;
    cout << "|      select a correct answer !       |" << endl;
    cout << "+--------------------------------------+" << endl;

}

int GameManager::diplaywichHabitat() {
    string answer;


    cout << "+--------------------------------------+" << endl;
    cout << "|which habitat do you want to choose ? |" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << "|1 - Chicken coop           " << setw(8) << 300 << " $ |" <<  endl;
    cout << "|2 - Tiger habitat          " << setw(8) << 2000 << " $ |" <<  endl;
    cout << "|3 - Eagle habitat          " << setw(8) << 2000 << " $ |" <<  endl;
    cout << "+--------------------------------------+" << endl;
    cout << "chose 1, 2 or 3 : ";
    cin >> answer;

    while (answer != "1" && answer != "2" && answer != "3") {
        cout << "chose 1, 2 or 3 : ";
        cin >> answer;
    }

    return stoi(answer);

}

//int GameManager::diplaywichHabitatSell() {
//
//    string answer;
//    int id = 0;
//
//
//
//    cout << "+--------------------------------------+" << endl;
//    cout << "|which habitat do you want to choose ? |" << endl;
//    cout << "+--------------------------------------+" << endl;
//    for (int i = 0; i < )
//    cout << "|1 - Chicken coop                      " << endl
//
//
//    cout << "|1 - Chicken coop           " << setw(8) << 300 << " $ |" <<  endl;
//    cout << "|2 - Tiger habitat          " << setw(8) << 2000 << " $ |" <<  endl;
//    cout << "|3 - Eagle habitat          " << setw(8) << 2000 << " $ |" <<  endl;
//    cout << "+--------------------------------------+" << endl;
//    cout << "chose 1, 2 or 3 : ";
//    cin >> answer;
//
//    while (answer != "1" && answer != "2" && answer != "3") {
//        cout << "chose 1, 2 or 3 : ";
//        cin >> answer;
//    }
//
//    return stoi(answer);
//
//}
//
