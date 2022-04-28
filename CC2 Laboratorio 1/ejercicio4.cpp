#include <ctime>
#include <iostream>
using namespace std;

int main(){
    time_t timer;
    time(&timer);
    int minutosmenos;
    cout << "Inserte la cantidad de minutos a atrasar: " << endl; cin >> minutosmenos;
    int segundos = timer - minutosmenos*60;
    int minutos = 0;
    int horas = 0;
    int dia = 1;
    int mes = 1;
    int year = 1970;
    if(segundos >= 0){
        while(segundos >=60){
            segundos-=60;
            minutos++;
        }
        while(minutos >=60){
            minutos-=60;
            horas++;
        }
        while(horas >= 24){
            horas-=24;
            dia++;
        }
        while(dia>31){
            if(year%4 != 0 || (year%100==0 && year%400 !=0)){
                if(mes%12==1 || mes%12==3 || mes%12==4 || mes%12==6 || mes%12==7 || mes%12==8 || mes%12==12){
                    dia-=31;
                    mes++;
                }
                if(mes%12==2){
                    dia-=29;
                    mes++;
                }
                else{
                    dia-=30;
                    mes++;
                }
            }
            else{
                if(mes%12==1 || mes%12==3 || mes%12==4 || mes%12==6 || mes%12==7 || mes%12==8 || mes%12==12){
                    dia-=31;
                    mes++;
                }
                if(mes%12==2){
                    dia-=28;
                    mes++;
                }
                else{
                    dia-=30;
                    mes++;
                }
            }
        }
        while(mes>12){
            year++;
            mes-=12;
        }
        if(minutos>=10){
            cout << "La fecha y hora nuevas son: " << horas << ":" << minutos << " de " << dia << "/" << mes << "/" << year;
        }
        else{
            cout << "La fecha y hora nuevas son: " << horas << ":" << "0" << minutos << " de " << dia << "/" << mes << "/" << year;
        }
    }
    else{
        while(segundos <=-60){
            segundos+=60;
            minutos--;
        }
        while(minutos <=-60){
            minutos+=60;
            horas--;
        }
        while(horas <= -24){
            horas+=24;
            dia--;
        }
        while(dia<-31){
            if(year%4 != 0 || (year%100==0 && year%400 !=0)){
                if(mes%12==-1 || mes%12==-3 || mes%12==-4 || mes%12==-6 || mes%12==-7 || mes%12==-8 || mes%12==-12){
                    dia+=31;
                    mes--;
                }
                if(mes%12==-2){
                    dia+=29;
                    mes--;
                }
                else{
                    dia+=30;
                    mes--;
                }
            }
            else{
                if(mes%-12==1 || mes%-12==3 || mes%-12==4 || mes%-12==6 || mes%-12==7 || mes%-12==8 || mes%-12==12){
                    dia+=31;
                    mes--;
                }
                if(mes%-12==2){
                    dia+=28;
                    mes--;
                }
                else{
                    dia+=30;
                    mes--;
                }
            }
        }
        while(mes<-12){
            year--;
            mes+=12;
        }
        if(minutos>=10){
            cout << "La fecha y hora nuevas son: " << horas << ":" << minutos << " de " << dia << "/" << mes << "/" << year;
        }
        else{
            cout << "La fecha y hora nuevas son: " << horas << ":" << "0" << minutos << " de " << dia << "/" << mes << "/" << year;
        }
    }
}