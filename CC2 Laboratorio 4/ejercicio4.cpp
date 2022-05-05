#include <iostream>
using namespace std;

int main(){
    int primos [50];
    int iterar = 2;
    primos[0] = 1;
    primos[1] = 2;
    for(int i=3; i<=100; i++){
        bool esprimo = true;
        for(int j=2; j<i; j++){
            if(i%j==0){
                esprimo = false;
            }
        }
        if(esprimo==true){
            primos[iterar]=i;
            iterar++;
        }
    }
    for(int i=iterar-1; i>=0; i--){
        cout << primos[i] << " ";
    }
}