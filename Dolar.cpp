//
// Created by Melissa Marián Granados Gómez on 02/04/18.
//

#include "Dolar.h"

Dolar::Dolar(){
    dolar=1;

}

Dolar::Dolar(double peso, double dolar){
    this->peso=peso;
    this->dolar=dolar;
}
Dolar operator + (const Dolar &F1, const Dolar &F2) {
    Peso dl1, dl2, dl3;
    dl1.dolar= F1.dolar + F1.dolar;
    dl2.dolar= F1.peso/18.5 + F2.dolar;
    dl3.dolar= F2.dolar + F1.peso/18.5;
    return dl1, dl2, dl3;
}

Dolar operator - (const Dolar &F1, const Peso &F2) {
    Peso dl1, dl2, dl3;
    dl1.dolar= F1.dolar - F1.dolar;
    dl2.dolar= F1.peso/18.5 - F2.dolar;
    dl3.dolar= F2.dolar - F1.peso/18.5;
    return dl1, dl2, dl3;
}

bool operator < (const Dolar &F1, const Peso &F2){
    double d,p;
    d = F1.dolar;
    p = F2.peso/18.5;
    return d<p;
}

bool operator > (const Dolar &F1, const Peso &F2){
    double d,p;
    d = F1.dolar;
    p = F2.peso/18.5;
    return d>p;
}

bool operator >= (const Dolar &F1, const Peso &F2){
    double d,p;
    d = F1.dolar;
    p = F2.peso/18.5;
    return d>=p;
}

bool operator <= (const Dolar &F1, const Peso &F2){
    double d,p;
    d = F1.dolar;
    p = F2.peso/18.5;
    return d<=p;
}


bool operator == (const Dolar &F1, const Peso &F2){
    double d,p;
    d = F1.dolar;
    p = F2.peso/18.5;
    return d==p;
}

bool operator != (const Dolar &F1, const Peso &F2){
    double d,p;
    d = F1.dolar;
    p = F2.peso/18.5;
    return d!=p;
}
std::string Dolar::to_String(){
    return "$"+ std::to_string(dolar)+"USD";
}

Dolar operator ++(const Dolar &F1, const Peso &F2){
    Dolar coin1;
    coin1.dolar=F1.dolar+F2.dolar;
    coin1++;
    Dolar coin2;
    coin2.dolar=F1.peso+F2.peso;
    coin2 ++;
    return coin1, coin2;
}

Dolar operator --(const Dolar &F1, const Peso &F2){
    Dolar coin3;
    coin3.dolar=F1.dolar-F2.dolar;
    coin3--;
    Dolar coin4;
    coin4.dolar=F1.peso-F2.peso;
    coin4 --;
    return coin3, coin4;
}

std::string Dolar::to_String(){
    return "$"+ std::to_string(dolar)+"USD";
}
