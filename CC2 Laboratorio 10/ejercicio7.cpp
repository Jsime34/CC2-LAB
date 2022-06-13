#include "lista7.h"
#include<time.h>
int main()
{
	int data,num,opc;
	Nodo *lista=NULL;
	
	srand(time(NULL));
	do{
		cout<<"\n\tMENU(INSERTAR EL NUMERO DE ACUERDO A SU ACCION)"<<endl;
		cout<<"1. Ordenar de forma ascendente. "<< endl;
        cout<<"2. Ordenar de forma descendente" << endl;
        cout<<"3. Terminar programa"<<endl;
		cout<<"Inserte su accion: ";cin>>opc;
		if(opc==1){
			cout<<"Cuantos nodos piensa insertar?: ";cin>>num;
			
			for(int i=0;i<num;i++){
				data = 1 + rand() % (10000 - 1);
				lista->up(lista,data);
				
				
				cout<<"\nLista enlazada actual: ";
				lista->show(lista);
			}
		}else if(opc==2){
			cout<<"Cuantos nodos va a insertar? ";cin>>num;
			
			for(int i=0;i<num;i++){
				data = 1 + rand() % (10000 - 1);
				lista->down(lista,data);
				
				
				cout<<"\nLista enlazada actual: ";
				lista->show(lista);
			}
		}else if(opc==3){
			break;
		}else{
			cout<<"\nInserte un numero entre 1 y 3"<<endl;
		}
	}while(true);
	
	
	return 0;
}

