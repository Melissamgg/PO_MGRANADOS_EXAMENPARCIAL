//
// Created by Melissa Marián Granados Gómez on 02/04/18.
//

#include "Peso.h"

Peso::Peso(){
    dolar=1;
    peso=18.5*dolar;
}

Peso::Peso(int peso, int dolar){
    this->peso=peso;
    this->dolar=dolar;
}
Peso operator + (const Peso &F1, const Peso &F2) {
    Peso ps;
    ps.peso= F1.peso + F2.peso;
    return ps;
}

Peso operator + (const Peso &F1, const Dolar &F2) {
    Peso dl;
    dl.peso= F1.peso + F2.dolar;
    return dl;
}

Dolar operator + (const Peso &F1, const Dolar &F2) {
    Dolar dl;
    dl.dolar= F1.peso + F2.dolar;

    return dl;
}
