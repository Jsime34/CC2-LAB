#include <iostream>
using namespace std;

int main(){
    int sumafila = 0;
    int sumafilamayor = 0;
    int matriz[3][3];
    int filamayor;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << "Inserte su numero (Posicion [" << i << "][" << j << "])" << endl; cin >> matriz[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sumafila += matriz[i][j];
        }
        if(sumafila > sumafilamayor){
            sumafilamayor = sumafila;
            filamayor = i+1;
        }
    }
    cout << "La fila con mayor suma es la fila numero " << filamayor << endl;
    cout << "La fila suma en total: " << sumafilamayor << endl;

}