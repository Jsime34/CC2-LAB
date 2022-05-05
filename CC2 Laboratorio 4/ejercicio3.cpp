#include <iostream>
using namespace std;

int main(){
    int matriz[5][3];
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            cout << "Inserte numeros a la matriz: (posicion [" << i << "][" << j << "])" << endl; cin >> matriz[i][j];
        }
    }
    int suma = 0;
    for(int i=1; i<5; i+=2){
        for(int j=0; j<3; j++){
            suma += matriz[i][j];
        }
    }
    cout << "La suma de numeros en sumas pares es: " << suma;
}