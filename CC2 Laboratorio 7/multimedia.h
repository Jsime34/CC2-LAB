#pragma once
#include <iostream>
using namespace std;

class Multimedia{
    protected:
        string nombre;
        string autor;
    public:
        Multimedia();
        ~Multimedia();
        void setnombre(string);
        void setautor(string);
        void imprimirmul();
};

Multimedia::Multimedia(){

}
Multimedia::~Multimedia(){

}
void Multimedia::setnombre(string newname){
    nombre = newname;
}
void Multimedia::setautor(string newautor){
    autor = newautor;
}
void Multimedia::imprimirmul(){
    cout << "Multimedia: " << nombre << endl;
    cout << "Hecho por: " << autor << endl;
}