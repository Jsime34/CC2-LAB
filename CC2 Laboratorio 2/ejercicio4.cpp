#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Ingrese el valor del número menor: " << endl; cin >> a;
    cout << "Ingrese el valor del número mayor: " << endl; cin >> b;
    if(b>a){
        int nroprimos = 0;
        for(int i=a; i<b+1; i++){
            if(i>2){
                bool esprimo = true;
                for(int j=2; j<i; j++){
                    if(i%j==0){
                        esprimo = false;
                    }
                }
                if(esprimo == true){
                    nroprimos++;
                    cout << i << " ";
                }
            }
        }
        if(nroprimos == 0){
            int primomenorcercano = 0;
            if(a>50){
                int nroprimosmenor=0;
                for(int i=a-40; i<a; i++){
                    bool esprimo = true;
                    for(int j=2; j<i; j++){
                        if(i%j==0){
                            esprimo = false;
                        }
                    }
                    if(esprimo==true){
                        nroprimosmenor++;
                        primomenorcercano = i;
                    }
                }
            }
            else{
                int nroprimosmenor=0;
                for(int i=2; i<a; i++){
                    bool esprimo = true;
                    for(int j=2; j<i; j++){
                        if(i%j==0){
                            esprimo = false;
                        }
                    }
                    if(esprimo==true){
                        nroprimosmenor++;
                        primomenorcercano = i;
                    }
                }
            }
            int primomayorcercano = 0;
            int nroprimosmayor=0;
            for(int i=b+100; i>b; i--){
                bool esprimo = true;
                for(int j=2; j<i; j++){
                    if(i%j==0){
                        esprimo = false;
                    }
                }
                if(esprimo==true){
                    nroprimosmayor++;
                    primomayorcercano = i;
                }
            }
            if(primomayorcercano-b < a-primomenorcercano){
                cout << "No se encontraron primos en ese rango, el más cercano es: " << primomayorcercano << endl;
            }
            else{
                cout << "No se encontraron primos en ese rango, el más cercano es: " << primomenorcercano << endl;
            }
        }
    }
    else{
        cout << "El número menor debe ser menor." << endl;
    }
}