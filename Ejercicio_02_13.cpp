// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 31/08/2023

// Fecha modificacion: 31/08/2023

// Numero de ejericio: 13

// Problema planteado: Almacenar en un arreglo los n primeros números primos.

#include <iostream>
#include <vector>
using namespace std;

// Verifica si es un numero es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout <<"Ingrese la cantidad de numeros primos a almacenar: ";
    cin>> n;

    const int maxPrimos = 10000;  // Suponemos un maximo de 10000 primos para prever el tama~no del arreglo
    int numerosPrimos[maxPrimos]; // Arreglo para almacenar los numeros primos
    int num = 2;
    int cantidad = 0; // Contador de primos almacenados

    // Genera y almacena los numeros primos en el arreglo
    while (cantidad < n && num < maxPrimos) {
        if (esPrimo(num)) {
            numerosPrimos[cantidad] = num;
            ++cantidad;
        }
        ++num;
    }
    // muestra los numeros primos almacenados
    cout <<"Los " <<n <<" primeros numeros primos son: ";
    for (int i = 0; i < n; ++i) {
        cout <<numerosPrimos[i] << " ";
    }
    cout <<endl;
    return 0;
}

