// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creación: 28/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 4

// Problema planteado: Un arreglo contiene las edades de un grupo de 50 personas con números al azar, determine: el porcentaje de mayores (>=18 años) 
//y menores de edad (<18 años). Las edades al azar deben ser generadas a partir de 1 a 110 años.
#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
    const int tam = 50;
    int edades[tam];
    //arreglo con edades aleatorias entre 1 y 110 años
    for (int i = 0; i < tam; ++i) {
        edades[i] = rand() % 110 + 1;
    }
    int mayores = 0;
    int menores = 0;
    // Cuenta cuantos son mayores o menores de edad
    for (int i = 0; i < tam; ++i) {
        if (edades[i] >= 18) {
            mayores++;
        } else {
            menores++;
        }
    }
    double porcentajeMayores = (double(mayores) / tam) * 100;
    double porcentajeMenores = (double(menores) / tam) * 100;
    
    cout << "Edades al azar generadas: ";
    for (int i = 0; i < tam; ++i) {
        cout <<edades[i] <<" ";
    }
    cout <<endl;
    cout <<"Porcentaje de mayores de edad: " <<porcentajeMayores <<"%" <<endl;
    cout << "Porcentaje de menores de edad: " << porcentajeMenores << "%" << endl;

    return 0;
}

