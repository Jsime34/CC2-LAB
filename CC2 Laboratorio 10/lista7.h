#ifndef LISTA7_H
#define LISTA7_H
#include <iostream>

using namespace std;

class Nodo{
public:
	Nodo *next;
	int dato;
public:
	Nodo(){}
	void down(Nodo *&Enlazada, int n){
		Nodo *nuevo = new Nodo();
		nuevo->dato = n;
		
		Nodo *ap1 = Enlazada;
		Nodo *ap2;
		
		while((ap1!=NULL)  && (ap1->dato>n)){
			ap2 = ap1;
			ap1 = ap1->next;
		}
		
		if(Enlazada == ap1){
			Enlazada = nuevo;
		}else{
			ap2->next = nuevo;
		}
		nuevo->next = ap1;
		
		cout<<"\tNodo ingresado."<<endl;
	}
		
	void up(Nodo *&Enlazada, int n){
		Nodo *nuevo = new Nodo();
		nuevo->dato = n;
			
		Nodo *ap1 = Enlazada;
		Nodo *ap2;
			
		while((ap1!=NULL)  && (ap1->dato<n)){
			ap2 = ap1;
			ap1 = ap1->next;
		}
			
		if(Enlazada == ap1){
			Enlazada = nuevo;
		}else{
			ap2->next = nuevo;
		}
		nuevo->next = ap1;
			
		cout<<"\tNodo ingresado."<<endl;
	}
			
			
			
	void show(Nodo *Enlazada){
		while(Enlazada != NULL){
			cout<<Enlazada->dato<<"->";
			Enlazada = Enlazada->next;
		}
	}
				
};

#endif

