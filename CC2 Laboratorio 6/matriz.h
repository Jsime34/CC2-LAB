#pragma once
#include <iostream>
#include <random>
using namespace std;

class Matriz{
    private:
    int matrix[3][3];
    public:
    Matriz();
    ~Matriz();
    void buscar(int);
};

Matriz::Matriz(){
    int num;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            num = rand()%10;
            matrix[i][j]=num;
        }
    }
}


Matriz::~Matriz(){
}

void Matriz::buscar(int abuscar){
    bool encontrar = false;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(abuscar == matrix[i][j]){
                cout << "Numero encontrado en la posicion [" << i << "]["<<j<<"]" << endl;
            }
        }
    }
}