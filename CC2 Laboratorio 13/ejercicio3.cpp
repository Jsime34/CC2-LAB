#include <iostream>
using namespace std;

struct jugador{
    string nombre;
    float talla;
    int edad;
};

int main(){
    int n, edad1;
    float talla1;
    string nombre1;
    jugador jugadores[10];
    for(int i = 0; i < 10; i++){
        cout << "Introduzca el nombre del jugador[" << i+1 << "]: " << endl; cin >> jugadores[i].nombre;
        cout << "Introduzca la talla del jugador[" << i+1 << "]: " << endl; cin >> jugadores[i].talla;
        cout << "Introduzca la edad del jugador[" << i+1 << "]: " << endl; cin >> jugadores[i].edad;
    }
    for(int i = 0; i < 10; i++){
        if(jugadores[i].talla > 1.70 && jugadores[i].edad < 20){
            cout << "El jugador " << jugadores[i].nombre << " es un jugador apto para el equipo." << endl;
        }
    }
}