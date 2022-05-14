#pragma once
#include <iostream>
using namespace std;
class Estudiante{
    private:
        string nombre;
        string apellidos;
        int cui;
        int parcial1;
        int parcial2;
        int parcial3;
    
    public:
        Estudiante(string, string, int, int, int, int);
        ~Estudiante();
        string getnombre();
        int getcui();
        int getparcial1();
        int getparcial2();
        int getparcial3();
        int promedio();
        bool aprobar();
        void imprimirnotas();
};

Estudiante::Estudiante(string _nombre, string _apellidos, int _cui, int _parcial1, int _parcial2, int _parcial3){
    nombre = _nombre;
    apellidos = _apellidos;
    cui = _cui;
    parcial1 = _parcial1;
    parcial2 = _parcial2;
    parcial3 = _parcial3;
}

Estudiante::~Estudiante(){
}

string Estudiante::getnombre(){
    string nombre1;
    nombre1 = nombre;
    return nombre1;
}

int Estudiante::getcui(){
    int cui1;
    cui1 = cui;
    return cui1;
}

int Estudiante::getparcial1(){
    int parcial1obj;
    parcial1obj = parcial1;
    return parcial1obj;
}

int Estudiante::getparcial2(){
    int parcial2obj;
    parcial2obj = parcial2;
    return parcial2obj;
}

int Estudiante::getparcial3(){
    int parcial3obj;
    parcial3obj = parcial3;
    return parcial3obj;
}

int Estudiante::promedio(){
    int promedio;
    promedio = (getparcial1()+getparcial2()+getparcial3())/3;
    return promedio;
}

bool Estudiante::aprobar(){
    bool aprobo=false;
    int promedio1 = promedio();
    if(promedio1 >= 10){
        aprobo=true;
    }
    return aprobo;
}

void Estudiante::imprimirnotas(){
    cout << "Nombre: " << getnombre() << endl;
    cout << "CUI: " << getcui() << endl;
    cout << "Promedio: " << promedio() << endl;
    if(aprobar()==true){
        cout << "El estudiante aprobo el curso.";
    }
    else{
        cout << "El estudiante fue jalado.";
    }
}

