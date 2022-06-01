#pragma once
#include "operacionbase.h"
#include <iostream>
using namespace std;

class operacionFactorial: public operacionBase{
    public:
        operacionFactorial();
        ~operacionFactorial();
        void setop(int);
        int getop();
        int devolverfact();
};

operacionFactorial::operacionFactorial(){
}

operacionFactorial::~operacionFactorial(){
}

void operacionFactorial::setop(int newop){
    operador = newop;
}

int operacionFactorial::getop(){
    int returnop = operador;
}

int operacionFactorial::devolverfact(){
    int rpta = 1;
    int num = getoperador();
    for(int i=num; i>0; i--){
        rpta *= i;
    }
    return rpta;
}