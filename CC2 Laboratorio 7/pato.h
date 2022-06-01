#pragma once
#include "ave.h"
#include <iostream>
using namespace std;

class Pato: public Ave{
    private:
        int alturavuelo;
    public:
        Pato();
        ~Pato();
        void setvuelo(int);
        void volar();
        void cuac();
};

Pato::Pato(){

}
Pato::~Pato(){

}
void Pato::setvuelo(int altura){
    alturavuelo = altura;
}

void Pato::volar(){
    cout << "El pato se fue volando " << alturavuelo << " metros." << endl;
}

void Pato::cuac(){
    cout << "El pato dice cuac." << endl;
}
