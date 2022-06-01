#pragma once
#include <iostream>
using namespace std;

class Color{
    protected:
        string color;
    public:
        Color();
        ~Color();
        void setcolor(string);
        string getcolor();
    private:
        void printcolor();
};

Color::Color(){

}

Color::~Color(){

}

void Color::setcolor(string newcolor){
    color = newcolor;
}

string Color::getcolor(){
    string colorr = color;
    return colorr;
}

void Color::printcolor(){
    cout << "El color seleccionado es: " << color << endl;
}