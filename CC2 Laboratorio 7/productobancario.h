#pragma once
#include <iostream>
using namespace std;

class ProductoBancario{
    protected:
        string cliente;
        double saldo;
        int numProducts;
    public:
        ProductoBancario();
        ~ProductoBancario();
        void setcliente(string);
        void setsaldo(double);
        void setnumProducts(int);
        void imprimir();
};

ProductoBancario::ProductoBancario(){
}

ProductoBancario::~ProductoBancario(){
}

void ProductoBancario::setcliente(string newclient){
    cliente = newclient;
}

void ProductoBancario::setnumProducts(int newnum){
    numProducts = newnum;
}

void ProductoBancario::setsaldo(double newsaldo){
    saldo = newsaldo;
}

void ProductoBancario::imprimir(){
    cout << "Nombre del cliente: " << cliente;
    cout << "Saldo del cliente: " << saldo;
    cout << "Numero de productos: " << numProducts;
}