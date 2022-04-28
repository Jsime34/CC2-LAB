#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(){
    char hora[8];
    int horas, minutos;
    int cambiominutos;
    bool esdia;
    cout << "Ingrese la hora: " << endl; cin >> hora;
    cout << "Ingrese los minutos a acelerar: " << endl; cin >> cambiominutos;
    horas = atoi(hora);
    string minutitos = "";
    minutitos += hora[3];
    minutitos += hora[4];
    minutos = stoi(minutitos);
    minutos += cambiominutos;
    while(minutos > 59){
        horas++;
        minutos-=60;
    }
    while(horas > 24){
        horas -=24;
    }
    if(minutos>9){
        if(horas < 12){
            cout << "La hora nueva es: " << horas << ":" << minutos << " AM" << endl;
        }
        if(horas >=12){
            cout << "La hora nueva es: " << horas-12 << ":" << minutos << "PM" << endl;
        }
    }
    else{
        if(horas < 12){
            cout << "La hora nueva es: " << horas << ":" << "0" << minutos << " AM" << endl;
        }
        if(horas >=12){
            cout << "La hora nueva es: " << horas-12 << ":" << "0" << minutos << "PM" << endl;
        }
    }
}