#pragma once
#include <iostream>
using namespace std;

class Persona{
    protected:
        int edad;
        string nombre;
    private:
        void imprimirdatospersona();
    public:
        Persona();
        ~Persona();
        void setedad(int);
        void setnombre(string);
        int getedad();
        string getnombre();
};

Persona::Persona(){
}

Persona::~Persona(){
}

void Persona::setedad(int newedad){
    edad = newedad;
}

void Persona::setnombre(string newnombre){
    nombre = newnombre;
}

int Persona::getedad(){
    int devolver = edad;
    return devolver;
}

string Persona::getnombre(){
    string devolver = nombre;
    return devolver;
}

void Persona::imprimirdatospersona(){
    cout << "El nombre de la persona es: " << nombre << endl;
    cout << "La edad de la persona es: " << edad << endl;
}
