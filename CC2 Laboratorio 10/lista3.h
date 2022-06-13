#ifndef LISTA3_H
#define LISTA3_H
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
		Nodo *newnode1 = new Nodo();
		Nodo *newnode2 = new Nodo();
		newnode1->dato = n;
		newnode1->next = NULL;
		if(enlazada==NULL){
			enlazada = newnode1;
		}else{
			newnode2 = enlazada;
			while(newnode2->next!=NULL){
				newnode2=newnode2->next;
			}
			newnode2->next = newnode1;
		}
		cout<<"\tNodo insertado con exito"<<endl;
	}
	
	void add_first(Nodo *&enlazada, int n){
		Nodo *newnode1 = new Nodo();
		newnode1->dato = n;
		newnode1->next = enlazada;
		enlazada = newnode1;
	}
	void add_between(Nodo *&enlazada, int n, int pos){
		Nodo *newnode1 = new Nodo();
		Nodo *newnode2 = new Nodo();
		newnode1->dato=n;
		newnode2=enlazada;
		for(int i=1;newnode2!=NULL;i++){
			if(i==pos){
				newnode1->next=newnode2->next;
				newnode2->next=newnode1;
				return;
			}
			newnode2=newnode2->next;
		}
	}
	void show(Nodo *enlazada){
		while(enlazada != NULL){
			cout<<enlazada->dato<<"->";
			enlazada = enlazada->next;
		}
	}
};
#endif
 
