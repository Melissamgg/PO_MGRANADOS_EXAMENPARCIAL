#include <iostream>
#include "Peso.h"


int main() {
    Peso peso();
    Dolar dolar();
    Dolar suma= dolar + dolar;
    Dolar suma= dolar+peso;
    Dolar suma= peso+dolar;
    Peso suma= peso+peso;
    Peso suma= dolar+peso;
    Peso suma= peso+dolar;
    Dolar resta= dolar-dolar;
    Dolar resta= dolar-peso;
    Dolar resta= peso-dolar;
    Peso resta= peso-peso;
    Peso resta= dolar-peso;
    Peso resta= peso-dolar;

    bool compare_a;
    peso<dolar? compare_a= true : compare_a= false;
    bool compare_b;
    peso>dolar? compare_b= false : compare_b= true;
    bool  compare_c;
    peso<=dolar? compare_c= true : compare_c= false;
    bool  compare_d;
    peso>=dolar? compare_d= false : compare_d= true;
    bool  compare_e;
    peso==dolar? compare_e= true : compare_e= true;
    bool compare_f;
    peso!=dolar? compare_f= true : compare_f= false;

    std::cout<<"\n";
    std::cout << "Total suma:"<< suma.to_String()<<std::endl;
    std::cout<<"\n";
    std::cout <<  "Total resta:"<<resta.to_String()<<"\n";
    std::cout<<"\n";
   }


