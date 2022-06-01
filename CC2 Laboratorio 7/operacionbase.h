#include <iostream>
#pragma once
using namespace std;

class operacionBase{
    public:
        int operador;
        operacionBase();
        ~operacionBase();
        void setoperador(int);
        int getoperador();
};

operacionBase::operacionBase(){
}
operacionBase::~operacionBase(){
}
void operacionBase::setoperador(int newop){
    operador = newop;
}
int operacionBase::getoperador(){
    int op = operador;
    return operador;
}