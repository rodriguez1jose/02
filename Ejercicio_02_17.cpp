// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 31/08/2023

// Fecha modificacion: 31/08/2023

// Numero de ejericio: 17

// Problema planteado: Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno(comprendidas entre 0 y 100). 
// A continuación, debe mostrar todas las notas, la nota media, la nota más alta que ha sacado y la menor

#include <iostream>
using namespace std;

int main() {

    double notas[5];
    // Declara variables para la nota media, la nota mas alta y la nota mas baja
    double media = 0, maxima = 0, minima = 100;
    cout << "Ingrese las 5 notas del alumno (entre 0 y 100):\n";
    for (int i = 0; i < 5; i++) {
        cin >> notas[i];
        // Valida que la nota este dentro de los rangos validos
        if (notas[i] < 0 || notas[i] > 100) {
            cout << "Nota invalida. Ingrese otra nota.\n";
            i--; 
            continue; // Saltar a la siguiente repeticion
        }
        // Acumula la suma de las notas para calcular la media
        media += notas[i];
        // Actualiza la nota mas alta y la nota mas baja si corresponde
        if (notas[i] > maxima) {
            maxima = notas[i];
        }
        if (notas[i] < minima) {
            minima = notas[i];
        }
    }
    // Calcula la media dividiendo la suma entre el numero de notas
    media = media / 5;
    // Mostrar todas las notas, la media, la maxima y la minima
    cout << "Las notas del alumno son:\n";
    for (int i = 0; i < 5; i++) {
        cout << notas[i] << " ";
    }
    cout <<"La nota media es: " <<media <<"\n";
    cout <<"La nota mas alta es: " <<maxima <<"\n";
    cout <<"La nota mas baja es: " <<minima <<"\n";
    return 0;
}



