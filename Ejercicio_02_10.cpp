// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 31/08/2023

// Fecha modificacion: 31/08/2023

// Numero de ejericio: 10

// Problema planteado: Dado un arreglo que contiene la población de los nueve departamentos del país y otro que contiene los nombres de estos 
//departamentos, indique el nombre del departamento que tiene la mayor población y el nombre del departamento que tiene la menor población.

#include <iostream>
#include <string>
using namespace std;
const int numDepartamentos = 9;
int main() {
    // Arreglo para almacenar nombres de departamentos y poblaciones
    string departamentos[numDepartamentos] = {"La Paz", "Cochabamba", "Santa Cruz", "Potosi", "Oruro", "Tarija", "Chuquisaca", "Beni", "Pando"};
    int poblacion[numDepartamentos] = {2893455, 2108785, 3270339, 936294, 494178, 482196, 637153, 521968, 154491};
    int maxPoblacion = -1;
    int minPoblacion = 10000000;
    string nombreMax;
    string nombreMin;
    // se recorre el arreglo de poblaciones para encontrar maxima y minima poblacion 
    for (int i = 0; i < numDepartamentos; ++i) {
        if (poblacion[i] > maxPoblacion) {
            maxPoblacion = poblacion[i];
            nombreMax = departamentos[i];
        }
        if (poblacion[i] < minPoblacion) {
            minPoblacion = poblacion[i];
            nombreMin = departamentos[i];
        }
    }
    cout <<"El departamento con la mayor poblacion es: " <<nombreMax <<" con " <<maxPoblacion <<" habitantes." <<endl;
    cout <<"El departamento con la menor poblacion es: " <<nombreMin <<" con " <<minPoblacion <<" habitantes." <<endl;
    return 0;
}



