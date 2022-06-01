#include "operacionfactorial.h"
#include <iostream>
using namespace std;

int main(){
    int factorial;
    cout << "Inserte el numero al que sacara factorial: " << endl; cin >> factorial;
    operacionFactorial hallar = operacionFactorial();
    hallar.setop(factorial);
    hallar.setoperador(factorial);
    cout << "El factorial es: " << hallar.devolverfact() << endl;
}
