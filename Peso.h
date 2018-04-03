//
// Created by Melissa Marián Granados Gómez on 02/04/18.
//

#ifndef PO_MGRANADOS_EXAMENPARCIAL2_PESO_H
#define PO_MGRANADOS_EXAMENPARCIAL2_PESO_H

#include <iostream>
#include "Dolar.h"
class Peso {

public:
    double peso, dolar;


    friend Peso operator + (const Peso &F1, const Dolar &F2);
    friend Peso operator - (const Peso &F1, const Dolar &F2);
    friend Peso operator++(const Peso &F1, const Dolar &F2);
    friend Peso operator--(const Peso &F1, const Dolar &F2);

    friend bool operator < (const Peso &F1, const Dolar &F2);
    friend bool operator > (const Peso &F1, const Dolar &F2);
    friend bool operator <= (const Peso &F1, const Dolar &F2);
    friend bool operator >= (const Peso &F1, const Dolar &F2);
    friend bool operator == (const Peso &F1, const Dolar &F2);
    friend bool operator != (const Peso &F1, const Dolar &F2);

    Peso();
    Peso(double peso, double dolar);
    std::string to_String();

};


#endif //PO_MGRANADOS_EXAMENPARCIAL2_PESO_H
