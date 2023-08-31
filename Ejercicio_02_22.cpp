// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 31/08/2023

// Fecha modificacion: 31/08/2023

// Numero de ejericio: 22

// Problema planteado: Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout <<"Ingrese la dimension de los vectores: ";
    cin>> N;
    vector<int> vector1(N);
    vector<int> vector2(N);
    vector<int> resultado(N);
    cout <<"Ingrese los elementos del primer vector:" <<endl;
    for (int i = 0; i < N; ++i) {
        cin>> vector1[i];
    }
    cout << "Ingrese los elementos del segundo vector:" <<endl;
    for (int i = 0; i < N; ++i) {
        cin>> vector2[i];
    }
    // Multiplica los vectores y lo almacena en el vector resultado
    for (int i = 0; i < N; ++i) {
        resultado[i] = vector1[i] * vector2[i];
    }
    cout <<"Resultado de la multiplicacion:" <<endl;
    for (int i = 0; i < N; ++i) {
        cout <<resultado[i] << " ";
    }
    cout <<endl;
    return 0;
}

