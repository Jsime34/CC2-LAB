#include <iostream>
using namespace std;

int main(){
    string continuar;
    int num;
    int contador = 0;
    int suma = 0;
    while(continuar != "NO"){
        cout << "Inserte su numero: " << endl; cin >> num;
        cout << "Desea continuar? " << endl; cin >> continuar;
        suma+=num;
        contador++;
    }
    int promedio = suma/contador;
    cout << "El promedio de los numeros introducidos es: " << promedio;
}