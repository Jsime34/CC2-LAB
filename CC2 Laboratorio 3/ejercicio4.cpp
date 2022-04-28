#include <iostream>
using namespace std;

void hallarprimos(int x){
    cout << "1 ";
    for(int i=2; i<=x; i++){
        bool esprimo= true;
        for(int j=2; j<i; j++){
            if(i%j==0){
                esprimo = false;
            }
        }
        if(esprimo == true){
            cout << i << " ";
        }
    }
}

int main(){
    int z;
    cout << "Ingrese el numero del que desea hallar primos desde 1: " << endl; cin >> z;
    hallarprimos(z);
}