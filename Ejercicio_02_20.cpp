// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 31/08/2023

// Fecha modificacion: 31/08/2023

// Numero de ejericio: 20

// Problema planteado: Crea un programa que pida un número al usuario un número de mes (por ejemplo, el 4) y diga cuántos días tiene (por ejemplo, 30) 
// y el nombre del mes. Debes usar un vector. Para simplificarlo vamos a suponer que febrero tiene 28 días.

#include <iostream>
using namespace std;

int main() {
    int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string nombres[12] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
    // Declara una variable para almacenar el numero de mes ingresado
    int mes;
    cout <<"Ingrese un numero de mes entre 1 y 12:\n";
    cin>> mes;
    if (mes < 1 || mes > 12) {
        cout << "Numero de mes invalido.\n";
        return -1;
    }
    cout <<"El mes numero " <<mes <<" tiene " <<dias[mes - 1] <<" dias y se llama " <<nombres[mes - 1] <<".\n";
    return 0;
}

