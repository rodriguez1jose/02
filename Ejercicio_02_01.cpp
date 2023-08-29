// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 27/08/2023

// Fecha modificaci�n: 27/08/2023

// N�mero de ejericio: 1

// Problema planteado: Almacenar un vector de tama�o N, con n�meros al azar entre A y B, e imprima la suma de 
//los componentes de �ndice par y la resta de los componentes de �ndice impar.

#include <iostream>
#include <cstdlib>  // Necesario para la funci�n rand()
using namespace std;

int main() {
    srand(42);  // Generador de numeros aleatorios
    int N, A, B;
    cout << "Ingrese el tama~no del vector (N): ";
    cin >> N;
    cout << "Ingrese el valor de A: ";
    cin >> A;
    cout << "Ingrese el valor de B: ";
    cin >> B;
    int vector[N];
    for (int i = 0; i < N; ++i) {
        vector[i] = rand() % (B - A + 1) + A;  // Genera un numero aleatorio entre A y B
    }

    int sumaPares = 0, restaImpares = 0;
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
            sumaPares = sumaPares + vector[i];
        } else {
            restaImpares = restaImpares - vector[i];
        }
    }
    cout <<"Suma de componentes de indice par: " <<sumaPares <<endl;
    cout <<"Resta de componentes de indice impar: " <<restaImpares <<endl;
    return 0;
}

