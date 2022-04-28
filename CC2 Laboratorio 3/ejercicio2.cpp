#include <iostream>
using namespace std;

bool bisiesto(int year){
    bool esbisiesto;
    if((year%4==0 && year%100!=0)||year%400==0){
        esbisiesto = true;
        return esbisiesto;
    }
    else{
        esbisiesto = false;
        return esbisiesto;
    }
}

int main(){
    int year;
    cout << "Inserte el ano que desea saber si es bisiesto o no: " << endl; cin >> year;
    bool esbisiesto1 = bisiesto(year);
    if(esbisiesto1 == true){
        cout << "El año es bisiesto." << endl;
    }
    else{
        cout << "El año no es bisiesto.";
    }
}