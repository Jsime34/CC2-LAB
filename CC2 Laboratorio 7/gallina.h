#pragma once
#include "ave.h"
#include <iostream>
using namespace std;

class Gallina: public Ave{
    private:
        int peso;
    public:
        Gallina();
        ~Gallina();
        void setpeso(int);
        void ponerhuevos();
        void cacarear();
};

Gallina::Gallina(){

}
Gallina::~Gallina(){

}
void Gallina::setpeso(int rico){
    peso = rico;
}

void Gallina::ponerhuevos(){
    cout << "La gallina pone un huevo." << endl;
}

void Gallina::cacarear(){
    cout << "La gallina cacarea, COCOOOO" << endl;
}