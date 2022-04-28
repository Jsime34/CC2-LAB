#include <iostream>
using namespace std;

int main(){
    string continuar;
    int suma = 0;
    int nota;
    int nota2;
    int nota3;
    int contador = 0;
    int promedio;
    while(continuar!="NO"){
        cout << "Inserte la nota 1 del estudiante: " << endl; cin >> nota;
        cout << "Inserte la nota 2 del estudiante: " << endl; cin >> nota2;
        cout << "Inserte la nota 3 del estudiante: " << endl; cin >> nota3;
        promedio = (nota+nota2+nota3)/3;
        cout << "El promedio de este estudiante es: " << promedio << endl;
        cout << "Desea continuar poniendo notas? " << endl; cin >> continuar;
        suma += nota;
        contador++;
    }
}