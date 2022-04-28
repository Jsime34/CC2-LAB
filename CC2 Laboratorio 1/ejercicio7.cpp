#include <iostream>
using namespace std;

int main(){
    int a, b;
    bool esdivisor = false;
    cout << "Ingrese el primer número: " << endl; cin >> a;
    cout << "Ingrese el segundo número: " << endl; cin >> b;
    if(a>b){
        if(a%b == 0){
            esdivisor = true;
        }
    }
    else if(a<b){
        if(b%a == 0){
            esdivisor = true;
        }
    }
    else{
        esdivisor = true;
    }
    if(esdivisor==true){
        cout << "Un número es divisor del otro.";
    }
    else{
        cout << "Estos números no son divisores de alguno entre ellos.";
    }
}