#pragma once
#ifndef PILA1_H
#define PILA1_H
#include <iostream>
using namespace std;

class Pila{
    private:
        int dato;
        Pila *next;
    public:
        Pila(){}
        void add(Pila *&array, int n){
            Pila *nuevo = new Pila();
            nuevo->dato = n;
            nuevo->next = array;
            array = nuevo;
        }
        void mostrar(Pila *array){
            while(array != NULL){
                cout<<array->dato<<"->";
                array = array->next;
            }
            cout << endl;
        }
        void pop(Pila *&array){
            Pila *nuevo = new Pila();
            nuevo = array;
            array = array->next;
            delete nuevo;
        }
};

#endif // PILA1_H