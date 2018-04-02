//
// Created by Melissa Marián Granados Gómez on 02/04/18.
//

#include "Dolar.h"

Dolar::Dolar(){
    dolar=1;
    peso=18.5*dolar;
}

Dolar::Dolar(int peso, int dolar){
    this->peso=peso;
    this->dolar=dolar;
}
Dolar operator + (const Dolar &F1, const Dolar &F2) {
    Dolar dl;
    dl.dolar= F1.dolar + F2.dolar;
    return dl;
}

Dolar operator + (const Dolar &F1, const Peso &F2) {
    Dolar dl;
    dl.dolar= F1.dolar + F2.peso;

    return dl;
}

Dolar operator + (const Peso &F1, const Dolar &F2) {
    Dolar dl;
    dl.dolar= F1.peso + F2.dolar;
    return dl;
}

bool operator < (const Dolar &F1, const Peso &F2){
    float d,p,c;
    d = F1.dolar;
    p = F2.peso;
    c= d<p;
    return c;
}
