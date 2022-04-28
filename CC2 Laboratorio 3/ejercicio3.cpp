#include <iostream>
using namespace std;

void edad(int dia1, int mes1, int year1, int dia2, int mes2, int year2){
    int yearrpta=0, mesrpta=0, diarpta=0;
    if(dia1>dia2){
        diarpta += (31-dia1);
        diarpta += dia2;
        mesrpta--;
    }
    else{
        diarpta = dia2-dia1;
    }
    if(mes1>mes2){
        mesrpta	+= (12-mes1);
        mesrpta += mes2;
        yearrpta--;
    }
    else{
        mesrpta = mes2-mes1;
    }
    yearrpta += year2-year1;
    cout << "Usted tiene " << yearrpta << " anos, " << mesrpta << " meses y " << diarpta << " dias.";
    
}

int main(){
    int diaactual, mesactual, anoactual;
    int dia, mes, ano;
    cout << "Inserte el dia, mes y ano actual: " << endl; cin >> diaactual >> mesactual >> anoactual;
    cout << "Inserte el dia, mes y ano de nacimiento: " << endl; cin >> dia >> mes >> ano;
    edad(dia, mes, ano, diaactual, mesactual, anoactual);
}