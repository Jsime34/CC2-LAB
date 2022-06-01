#include "objetos.h"
#include <iostream>
using namespace std;

int main(){
    Objeto mesa = Objeto();
    string objeto, material, color;
    cout << "Inserte su objeto: " << endl; cin >> objeto;
    cout << "Inserte el color: " << endl; cin >> color;
    cout << "Inserte el material: " << endl; cin >> material;
    mesa.setcolor(color);
    mesa.setmaterial(material);
    mesa.setobjeto(objeto);
    mesa.imprimirobjeto();
}