#include "alumno.h"
#include <iostream>
using namespace std;

int main(){
    string nombre, apellido;
    int cui, nota1, nota2, nota3;
    cout << "Inserte el nombre del alumno: " << endl; cin >> nombre;
    cout << "Inserte el apellido del alumno: " << endl; cin >> apellido;
    cout << "Inserte el cui del alumno: " << endl; cin >> cui;
    cout << "Inserte la primera nota: " << endl; cin >> nota1;
    cout << "Inserte la segunda nota: " << endl; cin >> nota2;
    cout << "Inserte la tercera nota: " << endl; cin >> nota3;
    Estudiante a = Estudiante(nombre, apellido, cui, nota1, nota2, nota3);
    a.imprimirnotas();
}
