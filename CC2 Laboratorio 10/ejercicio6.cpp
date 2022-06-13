#include "lista6.h"
int main()
{
	int data,num,opc;
	Nodo *lista=NULL;
	do{
		cout<<"\nMENU(INSERTAR EL NUMERO DE ACUERDO A SU ACCION)"<<endl;
		cout<<"1.Insertar nodo a la izquierda"<<endl;
		cout<<"2.Insertar nodo al final"<<endl;
		cout<<"3.Mostrar lista enlazada"<<endl;
		cout<<"4.Insertar en intervalo"<<endl;
		cout<<"5.Eliminar el elemento de la derecha"<<endl;
		cout<<"6.Eliminar el elemento de la izquierda"<<endl;
		cout<<"7.Eliminar determinado numero"<<endl;
		cout<<"8.Terminar programa"<<endl;
		cout<<"Opcion: ";cin>>opc;
		if(opc==1){
			cout<<"Cuantos nodos desea insertar? ";cin>>num;
			for(int i=0;i<num;i++){
				cout<<"Numero o valor del nodo: ";cin>>data;
				lista->add_first(lista,data);
			}    
		}else if(opc==2){
			cout<<"Cuantos nodos desea insertar?: ";cin>>num;
			for(int i=0;i<num;i++){
				cout<<"Numero o valor del nodo: ";cin>>data;
				lista->add_last(lista,data);
			}    
		}else if(opc==3){
			cout<<"\nMostrando lista enlazada: ";
			lista->show(lista);
		}else if(opc==4){
			cout<<"Posicion: ";cin>>num;
			cout<<"Valor: ";cin>>data;
			lista->insert_there(lista,data,num);
		}else if(opc==5){
			lista->delete_first(lista);
		}else if(opc==6){
			lista->delete_last(lista);
		}else if(opc==7){
			cout<<"Posicion: ";cin>>data;
			lista->delete_position(lista,data);
		}else if(opc==8){
			break;
		}
		else{
			cout<<"\n\tInserte un numero entre 1 y 8"<<endl;
		}
	}while(true);
	
	system("pause");
	return 0;
}
