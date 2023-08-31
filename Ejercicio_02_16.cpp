// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 31/08/2023

// Fecha modificacion: 31/08/2023

// Numero de ejericio: 16

// Problema planteado: Crear un vector de 5 elementos de cadenas de caracteres, inicializa el vector con datos leídos por el teclado. 
// Copia los elementos del vector en otro vector pero en orden inverso, y muéstralo por la pantalla

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    const int numElementos = 5; // Cantidad de elementos en el vector
    // Crea un vector para almacenar cadenas de caracteres
    vector<string> vectorOriginal(numElementos);
    // Inicializa el vector con datos leidos por el teclado
    cout <<"Ingrese " <<numElementos <<" cadenas de caracteres:" <<endl;
    for (int i = 0; i < numElementos; ++i) {
        cin>> vectorOriginal[i];
    }
    // Crea un segundo vector para almacenar las cadenas en orden inverso
    vector<string> vectorInverso(numElementos);
    // Copia los elementos del vector original al vector inverso en orden inverso
    for (int i = 0; i < numElementos; ++i) {
        vectorInverso[numElementos - 1 - i] = vectorOriginal[i];
    }
    // Muestra el vector inverso por pantalla
    cout <<"Vector en orden inverso:" <<endl;
    for (int i = 0; i < numElementos; ++i) {
        cout <<vectorInverso[i] <<" ";
    }
    cout <<endl;
    return 0;
}

