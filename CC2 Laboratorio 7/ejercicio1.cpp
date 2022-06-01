#include "Estudiante.h"
using namespace std;

int main(){
    Estudiante jaime = Estudiante(5, "Primaria");
    jaime.setedad(12);
    jaime.setnombre("Jaime");
    jaime.imprimirstud();
    system("pause");
}
