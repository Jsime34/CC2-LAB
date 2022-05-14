#pragma once

class Rectangulo{
    private:
        int largo;
        int ancho;
    public:
        Rectangulo(int, int);
        ~Rectangulo();
        int getancho();
        int getlargo();
        int calculararea();
        int calcularperimetro();
};

Rectangulo::Rectangulo(int _largo, int _ancho){
    largo = _largo;
    ancho = _ancho;
}

Rectangulo::~Rectangulo(){
}

int Rectangulo::getancho(){
    int ancho1;
    ancho1 = ancho;
    return ancho1;
}

int Rectangulo::getlargo(){
    int largo1;
    largo1 = largo;
    return largo1;
}

int Rectangulo::calculararea(){
    int largo1, ancho1;
    largo1 = getlargo();
    ancho1 = getancho();
    int area;
    area = largo1*ancho1;
    return area;
}

int Rectangulo::calcularperimetro()
{
    int largo1, ancho1;
    largo1 = getlargo();
    ancho1 = getancho();
    int perimetro;
    perimetro = 2*(largo1 + ancho1);
    return perimetro;
}