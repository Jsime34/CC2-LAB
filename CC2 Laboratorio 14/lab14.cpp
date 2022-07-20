
#include <stdio.h>
#include <iostream>
using namespace std;

/*Hacer sistema de stock de una tienda con punteros dobles*/
struct nodo{
    int codigo;
    int stock;
    string nombre;
    float precio;
    nodo *next = NULL;
};

void imprimirproductos(nodo &head){
    nodo *aux = &head;
    nodo *aux2 = aux->next;
    while(aux2 != NULL){
        cout<<"Codigo: " << aux2->codigo << endl;
        cout<<"Nombre: " << aux2->nombre << endl;
        cout<<"Precio: " << aux2->precio << endl;
        cout<<"Stock: " << aux2->stock << endl;
        aux2 = aux2->next;
    }
}

void modificarnombre(string nombrenuevo, int codenuevo, float precionuevo, int stocknueva, nodo &head){
    nodo *aux = &head;
    nodo **aux2 = &aux;
    while(*aux2 != NULL){
        if((*aux2)->codigo == codenuevo){
            (*aux2)->nombre = nombrenuevo;
            (*aux2)->precio = precionuevo;
            (*aux2)->stock = stocknueva;
            break;
        }
        aux2 = &((*aux2)->next);
    }
    
}


void nuevoproducto(string nombre, int codigo, float precio, int stock, nodo &head){
    nodo *aux = new nodo;
    nodo *aux2 = new nodo;
    aux->nombre = nombre;
    aux->codigo = codigo;
    aux->precio = precio;
    aux->stock = stock;
    aux->next = NULL;
    if(head.next == NULL){
        head.next = aux;
    }else{
        aux2 = head.next;
        while(aux2->next != NULL){
            aux2 = aux2->next;
        }
        aux2->next = aux;
    }
}

void eliminarproducto(int codigoeliminar, nodo &head){
    nodo *aux = &head;
    nodo **aux2 = &aux;
    while(*aux2 != NULL){
        if((*aux2)->codigo == codigoeliminar){
            (*aux2) = (*aux2)->next;
            break;
        }
        aux2 = &((*aux2)->next);
    }
}

void buscarproductocode(int codebuscar, nodo &head){
    nodo *aux = &head;
    while(aux != NULL){
        if(aux->codigo == codebuscar){
            cout<<"El producto " << aux->nombre << " fue encontrado." << endl;
            break;
        }
        aux = aux->next;
    }
}

void buscarproductonombre(string nombrebuscar, nodo &head){
    nodo *aux = &head;
    while(aux != NULL){
        if(aux->nombre == nombrebuscar){
            cout<<"El producto " << aux->nombre << " fue encontrado." << endl;
            break;
        }
        aux = aux->next;
    }
}

int main(){
    int opc=0, codenuevo, stocknueva, pornombre;
    string nombrenuevo;
    float precionuevo;
    nodo* head = new nodo();
    while(opc != 6){
        cout<<"1. Agregar producto" << endl;
        cout<<"2. Modificar producto" << endl;
        cout<<"3. Eliminar producto" << endl;
        cout<<"4. Imprimir lista de productos" << endl;
        cout<<"5. Buscar producto" << endl;
        cout<<"6. Salir" << endl;
        cin>>opc;
        switch(opc){
            case 1:
                cout<<"Ingrese el codigo del producto: "; cin>>codenuevo;
                cout<<"Ingrese el stock del producto: "; cin>>stocknueva;
                cout<<"Ingrese el nombre del producto: "; cin>>nombrenuevo;
                cout<<"Ingrese el precio del producto: "; cin>>precionuevo;
                nuevoproducto(nombrenuevo, codenuevo, precionuevo, stocknueva, *head);
                break;
            case 2:
                cout<<"Ingrese el codigo del producto: ";
                cin>>codenuevo;
                cout<<"Ingrese el nombre nuevo del producto: "; cin>>nombrenuevo;
                cout<<"Ingrese el precio nuevo del producto: ";
                cin>>precionuevo;
                cout<<"Ingrese el stock nuevo del producto: ";
                cin>>stocknueva;
                modificarnombre(nombrenuevo, codenuevo, precionuevo, stocknueva, *head);
                break;
            case 3:
                cout<<"Ingrese el codigo del producto: ";
                cin>>codenuevo;
                eliminarproducto(codenuevo, *head);
                break;
            case 4:
                cout << "Lista de productos: " << endl;
                imprimirproductos(*head);
                break;
            case 5:
                cout << "Desea buscar por codigo o por nombre?" << endl;
                cout << "1. Codigo" << endl;
                cout << "2. Nombre" << endl; cin >> pornombre;
                if(pornombre == 1){
                    cout << "Ingrese el codigo del producto: ";
                    cin >> codenuevo;
                    buscarproductocode(codenuevo, *head);
                }else{
                    cout << "Ingrese el nombre del producto: ";
                    cin >> nombrenuevo;
                    buscarproductonombre(nombrenuevo, *head);
                }
                break;
            case 6:
                break;
            default:
                cout<<"Opcion no valida" << endl;
        }
    }
}