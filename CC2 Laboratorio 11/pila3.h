#pragma once
#ifndef PILA3_H
#define PILA3_H
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
        void buscar(Pila *array, int n){
            while(array != NULL){
                if(array->dato == n){
                    cout<<"\tElemento encontrado."<<endl;
                    return;
                }
                array = array->next;
            }
            cout<<"\tElemento no encontrado."<<endl;
        }
};

#endif // PILA3_H