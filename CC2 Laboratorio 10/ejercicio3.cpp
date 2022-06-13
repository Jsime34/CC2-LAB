#include "lista3.h"
int main()
{
	int data,num,chosen;
	Nodo *lista=NULL;
	do{
		cout<<"\nMENU(INSERTAR NUMERO DE ACUERDO A SU ACCION)"<<endl;
		cout<<"1.Insertar nodo a la izquierda"<<endl;
		cout<<"2.Insertar nodo a la derecha"<<endl;
		cout<<"3.Imprimir la lista enlazada"<<endl;
		cout<<"4.Insertar nodo en un intervalo"<<endl;
		cout<<"5.Terminar programa"<<endl;
		cout<<"Inserte su accion: ";cin>>chosen;
		if(chosen==1){
			cout<<"Cuantos nodos piensa insertar? ";cin>>num;
			for(int i=0;i<num;i++){
				cout<<"Valor: ";cin>>data;
				lista->add_first(lista,data);
			}    
		}else if(chosen==2){
			cout<<"Cuantos nodos deasea insertar? ";cin>>num;
			for(int i=0;i<num;i++){
				cout<<"Valor: ";cin>>data;
				lista->add_last(lista,data);
			}    
		}else if(chosen==3){
			cout<<"\nImprimiendo lista enlazada: ";
			lista->show(lista);
		}else if(chosen==4){
			cout<<"Posicion: ";cin>>num;
			cout<<"Valor: ";cin>>data;
			lista->add_between(lista,data,num);
		}else if(chosen==5){
			break;
		}
		else{
			cout<<"\n\tInserte un numero entre 1 y 5"<<endl;
		}
	}while(true);
	
	system("pause");
	return 0;
}
 
