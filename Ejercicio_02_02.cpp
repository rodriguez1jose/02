// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 27/08/2023

// Fecha modificación: 27/08/2023

// Número de ejericio: 2

// Problema planteado: Escribir un programa que a partir de un arreglo constante de 10 elementos enteros, 
//determine el porcentaje de números pares positivos e impares negativos.

#include <iostream>
using namespace std;

int main() {
    const int tam = 10;
    int arreglo[tam] = {5, -8, 12, -3, 7, 0, -6, 9, -2, 4};
    int paresPositivos = 0, imparesNegativos = 0;

    for (int i = 0; i < tam; ++i) {
        if (arreglo[i] % 2 == 0 && arreglo[i] > 0) {
            paresPositivos++;
        } else if (arreglo[i] % 2 != 0 && arreglo[i] < 0) {
            imparesNegativos++;
        }
    }
    double porcentajeParesPositivos = (paresPositivos * 100.0) / tam;
    double porcentajeImparesNegativos = (imparesNegativos * 100.0) / tam;
    cout <<"Porcentaje de numeros pares positivos: " <<porcentajeParesPositivos <<"%" <<endl;
    cout <<"Porcentaje de numeros impares negativos: " <<porcentajeImparesNegativos <<"%" <<endl;
    return 0;
}

