//
// Created by Melissa Marián Granados Gómez on 02/04/18.
//

#ifndef PO_MGRANADOS_EXAMENPARCIAL2_DOLAR_H
#define PO_MGRANADOS_EXAMENPARCIAL2_DOLAR_H

#include <iostream>;
#include "Peso.h"

class Dolar {


    float dolar;
    float peso;

    friend Dolar operator + (const Peso &F1, const Peso &F2);
    friend Dolar operator + (const Dolar &F1, const Peso &F2);
    friend Dolar operator + (const Peso &F1, const Dolar &F2);
    friend bool operator < (const Dolar &F1, const Peso &F2);
    friend bool operator > (const Dolar &F1, const Peso &F2);
    friend bool operator <= (const Dolar &F1, const Peso &F2);
    friend bool operator >= (const Dolar &F1, const Peso &F2);
    friend bool operator == (const Dolar &F1, const Peso &F2);
    friend bool operator != (const Dolar &F1, const Peso &F2);

    Dolar();
    Dolar(int peso, int dolar);
    std::string To_String();
};


#endif //PO_MGRANADOS_EXAMENPARCIAL2_DOLAR_H
