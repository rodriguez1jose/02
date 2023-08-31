// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 31/08/2023

// Fecha modificacion: 31/08/2023

// Numero de ejericio: 15

// Problema planteado: - Realizar un programa que defina un vector de 10 enteros, a continuación lo inicialice con
// valores aleatorios (del 1 al 10) y posteriormente muestre en pantalla cada elemento del vector junto con su cuadrado y su cubo.

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
int main() {
    // Define un vector de enteros con tama~no 10
    vector<int> numeros(10);
    // Inicia el vector con valores aleatorios entre 1 y 10
    for (int i = 0; i < 10; ++i) {
        numeros[i] = rand() % 10 + 1;
    }
    // Muestra cada elemento del vector junto con su cuadrado y cubo
    cout <<"Elemento  Cuadrado  Cubo" <<endl;
    for (int i = 0; i < 10; ++i) {
        int cuadrado = numeros[i] * numeros[i];
        int cubo = cuadrado * numeros[i];
        cout <<numeros[i] <<"\t"<<cuadrado <<"\t" <<cubo <<endl;
    }
    return 0;
}


