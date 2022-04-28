#include <iostream>
using namespace std;

int main(){
    string contra;
    cout << "Establezca una contraseña: " << endl; cin >> contra;
    string a;
    while(a != contra)
    {
        cout << "Introduzca su contraseña: " << endl; cin >> a;
    }
    cout << "Contraseña correcta. Puede pasar.";
    
}