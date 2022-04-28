#include <cmath>
#include <iostream>
using namespace std;

int main(){
    float a;
    cout << "Ingrese su numero flotante: " << endl; cin >> a;
    int b = round(a);
    cout << "Su numero redondeado es: " << b;
}