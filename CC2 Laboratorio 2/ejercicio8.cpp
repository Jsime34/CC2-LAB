#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Inserte el número del que desea su tabla de multiplicar: " << endl; cin >> num;
    for(int i=1; i<13; i++){
        cout << i << " X " << num << " = " << num*i << endl;
    }
}