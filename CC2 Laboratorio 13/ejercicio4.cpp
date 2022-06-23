#include <iostream>
using namespace std;

struct empleado{
    string nombre;
    string sexo;
    float salario;
};

int main(){
    string nombre1, sexo1;
    float salario1;
    int n;
    int menor=100000000;
    int menor_id;
    int mayor=0;
    int mayor_id;
    cout << "Inserte el numero de empleados de la empresa: " << endl; cin >> n;
    empleado empleados[n];
    for(int i = 0; i < n; i++){
        cout << "Introduzca el nombre del empleado: " << endl; cin >> empleados[i].nombre;
        cout << "Introduzca el sexo del empleado: " << endl; cin >> empleados[i].sexo;
        cout << "Introduzca el salario del empleado: " << endl; cin >> empleados[i].salario;
    }
    for(int i=0; i<n; i++){
        if(empleados[i].salario < menor){
            menor = empleados[i].salario;
            menor_id = i;
        }
        if(empleados[i].salario > mayor){
            mayor = empleados[i].salario;
            mayor_id = i;
        }
    }
    cout << "El empleado con mayor salario es: " << empleados[mayor_id].nombre << " que gana " << empleados[mayor_id].salario << endl;
    cout << "El empleado con menor salario es: " << empleados[menor_id].nombre << " que gana " << empleados[menor_id].salario << endl;
}