#include <iostream>
using namespace std;

int main(){
    int a = 2;
    int b = 3;
    cout << "Variable 1: " << a << endl;
    cout << "Variable 2: " << b << endl;
    int *pun = NULL;
    int *pun2 = NULL;
    int *aux = NULL;
    pun = &a;
    pun2 = &b;
    int aux1 = a;
    aux = &aux1;
    a = *pun2;
    b = *aux;
    cout << "Variable 1 nueva: " << a << endl;
    cout << "Variable 2 nueva: " << b << endl;

}