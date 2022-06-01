#include <iostream>
#include <ctime>
using namespace std;

struct Enlazar{
    int dato;
    Enlazar *sig;
};
void insertar(Enlazar *&lista, int n){
    Enlazar *new_node = new Enlazar();
    new_node->dato = n;
    Enlazar *aux1 = lista;
    Enlazar *aux2;
    while(aux1 != NULL && aux1->dato <n){
        aux2 = aux1;
        aux1 = aux1 ->sig;
    }
    if(lista==aux1){
        lista = new_node;
    }
    else{
        aux2->sig = new_node;
    }
    new_node->sig = aux1;
}

void borrando(Enlazar *&lista, int n){
    if(lista!=NULL){
        Enlazar *aux_borrar;
        Enlazar *anterior = NULL;
        aux_borrar = lista;
        while((aux_borrar != NULL) && (aux_borrar->dato!=n)){
            anterior = aux_borrar;
            aux_borrar = aux_borrar->sig;
        }
        if(aux_borrar == NULL){
            cout << "El elemento no existe" << endl;
        }
        else if(anterior == NULL){
            lista = lista->sig;
            delete aux_borrar;
        }
    }
}

void imprimir(Enlazar *lista){
    Enlazar *actual = new Enlazar();
    actual = lista;
    while(actual != NULL){
        cout << actual ->dato <<"->";
        actual = actual->sig;
    }
    cout << endl;
}

int main(){
    Enlazar *lista = NULL;
    srand(time(NULL));
    int num;
    for(int i=0; i<10000; i++){
        num = 1+rand()%(10001-1);
        insertar(lista, num);
    }
    imprimir(lista);
    borrando(lista, num);
    imprimir(lista);
    return 0;
}