#include <iostream>
#include <ctime>
using namespace std;

void imprimir(float * numero){
    for(int i=0; i<3; i++){
        cout << *(numero + i) << " ";
    }
    cout << endl;
}

int sumar(float *numero, float*numero2){
    int rpta=0;
    for(int i=0; i<3; i++){
        rpta+=numero[i]*numero2[i];
    }
    return rpta;
}

int main(){
    float *num1, *num2;
    srand(time(NULL));
    for(int i=0; i<1000000; i++){
        num1 = new float[3];
        num2 = new float[3];
        for(int i=0; i<3; i++){
            num1[i] = 1+rand()%(100-1);
            num2[i] = 1+rand()%(100-1);
        }
        imprimir(num1);
        imprimir(num2);
        cout << "Rpta: " << sumar(num1, num2) << endl;

        delete[] num1;
        delete[] num2;
    }

    return 0;
}