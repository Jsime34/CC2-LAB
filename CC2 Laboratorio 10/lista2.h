#ifndef arraynuevo2_H
#define arraynuevo2_H
#include <iostream>
#include <stdlib.h>
 
using namespace std;
class Nodo{
private:
	int dato;
	Nodo *next;
	
public:
	Nodo(){}
	void add_end(Nodo *&arraynuevo, int n){
		Nodo *nuevo = new Nodo();
		Nodo *nuevo1 = new Nodo();
		nuevo->dato = n;
		nuevo->next = NULL;
		if(arraynuevo==NULL){
			arraynuevo = nuevo;
		}else{
			nuevo1 = arraynuevo;
			while(nuevo1->next!=NULL){
				nuevo1=nuevo1->next;
			}
			nuevo1->next = nuevo;
		}
		cout<<"\tNodo ingresado."<<endl;
	}
	
	void add_start(Nodo *&arraynuevo, int n){
		Nodo *nuevo = new Nodo();
		nuevo->dato = n;
		nuevo->next = arraynuevo;
		arraynuevo = nuevo;
	}
		
	void show(Nodo *arraynuevo){
		while(arraynuevo != NULL){
			cout<<arraynuevo->dato<<"->";
			arraynuevo = arraynuevo->next;
		}
	}
};
#endif
 
