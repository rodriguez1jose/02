// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 30/08/2023

// Fecha modificacion: 30/08/2023

// Numero de ejericio: 7

// Problema planteado: A partir de dos vectores constantes que contienen nombres de 7 personas cada uno. Escribir un programa que escriba 
// la palabra “Iguales” si ambos vectores son iguales y “Diferentes” si no lo son. Serán iguales cuando en la misma posición de ambos vectores se
// tenga el mismo valor para todos los elementos.

#include <iostream>
#include <string>

using namespace std;
bool sonIguales(const string vector1[], const string vector2[], int tam) {
    for (int i = 0; i < tam; ++i) {
        if (vector1[i] != vector2[i]) {
            return false;
        }
    }
    return true;
}
int main() {
    const int tam = 7;  // Tama~no de los vectores
    const string nombres1[tam] = {"Anita", "Nacho", "Paolo", "Luis", "Fer", "Adri", "Sebas"};
    const string nombres2[tam] = {"Anita", "Nacho", "Paolo", "Luis", "Fer", "Adri", "Sebas"};
    if (sonIguales(nombres1, nombres2, tam)) {
        cout <<"Iguales" <<endl;
    } else {
        cout <<"Diferentes" <<endl;
    }
    return 0;
}


