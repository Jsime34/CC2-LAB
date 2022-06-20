#pragma once
#ifndef PILA2_H
#define PILA2_H
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
        void push(Pila *&array, int n){
            Pila *nuevo = new Pila();
            nuevo->dato = n;
            nuevo->next = array;
            array = nuevo;
        }
};

#endif // PILA2_H