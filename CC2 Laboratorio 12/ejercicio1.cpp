#include "colas1.h"
#include <iostream>
using namespace std;

int main(){
    int n, opc;
    cola *cola1 = new cola();
    do{
        cout << "MENU(INSERTAR NUMERO SEGUN ACCION" << endl;
        cout << "1. Insertar/Crear cola o elemento" << endl;
        cout << "2. Imprimir Cola" << endl;
        cout << "3. Terminar programa" << endl;
        cout << "Ingrese opcion: "; cin >> opc;
        switch(opc){
            case 1:
                cout << "Ingrese el valor del nuevo elemento: "; cin >> n;
                cola1->add(n);
                break;
            case 2:
                cola1->print();
                break;
            case 3:
                cout << "Programa terminado" << endl;
                break;
            default:
                cout << "Recuerde insertar un numero del 1 al 3" << endl;
                break;
        }
    }while(opc != 3);
}