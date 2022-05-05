#include <iostream>
using namespace std;

bool buscar(int array[], int tamano, int buscar){
    bool encontrar = false;
    for(int i=0; i<tamano; i++){
        if(buscar == array[i]){
            encontrar = true;
        }
    }
    return encontrar;
}

int main(){
    int array[8];
    for(int i=0; i<8; i++){
        cout << "Inserte un numero: " << endl; cin >> array[i];
    }
    int tamano = sizeof(array)/sizeof(array[0]);
    int abuscar;
    cout << "Inserte el numero que desea buscar: " << endl; cin >> abuscar;
    if(buscar(array, tamano, abuscar)==true){
        cout << "Su numero esta en el array." << endl;
    }
    else{
        cout << "Su numero no esta en el array. " << endl;
    }
}