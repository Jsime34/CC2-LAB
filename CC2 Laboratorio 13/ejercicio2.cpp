#include <iostream>
using namespace std;

struct alumno{
    string nombre;
    float nota1;
    float nota2;
    float nota3;
    float proyectofinal;
};

float calcular_nota_final(alumno a){
    float nota_final = (a.nota1*0.15 + a.nota2*0.2 + a.nota3*0.25 + a.proyectofinal*0.4);
    return nota_final;
}

int main(){
    int n;
    cout << "Introduzca el numero de alumnos: " << endl; cin >> n;
    alumno alumnos[n];
    for(int i = 0; i < n; i++){
        cout << "Introduzca el nombre del alumno: " << endl; cin >> alumnos[i].nombre;
        cout << "Introduzca la nota 1: " << endl; cin >> alumnos[i].nota1;
        cout << "Introduzca la nota 2: " << endl; cin >> alumnos[i].nota2;
        cout << "Introduzca la nota 3: " << endl; cin >> alumnos[i].nota3;
        cout << "Introduzca la nota del proyecto final: " << endl; cin >> alumnos[i].proyectofinal;
    }
    for(int i = 0; i < n; i++){
        cout << "El alumno " << alumnos[i].nombre << " tiene una nota final de " << calcular_nota_final(alumnos[i]) << endl;
    }
}