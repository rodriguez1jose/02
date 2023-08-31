// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 31/08/2023

// Fecha modificacion: 31/08/2023

// Numero de ejericio: 12

// Problema planteado: Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y otro contiene los nombres de estos 
// minerales, para obtener: Buscar por nombre de mineral y desplegar la producción. Ordenar del mayor al menor (producción) y mostrar:
// Mineral Produccion ™ SN 998.000 SB 876.500 AU 786.670 PT 636.143 AG 135.567 CU 109.412
#include <iostream>
#include <string>

using namespace std;

const int numMinerales = 6;

int main() {
    // Arreglo de constantes para almacenar nombres de minerales y produccion
    const string minerales[numMinerales] = {"SN", "SB", "AU", "PT", "AG", "CU"};
    const double produccion[numMinerales] = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};

    // Busca por nombre de mineral
    string buscarMineral;
    cout << "Ingrese el nombre del mineral a buscar: ";
    cin >> buscarMineral;
    bool encontrado = false;
    for (int i = 0; i < numMinerales; ++i) {
        if (minerales[i] == buscarMineral) {
            cout <<"Produccion de " <<buscarMineral <<": " <<produccion[i] <<" toneladas metricas" <<endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout <<"Mineral no encontrado." <<endl;
    }
    
    // Ordena del mayor al menor de la produccion
    cout << "\nMineral Produccion" << endl;
    // Ordena por selección
    for (int i = 0; i < numMinerales - 1; ++i) {
        int maxIndex = i;
        for (int j = i + 1; j < numMinerales; ++j) {
            if (produccion[j] > produccion[maxIndex]) {
                maxIndex = j;
            }
        }
        // Intercambia minerales y producciones
        string tempMineral = minerales[i];
        double tempProduccion = produccion[i];
        string minerales[i] = minerales[maxIndex];
        string produccion[i] = produccion[maxIndex];
        minerales[maxIndex] = tempMineral;
        produccion[maxIndex] = tempProduccion;
    }
    // Muestra los minerales ordenados
    for (int i = 0; i < numMinerales; ++i) {
        cout <<minerales[i] <<" " <<produccion[i] <<endl;
    }
    return 0;
}

