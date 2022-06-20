#pragma once
#ifndef COLAS1_H
#define COLAS1_H
#include <iostream>
using namespace std;

class cola{
    private:
        int dato;
        cola *first=NULL;
        cola *last=NULL;
        cola *next;
    public:
        cola(){}
        void add(int n){
            cola *nuevo = new cola();
            nuevo->dato = n;
            nuevo->first = NULL;
            nuevo->last = NULL;
            if(first == NULL){
                first = nuevo;
                last = nuevo;
            }else{
                last->next = nuevo;
                last = nuevo;
            }
        }
        void print(){
            cola *aux = new cola();
            aux = first;
            while(aux != NULL){
                cout<<aux->dato<<"->";
                aux = aux->next;
            }
            cout << endl;
            cout << ".";
        }
};



#endif // COLAS1_H