#include "lista4.h"
int main()
{
	int data,num,opc;
	Nodo *lista=NULL;
	do{
		cout<<"\nMENU(INSERTAR NUMERO SEGUN SU ACCION)"<<endl;
		cout<<"1.Insertar nodo a la izquierda"<<endl;
		cout<<"2.Insertar nodo a la derecha"<<endl;
		cout<<"3.Imprimir la lista enlazada"<<endl;
		cout<<"4.Insertar nodo en un intervalo"<<endl;
		cout<<"5.Eliminar el nodo a la derecha."<<endl;
		cout<<"6.Terminar el programa"<<endl;
		cout<<"Opcion: ";cin>>opc;
		if(opc==1){
			cout<<"Cuantos nodos piensa ingresar?: ";cin>>num;
			for(int i=0;i<num;i++){
				cout<<"Valor: ";cin>>data;
				lista->add_first(lista,data);
			}    
		}else if(opc==2){
			cout<<"Cuantos nodos piensa ingresar?: ";cin>>num;
			for(int i=0;i<num;i++){
				cout<<"Valor: ";cin>>data;
				lista->add_last(lista,data);
			}    
		}else if(opc==3){
			cout<<"\nImprimiendo lista enlazada: ";
			lista->show(lista);
		}else if(opc==4){
			cout<<"Posicion: ";cin>>num;
			cout<<"Valor: ";cin>>data;
			lista->add_there(lista,data,num);
		}else if(opc==5){
			lista->delete_last(lista);
		}else if(opc==6){
			break;
		}
		else{
			cout<<"\n\tInserte un numero del 1 al 6"<<endl;
		}
	}while(true);
	
	system("pause");
	return 0;
}
 
 
