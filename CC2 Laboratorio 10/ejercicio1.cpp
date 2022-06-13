#include "lista1.h"
int main()
{
	int datos,num,alt;
	Nodo *array1=NULL;
	do{
		cout<<"\nMENU(SELECCIONE LA OPCION SEGUN SU NUMERO)"<<endl;
		cout<<"1.-Agregar nodo"<<endl;
		cout<<"2.-Mostrar nodos"<<endl;
		cout<<"3.-Terminar programa"<<endl;
		cout<<"Inserte: ";cin>>alt;
		if(alt==1){
			cout<<"Cantidad de nodos ";cin>>num;
			for(int i=0;i<num;i++){
				cout<<"Orden: ";cin>>datos;
				array1->add(array1,datos);
			}    
		}else if(alt==2){
			cout<<"\nMostrando la lista enlazada: ";
			array1->mostrar(array1);
		}else if(alt==3){
			break;
		}
		else{
			cout<<"\n\tInserte un numero adecuado (del 1 al 3)"<<endl;
		}
	}while(true);
	
	system("pause");
	return 0;
}
