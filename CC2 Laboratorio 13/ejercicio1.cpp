#include <iostream>
using namespace std;

struct Cumple{
    int dia;
    int mes;
    int ano;
    string nombre;
};

int main(){
    int n, nombre, dia, mes, ano, mesact;
    Cumple cumple[100];
    cout << "Introduzca el numero de cumpleaneros: " << endl; cin >> n;
    cout << "Introduzca el mes actual: " << endl; cin >> mesact;
    for(int i = 0; i < n; i++){
        cout << "Introduzca el nombre del cumpleanero: " << endl; cin >> cumple[i].nombre;
        cout << "Introduzca el dia de nacimiento: " << endl; cin >> cumple[i].dia;
        cout << "Introduzca el mes de nacimiento: " << endl; cin >> cumple[i].mes;
        cout << "Introduzca el ano de nacimiento: " << endl; cin >> cumple[i].ano;
    }
    for(int i = 0; i < n; i++){
        if(cumple[i].mes == mesact){
            cout << "El cumpleanero " << cumple[i].nombre << " cumple este mes." << endl;
        }
    }
}