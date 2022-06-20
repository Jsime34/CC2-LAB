#pragma once
#ifndef COLAS3_H
#define COLAS3_H
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
        void pop(){
            cola *nuevo = new cola();
            nuevo = first;
            first = first->next;
            delete nuevo;
        }
        void buscar(int n){
            cola *aux = new cola();
            aux = first;
            while(aux != NULL){
                if(aux->dato == n){
                    cout<<"El dato "<<n<<" se encuentra en la cola"<<endl;
                    return;
                }
                aux = aux->next;
            }
            cout<<"El dato "<<n<<" no se encuentra en la cola"<<endl;
        }
};



#endif // COLAS3_H