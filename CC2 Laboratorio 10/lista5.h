#ifndef LISTA5_H
#define LISTA5_H
#include <iostream>
#include <stdlib.h>
 
using namespace std;
class Nodo{
private:
	int dato;
	Nodo *next;
	
public:
	Nodo(){}
	void add_last(Nodo *&enlazada, int n){
		Nodo *nuevo = new Nodo();
		Nodo *nuevo1 = new Nodo();
		nuevo->dato = n;
		nuevo->next = NULL;
		if(enlazada==NULL){
			enlazada = nuevo;
		}else{
			nuevo1 = enlazada;
			while(nuevo1->next!=NULL){
				nuevo1=nuevo1->next;
			}
			nuevo1->next = nuevo;
		}
		cout<<"\tNodo registrado con exito"<<endl;
	}
	
	void add_first(Nodo *&enlazada, int n){
		Nodo *nuevo = new Nodo();
		nuevo->dato = n;
		nuevo->next = enlazada;
		enlazada = nuevo;
	}
	void add_there(Nodo *&enlazada, int n, int pos){
		Nodo *nuevo = new Nodo();
		Nodo *nuevo1 = new Nodo();
		nuevo->dato=n;
		nuevo1=enlazada;
		for(int i=1;nuevo1!=NULL;i++){
			if(i==pos){
				nuevo->next=nuevo1->next;
				nuevo1->next=nuevo;
				return;
			}
			nuevo1=nuevo1->next;
		}
	}
	
	void delete_last(Nodo *&enlazada){
		Nodo *inicio = enlazada;
		Nodo *inicio1 = enlazada;
		if(enlazada != NULL){
			while(inicio->next !=NULL){
				inicio1 = inicio;
				inicio = inicio->next;
			}
			if(inicio != inicio1){
				inicio1->next = NULL;
				delete inicio;
			}else{
				delete enlazada;
				enlazada=NULL;
			}
		}else{
			cout<<"La lista no contiene nodos"<<endl;
		}
		
	}
	
	void delete_first(Nodo *&enlazada){
		Nodo *inicio = enlazada;
		Nodo *inicio1 = enlazada;
		if(enlazada != NULL){
			if(inicio->next !=NULL){
				inicio1 = inicio;
				inicio = inicio->next;
				enlazada = enlazada->next;
			}
			if(inicio != inicio1){
				inicio1->next = NULL;
				delete inicio1;
			}else{
				delete enlazada;
				enlazada=NULL;
			}
		}else{
			cout<<"La lista no contiene nodos"<<endl;
		}
	}
	void show(Nodo *enlazada){
		if(enlazada==NULL){
			cout<<"La lista no contiene nodos"<<endl;
		}else{
			while(enlazada != NULL){
				cout<<enlazada->dato<<"->";
				enlazada = enlazada->next;
			}
		}
		
	}
};
#endif
 
 
