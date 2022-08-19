/**
 * @file temperatura.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _TEMPERATURA_H_
#define _TEMPERATURA_H_
#include <max6675.h>

// lectura de temperatura de un sensor de temperatura
float leerTemperatura(MAX6675 *thermocouple);
class Temperatura {
  public:
    Temperatura(MAX6675 *thermocouple);
    float leerTemperatura();
  private:
    MAX6675 *thermocouple;
};




#endif // _TEMPERATURA_H_