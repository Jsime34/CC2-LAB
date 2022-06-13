#ifndef LISTA4_H
#define LISTA4_H
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
		Nodo *newnode = new Nodo();
		Nodo *newnode1 = new Nodo();
		newnode->dato = n;
		newnode->next = NULL;
		if(enlazada==NULL){
			enlazada = newnode;
		}else{
			newnode1 = enlazada;
			while(newnode1->next!=NULL){
				newnode1=newnode1->next;
			}
			newnode1->next = newnode;
		}
		cout<<"\tNodo registrado con exito"<<endl;
	}
	
	void add_first(Nodo *&enlazada, int n){
		Nodo *newnode = new Nodo();
		newnode->dato = n;
		newnode->next = enlazada;
		enlazada = newnode;
	}
	void add_there(Nodo *&enlazada, int n, int pos){
		Nodo *newnode = new Nodo();
		Nodo *newnode1 = new Nodo();
		newnode->dato=n;
		newnode1=enlazada;
		for(int i=1;newnode1!=NULL;i++){
			if(i==pos){
				newnode->next=newnode1->next;
				newnode1->next=newnode;
				return;
			}
			newnode1=newnode1->next;
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
