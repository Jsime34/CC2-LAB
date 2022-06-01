#include <iostream>

using namespace std;

void sumar(int a, int b){cout<<a+b<<endl;}
void restar(int a, int b){cout<<a-b<<endl;}
void multiplicar(int a, int b){cout<<a*b<<endl;}
void dividir(int a, int b){cout<<a/b<<endl;}
int main(){
    void (*operamos[4])(int, int) = {
    sumar,restar,multiplicar,dividir
    };
    int x, y;
    cout<<"Inserte el primer numero: ";cin>>x;
    cout<<"Inserte el segundo numero: ";cin>>y;
    for(int i=0;i<4;i++){
    operamos[i](x,y);
    }
    return 0;
}