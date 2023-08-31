// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 30/08/2023

// Fecha modificacion: 30/08/2023

// Numero de ejericio: 5

// Problema planteado: Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a
// 240), determinar la mayor estatura, la estatura más baja y el promedio de estaturas

#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
    const int N = 10; 
    int estaturas[N];  // Arreglo para almacenar las estaturas
    double sumaEstaturas = 0;
    int mayorEstatura = 0;
    int menorEstatura = 240;

    // Llena el arreglo con estaturas aleatorias entre 50 y 240 cm
    for (int i = 0; i < N; ++i) {
        estaturas[i] = rand() % 191 + 50;
        sumaEstaturas += estaturas[i];
        if (estaturas[i] > mayorEstatura) {
            mayorEstatura = estaturas[i];
        }
        if (estaturas[i] < menorEstatura) {
            menorEstatura = estaturas[i];
        }
    }

    double promedio = sumaEstaturas / N;

    cout <<"Estaturas generadas: ";
    for (int i = 0; i < N; ++i) {
        cout <<estaturas[i] << " ";
    }
    cout <<endl;
    cout <<"Mayor estatura: " <<mayorEstatura <<" cm" <<endl;
    cout <<"Estatura mas baja: " <<menorEstatura << " cm" <<endl;
    cout <<"Promedio de estaturas: " <<promedio <<" cm" <<endl;
    return 0;
}

