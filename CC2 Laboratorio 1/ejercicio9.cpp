#include <iostream>
using namespace std;
int main(){
    int datos;
    int suma = 0;
    for(int i=0; i<10; i++){
        cout << "Inserte su dato: " << endl; cin >> datos;
        if(datos < 0){
            suma += datos;
        }
    }
    cout << "La suma de sus numeros negativos es: " << suma;
}