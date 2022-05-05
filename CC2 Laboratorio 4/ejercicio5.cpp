#include <iostream>
using namespace std;

int tamanoarray = 9;
double precios[80] = {13.5, 12.0, 11.5, 3.0, 2.5, 0.5, 2.5, 7.0, 5.0, 0.2};
string nombre[80] = {"Pantene", "Ariel", "Bolívar", "Don Vitorio", "Coca Cola", "Morochas", "Inca Kola", "Yogurt Gloria", "Leche Gloria", "Pan"};
int stock[80] = {12, 13, 10, 21, 30, 12, 32, 42, 42, 50};

void printproductos(int tamano){
    for(int i=0; i<tamano; i++){
        cout << "Producto " << i << endl;
        cout << "Nombre: " << nombre[i] << endl;
        cout << "Precio: " << precios[i] << " nuevos soles" << endl;
        cout << "Stock: " << stock[i] << endl;
    }
}

void buscarproducto(int tamano, string buscar){
    bool encontrado = false;
    for(int i=0; i<tamano; i++){
        if(nombre[i] == buscar){
            cout << "Producto encontrado" << endl;
            cout << "Posición: " << i+1 << endl;
            cout << "Nombre: " << buscar << endl;
            cout << "Precio: " << precios[i] << endl;
            cout << "Stock: " << stock[i] << endl;
            encontrado = true;
            break;
        }
    }
    if(encontrado == false){
        cout << "Su producto no fue encontrado." << endl;
    }
}

void generarp(int tamano){
    string nombrenuevo;
    double precionuevo;
    int stocknuevo;
    cout << "Inserte el nombre del producto que desea agregar: " << endl; cin >> nombrenuevo;
    cout << "Inserte el precio del producto: " << endl; cin >> precionuevo;
    cout << "Inserte el stock del nuevo producto: " << endl; cin >> stocknuevo;
    nombre[tamano+1] = nombrenuevo;
    precios[tamano+1] = precionuevo;
    stock[tamano+1] = stocknuevo;
    tamanoarray++;
}

void modificarp(int tamano, string modificar){
    double precionuevo;
    int stocknuevo;
    bool encontrado = false;
    for(int i=0; i<tamano; i++){
        if(nombre[i] == modificar){
            cout << "Producto encontrado" << endl;
            cout << "Posición: " << i+1 << endl;
            cout << "Nombre: " << encontrado << endl;
            cout << "Precio: " << precios[i] << endl;
            cout << "Stock: " << stock[i] << endl;
            cout << "Inserte el nuevo precio: " << endl; cin >> precionuevo;
            cout << "Inserte el nuevo stock: " << endl; cin >> stocknuevo;
            stock[i] = stocknuevo;
            precios[i] = precionuevo;
            encontrado = true;
            break;
        }
    }
    if(encontrado == false){
        cout << "Su producto no fue encontrado." << endl;
    }
}

void menu(){
    int opc = 0;
    while(opc!=5){
        string buscar;
        string modificar;
        cout << "Bienvenido a la tiendita de Don Pepe" << endl;
        cout << "Seleccione su acción: " << endl;
        cout << "1. Mostrar lista de productos" << endl;
        cout << "2. Buscar un producto" << endl;
        cout << "3. Generar nuevo producto" << endl;
        cout << "4. Modificar stock y precio de un producto" << endl;
        cout << "5. Salir" << endl; cin >> opc;
        if(opc==1){
            printproductos(tamanoarray);
        }
        else if(opc==2){
            cout << "Inserte el nombre del producto a buscar: " << endl; cin >> buscar;
            buscarproducto(tamanoarray, buscar);
        }
        else if(opc==3){
            generarp(tamanoarray);
        }
        else if(opc==4){
            cout << "Inserte el nombre del producto a modificar: " << endl; cin >> modificar;
        modificarp(tamanoarray, modificar);
        }
    }
}

int main(){
    menu();
}