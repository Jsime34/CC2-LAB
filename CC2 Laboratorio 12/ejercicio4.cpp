#include "colas4.h"
using namespace std;

int main(){
    cola *Mujer = new cola();
    cola *Hombre = new cola();
    int n, edad;
    cout<<"Inserte el numero de varones: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Inserte la edad del varon #"<<i+1<<": ";cin>>edad;
        Hombre->add(edad);
    }
    cout<<"Inserte el numero de damas: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Inserte la edad de la dama #"<<i+1<<": ";cin>>edad;
        Mujer->add(edad);
    }
    Hombre->Compare(Hombre,Mujer);
    return 0;
}