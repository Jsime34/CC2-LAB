#include "lista2.h"
int main()
{
	int data,num,chosen;
	Nodo *array1=NULL;
	do{
		cout<<"\nMENU(INSERTE DE ACUERDO AL NUMERO QUE CORRESPONDE)"<<endl;
		cout<<"1.Agregar nodo a la izquierda"<<endl;
		cout<<"2.Agregar nodo a la derecha"<<endl;
		cout<<"3.Mostrar los nodos"<<endl;
		cout<<"4.Terminar el programa"<<endl;
		cout<<"Opcion: ";cin>>chosen;
		if(chosen==1){
			cout<<"Numero de nodos: ";cin>>num;
			for(int i=0;i<num;i++){
				cout<<"Numero: ";cin>>data;
				array1->add_start(array1,data);
			}    
		}else if(chosen==2){
			cout<<"Cantidad de nodos: ";cin>>num;
			for(int i=0;i<num;i++){
				cout<<"Contenido: ";cin>>data;
				array1->add_end(array1,data);
			}    
		}else if(chosen==3){
			cout<<"\nMostrando la lista enlazada: ";
			array1->show(array1);
		}else if(chosen==4){
			break;
		}
		else{
			cout<<"\n\tInserte un numero dentro del rango(1 al 4)"<<endl;
		}
	}while(true);
	
	system("pause");
	return 0;
}
 
