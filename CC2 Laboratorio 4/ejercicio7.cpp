#include <iostream>
using namespace std;

int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

void moverfila(int fila, int arriba){
    int aux;
    if(arriba == 1){
        for(int i=0; i<3; i++){
            aux = matriz[fila-1][i];
            matriz[fila-1][i] = matriz[fila-2][i];
            matriz[fila-2][i] = aux;
        }
    }
    else{
        for(int i=0; i<3; i++){
            aux = matriz[fila][i];
            matriz[fila][i]=matriz[fila-1][i];
            matriz[fila-1][i] = aux;
        }
    }
}

void movercolumna(int columna, int derecha){
    int aux;
    if(derecha==1){
        for(int i=0; i<3; i++){
            aux = matriz[i][columna];
            matriz[columna][i]=matriz[columna-1][i];
            matriz[columna-1][i] = aux;
        }
    }
    else{
        for(int i=0; i<3; i++){
            aux = matriz[i][columna-1];
            matriz[i][columna-1] = matriz[i][columna-2];
            matriz[i][columna-2] = aux;
        }
    }
}

void imprimirmatriz(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void menu(){
    int opc = 0;
    while(opc!=4){
        int arriba;
        cout << "Bienvenido al menu para mover el orden de la matriz" << endl;
        cout << "1. Mover filas" << endl;
        cout << "2. Mover columnas" << endl;
        cout << "3. Imprimir matriz" << endl;
        cout << "4. Salir" << endl; cin >> opc;
        int fila;
        int columna;
        int derecha;
        if(opc==1){
            cout << "Inserte la fila que desea mover: " << endl; cin >> fila;
            cout << "Desea moverla arriba o abajo? (1 para arriba y 2 para abajo)" << endl; cin >> arriba;
            moverfila(fila, arriba);
        }
        else if(opc == 2){
            cout << "Inserte la columna que desea mover: " << endl; cin >> columna;
            cout << "Desea moverla izquierda o derecha(1 para derecha y 2 para izquierda)" << endl; cin >> derecha;
            movercolumna(columna, derecha);
        }
        else if(opc == 3){
            imprimirmatriz();
        }
    }
}

int main(){
    menu();
}