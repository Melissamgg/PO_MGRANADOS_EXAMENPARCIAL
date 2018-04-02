//
// Created by Melissa Marián Granados Gómez on 02/04/18.
//

#ifndef PO_MGRANADOS_EXAMENPARCIAL2_PESO_H
#define PO_MGRANADOS_EXAMENPARCIAL2_PESO_H

#include <iostream>
#include "Dolar.h"
class Peso {

    float peso;
    float dolar;

    friend Peso operator + (const Peso &F1, const Peso &F2);
    friend Peso operator + (const Dolar &F1, const Peso &F2);
    friend Peso operator + (const Peso &F1, const Dolar &F2);
    friend bool operator < (const Dolar &F1, const Peso &F2);
    friend bool operator > (const Dolar &F1, const Peso &F2);
    friend bool operator <= (const Dolar &F1, const Peso &F2);
    friend bool operator >= (const Dolar &F1, const Peso &F2);
    friend bool operator == (const Dolar &F1, const Peso &F2);
    friend bool operator != (const Dolar &F1, const Peso &F2);

    Peso();
    Peso(int peso, int dolar);
    std::string To_String();

};


#endif //PO_MGRANADOS_EXAMENPARCIAL2_PESO_H
