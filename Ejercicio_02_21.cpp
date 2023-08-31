// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 31/08/2023

// Fecha modificacion: 31/08/2023

// Numero de ejericio: 21

// Problema planteado: Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada uno, pida valores para 
// ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.

#include <iostream>
using namespace std;

int main() {
    int vector1[5];
    int vector2[5];
    int vector3[5];

    cout <<"Ingrese los valores para el primer vector:\n";
    for (int i = 0; i < 5; i++) {
        cin>> vector1[i];
    }
    cout << "Ingrese los valores para el segundo vector:\n";
    for (int i = 0; i < 5; i++) {
        cin>> vector2[i];
    }
    // Calcula la suma de los dos vectores y la guarda en el tercer vector
    for (int i = 0; i < 5; i++) {
        vector3[i] = vector1[i] + vector2[i];
    }
    cout << "La suma de los dos vectores es:\n";
    for (int i = 0; i < 5; i++) {
        cout <<vector3[i] <<" ";
    }
    cout <<"\n";
    return 0;
}

