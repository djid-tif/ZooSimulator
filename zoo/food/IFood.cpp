//
// Created by raphou le bg on 03/06/2021.
//

#include "IFood.h"


IFood::IFood(Zoo *zoo): m_zoo(zoo) {}

Zoo *IFood::getZoo() const {
    return m_zoo;
}
