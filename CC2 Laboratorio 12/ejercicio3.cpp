#include "colas3.h"
#include <iostream>
using namespace std;

int main(){
    int n, opc;
    cola *cola1 = new cola();
    do{
        cout << "MENU(INSERTAR NUMERO SEGUN ACCION" << endl;
        cout << "1. Insertar/Crear elemento o cola" << endl;
        cout << "2. Imprimir Cola" << endl;
        cout << "3. Eliminar elemento" << endl;
        cout << "4. Buscar elemento" << endl;
        cout << "5. Terminar programa" << endl;
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
                cola1->pop();
                break;
            case 4:
                cout << "Ingrese el valor del elemento a buscar: "; cin >> n;
                cola1->buscar(n);
                break;
            case 5:
                cout << "Programa terminado" << endl;
                break;
            default:
                cout << "Recuerde insertar un numero del 1 al 5" << endl;
                break;
        }
    }while(opc != 5);
}