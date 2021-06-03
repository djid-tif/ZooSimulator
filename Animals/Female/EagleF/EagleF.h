//
// Created by Raphael Arabeyre on 03/06/2021.
//

#ifndef ZOOSIMULATOR_EAGLEF_H
#define ZOOSIMULATOR_EAGLEF_H


#include <Food/IFood.h>
#include <Animals/Female/Female.h>

class EagleF :public Female{

    IAnimal* partner;

public:
    EagleF();
};


#endif //ZOOSIMULATOR_EAGLEF_H
