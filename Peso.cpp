//
// Created by Melissa Marián Granados Gómez on 02/04/18.
//

#include "Peso.h"

Peso::Peso(){
    peso=1.0;
}

Peso::Peso(double peso, double dolar){
    this->peso=peso;
    this->dolar=dolar;

}
Peso operator + (const Peso &F1, const Dolar &F2) {
    Peso ps1, ps2, ps3;
    ps1.peso= F1.peso + F1.peso;
    ps2.peso= F1.peso + F2.dolar*18.5;
    ps3.peso= F2.dolar*18.5 + F1.peso;
    return ps1, ps2, ps3;
}

Peso operator - (const Peso &F1, const Dolar &F2) {
    Peso ps1, ps2, ps3;
    ps1.peso= F1.peso - F1.peso;
    ps2.peso= F1.peso - F2.dolar*18.5;
    ps3.peso= F2.dolar*18.5 - F1.peso;
    return ps1, ps2, ps3;
}

bool operator < (const Peso &F1, const Dolar &F2){
    double d,p;
    d = F1.dolar*18.5;
    p = F2.peso;
    return p<d;
}

bool operator > (const Peso &F1, const Dolar &F2){
    double d,p;
    d = F1.dolar*18.5;
    p = F2.peso;
    return p>d;
}

bool operator >= (const Peso &F1, const Dolar &F2){
    double d,p;
    d = F1.dolar*18.5;
    p = F2.peso;
    return p>=d;
}

bool operator <= (const Peso &F1, const Dolar &F2){
    double d,p;
    d = F1.dolar*18.5;
    p = F2.peso;
    return p<=d;
}


bool operator == (const Peso &F1, const Dolar &F2){
    double d,p;
    d = F1.dolar*18.5;
    p = F2.peso;
    return p==d;
}

bool operator != (const Peso &F1, const Dolar &F2){
    double d,p;
    d = F1.dolar*18.5;
    p = F2.peso;
    return p!=d;
}

Peso operator ++(const Peso &F1, const Dolar &F2){
    Peso coin1;
    coin1.dolar=F1.dolar+F2.dolar;
    coin1++;
    Peso coin2;
    coin2.dolar=F1.peso+F2.peso;
    coin2 ++;
    return coin1, coin2;
}

Peso operator --(const Peso &F1, const Dolar &F2){
    Peso coin3;
    coin3.dolar=F1.dolar-F2.dolar;
    coin3--;
    Peso coin4;
    coin4.dolar=F1.peso-F2.peso;
    coin4 --;
    return coin3, coin4;
}

std::string Peso::to_String(){
    return "$"+ std::to_string(peso)+"MXN";
}