#include <iostream>
using namespace std;

int num = -1;

void insertardato(){
    while(0>num || num>100){
        cout << "Ingrese un valor entre 0 y 100 entero: " << endl; cin >> num;
        if(num<0 || num>100){
            cout << "Debe ser entre 0 y 100." << endl;
        }
    }
}

void espar(int num){
    if(num%2==0){
        cout << "El numero es par. " << endl;
    }
    else{
        cout << "El numero es impar." << endl;
    }
}

void sumaimpares(int num){
    int suma;
    for(int i=0; i<=num; i++){
        if(i%2!=0){
            suma += i;
        }
    }
    cout << "La suma de los impares bajo ese numero es: " << suma << endl;
}

void menu(){
    int menu;
    while(menu!=4){
    cout << "Bienvenido al programa, seleccione una opcion (presione el numero segun la opcion): " << endl;
    cout << "1.- Ingresar un valor entre 0 y 100 entero. " << endl;
    cout << "2.- Validar que el número anterior sea par. " << endl;
    cout << "3.- Sumar todos los impares desde 0 a ese numero. " << endl;
    cout << "4.- Salir." ;
    cin >> menu;
        switch(menu){
            case 1: insertardato();
            case 2: espar(num);
            case 3: sumaimpares(num);
        }
    }
}

int main(){
    menu();
}