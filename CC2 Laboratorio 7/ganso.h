#pragma once
#include "ave.h"
#include <iostream>
using namespace std;

class Ganso:public Ave{
    private:
        int dientes;
        int ferocidad;
    public:
        Ganso();
        ~Ganso();
        void setdientes(int);
        void setferocidad(int);
        void honk();
        void correr();
};

Ganso::Ganso(){
}
Ganso::~Ganso(){
}
void Ganso::setdientes(int dientesn){
    dientes = dientesn;
}
void Ganso::setferocidad(int feroz){
    ferocidad = feroz;
}
void Ganso::honk(){
    cout << "El ganso dice HONK" << endl;
}
void Ganso::correr(){
    cout << "El ganso corre a por ti" << endl;
}