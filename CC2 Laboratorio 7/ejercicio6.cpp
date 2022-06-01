#include <iostream>
#include "pato.h"
#include "ganso.h"
#include "gallina.h"
using namespace std;

int main(){
    Pato pepe = Pato();
    Ganso espeso = Ganso();
    Gallina cobarde = Gallina();
    pepe.setaltura(2);
    pepe.setcolorplumas("Verde");
    pepe.sethuevos(4);
    pepe.setvuelo(8);
    pepe.volar();
    pepe.cuac();
    espeso.setaltura(3);
    espeso.setcolorplumas("Blanco");
    espeso.setdientes(6);
    espeso.setferocidad(7);
    espeso.sethuevos(2);
    cobarde.sethuevos(7);
    cobarde.setpeso(8);
    cobarde.ponerhuevos();
}