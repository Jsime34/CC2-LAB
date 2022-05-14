#include "matriz.h"
#include <iostream>
using namespace std;

int main(){
    int buscar;
    Matriz alfa = Matriz();
    cout << "Matriz generada con numeros aleatorios, busque su numero: " << endl; cin >> buscar;
    alfa.buscar(buscar);
}
