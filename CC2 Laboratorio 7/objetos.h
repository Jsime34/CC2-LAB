#pragma once
#include "material.h"
#include <iostream>
using namespace std;

class Objeto: public Material{
    private:
        string objeto;
    public:
        Objeto();
        ~Objeto();
        void setobjeto(string);
        string getobjeto();
        void imprimirobjeto();
};

Objeto::Objeto(){

}

Objeto::~Objeto(){

}

void Objeto::setobjeto(string newobjeto){
    objeto = newobjeto;
}

string Objeto::getobjeto(){
    string objetito = objeto;
    return objetito;
}

void Objeto::imprimirobjeto(){
    cout << "Nuestro objeto es un(a) " << objeto << " de " << material << " de color " << color;
}