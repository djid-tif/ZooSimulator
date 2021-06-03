//
// Created by Raphael Arabeyre on 03/06/2021.
//

#ifndef ZOOSIMULATOR_EAGLEM_H
#define ZOOSIMULATOR_EAGLEM_H


#include <Food/IFood.h>
#include <Animals/Male/Male.h>

class EagleM : public Male {

    IAnimal* partner;

public:
    EagleM();
};


#endif //ZOOSIMULATOR_EAGLEM_H
