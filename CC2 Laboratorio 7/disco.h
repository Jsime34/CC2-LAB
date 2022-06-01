#pragma once
#include "multimedia.h"
#include <iostream>

using namespace std;

class Disco: public Multimedia{
    private:
        int capacidad;
    public:
        Disco();
        ~Disco();
        void setcapacidad(int);
        void imprimirdisco();
};

Disco::Disco(){

}

Disco::~Disco(){

}

void Disco::setcapacidad(int newcapacidad){
    capacidad = newcapacidad;
}

void Disco::imprimirdisco(){
    cout << "Ahora sonando, en nuestro disco de " << capacidad << " megas, el multimedia " << nombre << " de " << autor << endl;
}