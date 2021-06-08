//
// Created by Raphael Arabeyre on 03/06/2021.
//

#ifndef ZOOSIMULATOR_TIGERM_H
#define ZOOSIMULATOR_TIGERM_H


#include <Male.h>

class TigerM :public Male{
public:
    TigerM();

    TigerM(int ageSet);

    void updateAnimal();
};


#endif //ZOOSIMULATOR_TIGERM_H
