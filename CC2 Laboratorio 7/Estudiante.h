#pragma once
#include <iostream>
#include "Persona.h"

using namespace std;

class Estudiante : public Persona{
    private:
        int grado;
        string instruccion;
    public:
        Estudiante(int, string);
        ~Estudiante();
        void imprimirstud();
};

Estudiante::Estudiante(int _grado, string _instruccion){
    grado = _grado;
    instruccion = _instruccion;
}

Estudiante::~Estudiante(){
}

void Estudiante::imprimirstud(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Instrucción: " << instruccion << endl;
    cout << "Grado: " << grado << endl;
}