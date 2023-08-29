// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 27/08/2023

// Fecha modificaci�n: 27/08/2023

// N�mero de ejericio: 3

// Problema planteado: - Escribir un programa que genere un arreglo de 50 posiciones con n�meros al azar en el 
//rango de A - B y determine cu�ntos de estos elementos son n�meros primos. 

#include <iostream>
#include <cstdlib>
using namespace std;
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
    const int tam = 50;
    const int A = 1, B = 100;  // Rango de numeros aleatorios
    int arreglo[tam];

    for (int i = 0; i < tam; ++i) {
        arreglo[i] = rand() % (B - A + 1) + A;  // Genera un numero aleatorio entre A y B
    }
    int primos = 0;
    for (int i = 0; i < tam; ++i) {
        if (esPrimo(arreglo[i])) {
            primos++;
        }
    }
    cout <<"Cantidad de numeros primos en el arreglo: " <<primos <<endl;
    return 0;
}

