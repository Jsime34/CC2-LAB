#include "disco.h"
#include <iostream>

using namespace std;

int main(){
    Disco jazz = Disco();
    jazz.setcapacidad(300);
    jazz.setnombre("Rolones");
    jazz.setautor("UF48");
    jazz.imprimirdisco();
}