#include <iostream>
using namespace std;

int main(){
    int n, i=0;
    cout << "Inserte el número de notas que pondrá: " << endl; cin >> n;
    int a=0;
    int notas[n];
    int nota;
    int menor = 1000000;
    int mayor = 0;
    int suma = 0;
    while(a<n){
        cout << "Inserte su nota: " << endl; cin >> nota;
        notas[i] = nota;
        a++;
        i++;
    }
    for(int j=0; j<n; j++){
        suma += notas[j];
        if(notas[j]>mayor){
            mayor = notas[j];
        }
        if(notas[j]<menor){
            menor = notas[j];
        }
    }
    cout << "La media de notas es: " << suma/n << endl;
    cout << "La menor nota es: " << menor << endl;
    cout << "La mayor nota es: " << mayor;
}