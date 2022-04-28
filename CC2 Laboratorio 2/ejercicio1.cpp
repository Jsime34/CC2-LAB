#include <iostream>

using namespace std;

int suma = 0;

int main(){
    for(int i=0; i<101; i++){
        if(i%2==0){
            suma += i;
        }
    }
    cout << "La suma de los pares  entre 0 y 100 es: " << suma;
}

