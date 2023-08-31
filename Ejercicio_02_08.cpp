// Materia: Programación I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 30/08/2023

// Fecha modificacion: 30/08/2023

// Numero de ejericio: 8

// Problema planteado: Se tiene el arreglo Ventas: 0 1 2 10 11 vene vfeb vmar . . vnov vdic
// Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que contiene los nombres de los meses:
// Meses: 0 1 2 10 11 “Ene” “Feb” “Mar” . . “Nov” “Dic” Escriba un programa que obtenga:¿En qué mes(es) se dieron las ventas máximas de la empresa?
// ¿A cuánto ascendieron las ventas máximas? ¿Cuál fue el total de las ventas? Las ventas deben ser ingresadas por teclado.

#include <iostream>
#include <string>

using namespace std;
int main() {
    const int numMeses = 12;
    int ventas[numMeses];  // Arreglo para almacenar las ventas mensuales
    string nombresMeses[numMeses] = {"Ene", "Feb", "Mar", "Abr", "May", "Jun", "Jul", "Ago", "Sep", "Oct", "Nov", "Dic"};
    int mesMaxVentas = 0;
    int ventasMax = 0;
    int totalVentas = 0;

    //Es para ingresar las ventas mensuales
    for (int i = 0; i < numMeses; ++i) {
        cout <<"Ingrese las ventas para " <<nombresMeses[i] << ": ";
        cin>> ventas[i];
        totalVentas = totalVentas + ventas[i];
        if (ventas[i] > ventasMax) {
            ventasMax = ventas[i];
            mesMaxVentas = i;
        }
    }
    cout << "Meses con ventas máximas: ";
    for (int i = 0; i < numMeses; ++i) {
        if (ventas[i] == ventasMax) {
            cout <<nombresMeses[i] << " ";
        }
    }
    cout <<endl;
    cout <<"Ventas maximas: " <<ventasMax <<endl;
    cout <<"Total de ventas: " <<totalVentas <<endl;
    return 0;
}
	

