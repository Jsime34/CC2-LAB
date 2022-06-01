#include <iostream>
#include <string.h>
using namespace std;

struct Lista{
    void *puntero[3];
    Lista *sig;
};
void insertar(Lista *&lista){
    Lista *nuevo_nodo = new Lista();
    nuevo_nodo->sig = NULL;
    int *num_int;
    char letra[500];
    num_int = new int;
    cout << "Ingrese el código: " << endl; cin >> *num_int;
    fflush(stdin);
    nuevo_nodo->puntero[0] = num_int;
    cout << "Inserte el nombre: " << endl; gets(letra);
    fflush(stdin);
    nuevo_nodo->puntero[1]=new char[strlen(letra)+1];
    strcpy((char*)nuevo_nodo->puntero[1], letra);
    Lista *aux1 = lista;
    if(aux1 == NULL){
        lista = nuevo_nodo;
    }
    else{
        while(aux1->sig != NULL){
            aux1 = aux1 ->sig;
        }
        aux1->sig = nuevo_nodo;
    }
}

void imprimir(Lista *lista){
    Lista *aux = lista;
    while(aux!=NULL){
        cout << "Numero: "<<*(int*)(lista->puntero[0]) << endl;
        cout << "Texto: " << (char*)(aux->puntero[1])<<endl;
        aux = aux->sig;
    }
}
void buscarint(Lista *lista, int n){
    bool encontrado = false;
    Lista *aux = lista;
    while(aux!=NULL){
        if(*(int*)(lista->puntero[0])==n){
            cout << "Se encontro el elemento." << endl;
            encontrado = true;
            return;
        }
        else{
            aux = aux->sig;
        }
    }
    if(encontrado == false){
        cout << "No se encontró el elemento." << endl;
    }
}
void buscarchar(Lista *lista, char n[]){
    bool encontrar = false;
    Lista *aux = lista;
    while(aux!=NULL){
        if((char*)(lista->puntero[1])==n){
            cout << "Elemento encontrado" << endl;
            encontrar = true;
            return;
        }
    }
    if(encontrar==false){
        cout << "No se pudo encontrar el elemento." << endl;
    }
}
int main(){
    Lista *lista = NULL;
    for(int i=0; i<5; i++){
        insertar(lista);
    }
    imprimir(lista);
    return 0;
}