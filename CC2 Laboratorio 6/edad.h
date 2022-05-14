#pragma once
#include <iostream>
using namespace std;

class Edad{
    private:
        string nombre;
        int dia1;
        int mes1;
        int year1;
        int dia2;
        int mes2;
        int year2;
    public:
        Edad(string, int, int, int, int, int, int);
        ~Edad();
        int calcularedad();
        void imprimiredad();
};

Edad::Edad(string _nombre, int _dia1, int _mes1, int _year1, int _dia2, int _mes2, int _year2){
    nombre = _nombre;
    dia1 = _dia1;
    mes1 = _mes1;
    year1 = _year1;
    dia2 = _dia2;
    mes2 = _mes2;
    year2 = _year2;
}

Edad::~Edad(){
}

int Edad::calcularedad(){
    int edad=0;
    int difmes=0;
    int difdia=0;
    if(dia1>dia2){
        difdia+=31-dia1;
        difdia+=dia2;
        if(difdia>31)
        {
            difmes++;
        }
    }
    if(mes1>mes2){
        difmes+=12-mes1;
        difmes+=mes2;
    }
    if(difmes>12){
        edad++;
    }
    edad = year2-year1;
    return edad;
}

void Edad::imprimiredad(){
    cout << nombre << " tiene " << calcularedad() << " anos de edad." << endl;
}