#include "rectangulo.h"
#include <iostream>

using namespace std;

int main(){
    int a, b;
    cout << "Ingrese el largo del rectangulo: " << endl; cin >> a;
    cout << "Ingrese el ancho del rectangulo: " << endl; cin >> b;
    Rectangulo rpta= Rectangulo(a, b);
    cout << "El perimetro del rectangulo es: " << rpta.calcularperimetro() << endl;
    cout << "El area del rectangulo es: " << rpta.calculararea() << endl; 
}