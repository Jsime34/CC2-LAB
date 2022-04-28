#include <iostream>
using namespace std;


int main(){
    cout << "Los numeros primos entre uno y 100 son: ";
    bool esprimo = true;
    for(int i=2; i<101; i++){
        esprimo = true;
        for(int j=2; j<i; j++){
            if(i%j==0){
                esprimo = false;
                break;
            }
        }
        if(esprimo == true){
            cout << i << ", ";
        }
    }
}