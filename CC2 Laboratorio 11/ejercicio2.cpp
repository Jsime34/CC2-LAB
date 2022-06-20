#include "pila2.h"
#include <iostream>
using namespace std;

int main(){
    int dato, opc, n;
    Pila *array = NULL;
    do
    {
        cout << "MENU (INSERTE NUMERO SEGUN ACCION)" << endl;
        cout << "1. Ingresar dato" << endl;
        cout << "2. Mostrar pila" << endl;
        cout << "3. Eliminar elemento" << endl;
        cout << "4. Salir" << endl;
        cin >> opc;
        switch (opc)
        {
        case 1:
            cout << "Ingrese el numero para el elemento: ";
            cin >> n;
            array->add(array, n);
            break;
        case 2:
            array->mostrar(array);
            break;
        case 3:
            array->pop(array);
            break;
        }
    } while (opc != 4);
    
}