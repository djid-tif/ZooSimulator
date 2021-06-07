//
// Created by Raphael Arabeyre on 03/06/2021.
//

#ifndef ZOOSIMULATOR_TIGERF_H
#define ZOOSIMULATOR_TIGERF_H


#include <Female.h>

class TigerF :public Female{


    int waitingDayForNewLitter;

public:
    TigerF();
    TigerF(int ageSet);
};


#endif //ZOOSIMULATOR_TIGERF_H
