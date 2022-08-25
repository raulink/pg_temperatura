/**
 * @file temperatura.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "temperatura.h"

Temperatura::Temperatura(MAX6675 *thermocouple)
{
    this->thermocouple = thermocouple;
}

float Temperatura::leerTemperatura()
{
    return leerTemperatura(thermocouple);
}


