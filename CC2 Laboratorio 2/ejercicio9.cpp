#include <iostream>
using namespace std;

int main(){
    int iterar;
    cout << "Inserte el numero de la altura de la figura: " << endl; cin >> iterar;
    string figura = "*";
    for(int i=0; i<iterar; i++){
        cout << figura << endl;
        figura += "*";
    }
}