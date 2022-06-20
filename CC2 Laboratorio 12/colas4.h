#ifndef COLA4_H
#define COLA4_H
#include <iostream>
using namespace std;
class cola{
    private:
        cola *next;
        cola *last = NULL;
        cola *first = NULL;
        int dato;
    public:
    cola(){}
    void add(int n){
        cola *nuevo = new cola(); 
        nuevo->dato = n;
        nuevo->next = NULL;
        if(first==NULL){ 
            first = nuevo;
        }else{
            last->next = nuevo;
        }
        last = nuevo;
        cout<<"El elemento " << n << " fue introducido con exito."<<endl;
    }
    void borrar(){
        cola *aux = first; 
        if(first == last){ 
            first = NULL;
            last = NULL;
        }
        else{
            first = first->next;
        }
            delete aux;
        }
    void Compare(cola *&hombre, cola *&mujer){
        int h=0,m=0, vueltas;
        cout<<"Cantidad de vueltas " << endl;cin>>vueltas;
        for(int i=0;i < vueltas;i++){
            cout<<hombre->top()<<endl;
            cout<<mujer->top()<<endl;
            if(hombre->top() > mujer->top()){
                h++;
                hombre->add(hombre->top());
                hombre->borrar();
                mujer->add(mujer->top());
                mujer->borrar();
            }else if(hombre->top() < mujer->top()){
                m++;
                hombre->add(hombre->top()); 
                hombre->borrar();
                mujer->add(mujer->top());
                mujer->borrar();
            }
            cout<<endl;
            hombre->print();
            mujer->print();
            cout<<endl;
        }
        cout<<"Varones: "<<h<<endl;
        cout<<"Damas: "<<m<<endl;
        if(h>m){
            cout<<"La edad de los varones es mayor que la de las damas en "<<vueltas<<"bucles."<<endl;
        }else if(m>h){
            cout<<"La edad de los varones es menor que las damas en "<<vueltas<<"bucles."<<endl;
        }else{
            cout<<"La edad de los varones y las damas es igual en "<<vueltas<<"bucles."<<endl;
        }
    }
    int top(){
        return first->dato;
    }
    void print(){ 
        cola *aux = new cola();
        aux = first;
        while(aux != NULL){
            cout<<aux->dato<<"->";
            aux = aux->next;
        }
        cout<<endl;
    }
};
    
    
#endif