#include <iostream>

using namespace std;

int main(){
    cout << "Los números múltiplos de 5 entre 0 y 100 son: ";
    for(int i=0; i<101; i++){
        if(i%5==0){
            cout << i << ", ";
        }
    }
    cout << ".";
}