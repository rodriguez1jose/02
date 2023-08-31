// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 30/08/2023

// Fecha modificacion: 31/08/2023

// Numero de ejericio: 9

// Problema planteado: Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro arreglo contiene los nombres 
// de los mismos y un tercer arreglo contiene la sigla de la carrera. Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el
// nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un desempeño mayor con relación al promedio del curso.

#include <iostream>
#include <string>

using namespace std;
const int numEstudiantes = 5;
int main() {
    string nombres[numEstudiantes] = {"Anita", "Nacho", "Yadi", "Paolo", "Luis"};
    string carreras[numEstudiantes] = {"INB", "Inb", "IBB", "IMT", "INC"};
    double calificaciones[numEstudiantes] = {85.5, 73.2, 92.0, 65.8, 78.9};
    double sumaCalificaciones = 0;
    double promedio;
    double maxCalificacion = -1;
    double minCalificacion = 101;
    string nombreMax;
    string nombreMin;
    
    for (int i = 0; i < numEstudiantes; ++i) {
        sumaCalificaciones += calificaciones[i];
        if (calificaciones[i] > maxCalificacion) {
            maxCalificacion = calificaciones[i];
            nombreMax = nombres[i];
        }
        if (calificaciones[i] < minCalificacion) {
            minCalificacion = calificaciones[i];
            nombreMin = nombres[i];
        }
    }
    promedio = sumaCalificaciones / numEstudiantes;
    cout <<"El estudiante con la mayor calificacion es: " <<nombreMax <<" con " <<maxCalificacion <<" puntos." <<endl;
    cout <<"El estudiante con la menor calificacin es: " <<nombreMin <<" con " <<minCalificacion <<" puntos." <<endl;

    // Verifica la carrera con mejor desempe~no en relacion al promedio del curso
    string mejorCarrera;
    double mejorPromedioCarrera = 0;
    for (int i = 0; i < numEstudiantes; ++i) {
        double sumaCalificacionesCarrera = 0;
        int numEstudiantesCarrera = 0;
        for (int j = 0; j < numEstudiantes; ++j) {
            if (carreras[j] == carreras[i]) {
                sumaCalificacionesCarrera += calificaciones[j];
                ++numEstudiantesCarrera;
            }
        }
        double promedioCarrera = sumaCalificacionesCarrera / numEstudiantesCarrera;
        if (promedioCarrera > mejorPromedioCarrera) {
            mejorPromedioCarrera = promedioCarrera;
            mejorCarrera = carreras[i];
        }
    }
    cout <<"La carrera con mejor desempe~no en relacion al promedio del curso es: " <<mejorCarrera <<endl;
    return 0;
}




