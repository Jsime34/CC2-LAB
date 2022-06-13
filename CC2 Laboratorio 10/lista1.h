#ifndef LISTA1_H
#define LISTA1_H
#include <iostream>
#include <stdlib.h>
 
using namespace std;
class Nodo{
private:
	int dato;
	Nodo *next;
	
public:
	Nodo(){}
	void add(Nodo *&array, int n){
		Nodo *nuevo = new Nodo();
		Nodo *nuevo1 = new Nodo();
		nuevo->dato = n;
		nuevo->next = NULL;
		if(array==NULL){
			array = nuevo;
		}else{
			nuevo1 = array;
			while(nuevo1->next!=NULL){
				nuevo1=nuevo1->next;
			}
			nuevo1->next = nuevo;
		}
		cout<<"\tNodo ingresado."<<endl;
	}
		
		
		void mostrar(Nodo *array){
			while(array != NULL){
				cout<<array->dato<<"->";
				array = array->next;
			}
		}
};

#endif