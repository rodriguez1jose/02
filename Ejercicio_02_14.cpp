// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 31/08/2023

// Fecha modificacion: 31/08/2023

// Numero de ejericio: 14

// Problema planteado: Un arreglo contiene números al azar entre N y M, crear un segundo arreglo que contenga los números capicúa contenidos en el primero.
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

// Funcion para verificar si un numero es capicua
bool esCapicua(int num) {
    int original = num;
    int invertido = 0;
    while (num > 0) {
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }
    return original == invertido;
}
int main() {
    int n;
    cout << "Ingrese la cantidad de numeros a generar al azar: ";
    cin >> n;
    // Crea un vector para almacenar los numeros generados al azar
    vector<int> numerosAzar(n);
    // Genera y alamcena numeros al azar en el vector numerosAzar
    for (int i = 0; i < n; ++i) {
        numerosAzar[i] = rand() % 1000 + 100;
    }
    // Cuenta la cantidad maxima de numeros capicua en el arreglo numerosAzar
    int maxCantidadCapicua = 0;
    for (int i = 0; i < n; ++i) {
        if (esCapicua(numerosAzar[i])) {
            maxCantidadCapicua++;
        }
    }
    // Crea un vactor para almacenar un los numeros capicua
    vector<int> numerosCapicua(maxCantidadCapicua);
    // almacena los numeros capicua en el vector numerosCapicua
    int cantidadCapicua = 0;
    for (int i = 0; i < n; ++i) {
        if (esCapicua(numerosAzar[i])) {
            numerosCapicua[cantidadCapicua] = numerosAzar[i];
            cantidadCapicua++;
        }
    }
    // muetsra los numeris capicua en el arreglo numerosCapicua
    cout << "Numeros capicua en el arreglo: ";
    for (int i = 0; i < cantidadCapicua; ++i) {
        cout <<numerosCapicua[i] <<" ";
    }
    cout <<endl;
    return 0;
}

