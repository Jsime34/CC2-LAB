#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Ingrese su numero decimal entre 100 y 900" << endl; cin >> num;
    int cifras[100];
    int i=0;
    int add;
    while(num>1){
        add = num%2;
        num = num/2;
        cifras[i] = add;
        i++;
    }
    cout << num;
    for(int j=i; j--; j>=0){
        cout << cifras[j];
    }
}