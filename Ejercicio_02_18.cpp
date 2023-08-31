// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 31/08/2023

// Fecha modificacion: 31/08/2023

// Numero de ejericio: 18

// Problema planteado: Programa que declare un vector de diez elementos enteros y pida números para rellenarlo
// hasta que se llene el vector o se introduzca un número negativo. Entonces se debe imprimir el vector (sólo los elementos introducidos).

#include <iostream>
using namespace std;

int main() {
    int vector[10];
    int numero;
    int indice = 0;
    cout <<"Ingrese numeros enteros positivos para llenar el vector (maximo 10).\n";
    cout <<"Para terminar, ingrese un numero negativo.\n";
    do {
        cin>> numero;
        // Valida que el numero sea positivo
        if (numero >= 0) {
            // Almacena el numero en el vector si hay espacio disponible
            if (indice < 10) {
                vector[indice] = numero;
                indice++;
            } else {
                cout << "El vector esta lleno. No se puede ingresar mas numeros.\n";
                break; 
            }
        }
    } while (numero >= 0); // Se repite mientras el numero sea positivo
    cout << "El vector es:\n";
    for (int i = 0; i < indice; i++) {
        cout <<vector[i] <<" ";
    }
    cout <<"\n";
    return 0;
}

