#include <iostream>
using namespace std;

int main(){
    char palabra[20];
    cout << "Inserte una palabra: " << endl; cin >> palabra;
    int largo = 0;
    while(palabra[largo] != 0){
        largo++;
    }
    for(int i=largo; i>=0; i--){
        cout << palabra[i] << endl;
    }
}