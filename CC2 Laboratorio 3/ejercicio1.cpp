#include <iostream>
using namespace std;

int potenciar(int base, int exponente){
    int rpta = 1;
    for(int i=0; i<exponente; i++){
        rpta*=base;
    }
    return rpta;
}

int main(){
    int b, e;
    cout << "Ingrese su base: " << endl; cin >> b;
    cout << "Ingrese su exponente: " << endl; cin >> e;
    cout << "El resultado es: " << potenciar(b, e);
}