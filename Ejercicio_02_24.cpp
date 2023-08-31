// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 31/08/2023

// Fecha modificacion: 31/08/2023

// Numero de ejericio: 24

// Problema planteado: Leer una cadena en mayúsculas y cámbielas en minúscula.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena;
    cout <<"Ingrese una cadena en mayusculas: ";
    cin>> cadena;
    // Convierte la cadena a minusculas
    for (char &c : cadena) {
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        }
    }
    cout <<"Cadena en minusculas: " <<cadena <<endl;
    return 0;
}

