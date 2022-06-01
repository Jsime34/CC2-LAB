#pragma once
#include "color.h"
#include <iostream>
using namespace std;

class Material: public Color{
    protected:
        string material;
    public:
        Material();
        ~Material();
        void setmaterial(string);
        string getmaterial();
        void printmaterial();      
};

Material::Material(){
}

Material::~Material(){
}

void Material::setmaterial(string newmaterial){
    material = newmaterial;
}

string Material::getmaterial(){
    string materiales = material;
    return materiales;
}

void Material::printmaterial(){
    cout << "El material referido es " << material << " de color " << color << endl;
}