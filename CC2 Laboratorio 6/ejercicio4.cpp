#include "arreglo.h"
#include <iostream>
using namespace std;

int main(){
    int opc=0;
    int insertar;
    int borrar;
    Arreglo a = Arreglo();
    while(opc!=4){
        cout << "ARRAY" << endl;
        cout << "Inserte su operacion: " << endl;
        cout << "1. Agregar un elemento." << endl;
        cout << "2. Eliminar un elemento. " << endl;
        cout << "3. Imprimir la lista. " << endl;
        cout << "4. Salir." << endl;
        cin >> opc;
        if(opc==1){
            cout << "Inserte el numero que desea insertar." << endl; cin >> insertar;
            a.insertarenarreglo(insertar);
        }
        else if(opc==2){
            cout << "Inserte el numero que desea borrar." << endl; cin >> borrar;
            a.borrardearreglo(borrar);
        }
        else if(opc==3){
            a.imprimirarreglo();
        }
    }
}