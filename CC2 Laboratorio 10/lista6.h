#ifndef LISTA6_H
#define LISTA6_H
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
		cout<<"\tSe registro el nodo con exito"<<endl;
	}
	
	void add_first(Nodo *&enlazada, int n){
		Nodo *nuevo = new Nodo();
		nuevo->dato = n;
		nuevo->next = enlazada;
		enlazada = nuevo;
	}
	void insert_there(Nodo *&enlazada, int n, int pos){
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
	
	void delete_position(Nodo *&enlazada, int pos){
		if(enlazada!=NULL){
			if(pos==1){
				enlazada->delete_first(enlazada);
			}
			else{
				Nodo *nuevo = enlazada;
				Nodo *nuevo1 = nuevo->next;
				int x=1;
				while(nuevo1!=NULL){
					x++;
					if(x==pos){
						nuevo->next = nuevo1->next;
						delete nuevo1;
						nuevo1=nullptr;
						return;
					}
					nuevo = nuevo1;
					nuevo1 = nuevo1->next;
				}
				cout<<"Elemento no encontrado"<<endl;
				return;
			}
			
		}else{
			cout<<"Lista vacia";
		}
		
	}
	void delete_last(Nodo *&enlazada){
		Nodo *start = enlazada;
		Nodo *start1 = enlazada;
		if(enlazada != NULL){
			while(start->next !=NULL){
				start1 = start;
				start = start->next;
			}
			
		}else{
			cout<<"La lista no contiene algun elemento"<<endl;
		}
		
	}
	
	void delete_first(Nodo *&enlazada){
		Nodo *start = enlazada;
		Nodo *start1 = enlazada;
		if(enlazada != NULL){
			if(start->next !=NULL){
				start1 = start;
				start = start->next;
				enlazada = enlazada->next;
			}
			if(start != start1){
				start1->next = NULL;
				delete start1;
			}else{
				delete enlazada;
				enlazada=NULL;
			}
		}else{
			cout<<"La lista no contiene algun elemento"<<endl;
		}
	}
	void show(Nodo *enlazada){
		if(enlazada==NULL){
			cout<<"La lista no contiene algun elemento"<<endl;
		}else{
			while(enlazada != NULL){
				cout<<enlazada->dato<<"->";
				enlazada = enlazada->next;
			}
		}
		
	}
};
#endif
 
