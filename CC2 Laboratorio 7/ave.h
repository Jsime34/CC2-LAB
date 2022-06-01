#pragma once
#include <iostream>
using namespace std;

class Ave{
    public:
        string colorplumas;
        float altura;
        int huevos;
        Ave();
        ~Ave();
        void setcolorplumas(string);
        void setaltura(float);
        void sethuevos(int);
        void picotear();
        void aletear();
};

Ave::Ave(){
}
Ave::~Ave(){
}
void Ave::setcolorplumas(string pluma){
    colorplumas = pluma;
}
void Ave::setaltura(float newaltura){
    newaltura = altura;
}
void Ave::sethuevos(int webos){
    huevos = webos;
}
void picotear(){
    cout << "Este ave te está picoteando." << endl;
}
void aletear(){
    cout << "El ave empieza a aletear." << endl;
}