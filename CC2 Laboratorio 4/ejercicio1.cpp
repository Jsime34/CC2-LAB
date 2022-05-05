#include <iostream>
#include <string>
using namespace std;

int main(){
    int DNI[4];
    string Nombres[4];
    string Apellidos[4];
    int edad[4];

    for(int i=0; i<3; i++){
        cout << "Inserte el nombre del alumno " << i+1 << ": " << endl; cin >> Nombres[i];
        cout << "Inserte el apellido del alumno " << i+1 << ": " << endl; cin >> Apellidos[i];
        cout << "Inserte el numero de DNI del alumno " << i+1 << ": " << endl; cin >> DNI[i];
        cout << "Inserte la edad del alumno " << i+1 << ": " << endl; cin >> edad[i];
    }
    for(int i=0; i<4; i++){
        cout << "Alumno " << i+1 << endl;
        cout << "Nombre: " << Nombres[i] << endl;
        cout << "Apellido: " << Apellidos[i] << endl;
        cout << "Numero de DNI: " << DNI[i] << endl;
        cout << "Edad: " << edad[i] << endl;
    }
}