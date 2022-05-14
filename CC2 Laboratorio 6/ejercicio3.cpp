#include "edad.h"
#include <iostream>

using namespace std;
int main(){
    int dia1, dia2, mes1, mes2, ano1, ano2;
    string nombre;
    cout << "Ingrese su nombre: " << endl; cin >> nombre;
    cout << "Ingrese su dia de nacimiento: " << endl; cin >> dia1;
    cout << "Ingrese su mes de nacimiento: " << endl; cin >> mes1;
    cout << "Ingrese su ano de nacimiento: " << endl; cin >> ano1;
    cout << "Ingrese el dia actual: " << endl; cin >> dia2;
    cout << "Ingrese el mes actual: " << endl; cin >> mes2;
    cout << "Ingrese el ano actual: " << endl; cin >> ano2;
    Edad j = Edad(nombre, dia1, mes1, ano1, dia2, mes2, ano2);
    j.imprimiredad();
}