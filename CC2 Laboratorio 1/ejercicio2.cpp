#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char nombre[30];
    string apellido1;
    char apellido2[30];
    cout << "Inserte su nombre: " << endl; cin >> nombre;
    cout << "Inserte su apellido paterno: " << endl; cin >> apellido1;
    cout << "Inserte su apellido materno: " << endl; cin >> apellido2;

    cout << "Su correo unsa es: " << nombre[0] << apellido1 << apellido2[0] << "@unsa.edu.pe" << endl;


}

