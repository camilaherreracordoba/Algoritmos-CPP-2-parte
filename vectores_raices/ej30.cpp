/*
30) Dados dos vectores A y B, de N elementos cada uno, se desean calcular:
a. El vector suma.
b. El producto escalar.
*/
#include <iostream>
#include <vector> 
#include <stdexcept>

#include "primosEntre.h"
#include "vectorSuma.h"
#include "productoEscalar.h"
#include "vectores.h"
/*
primosEntre.cpp vectorSuma.cpp productoEscalar.cpp vectores.cpp
*/
using namespace std;
void ejercicio_30() {
    vector<int> vector1;
    vector<int> vector2;
    int cantidad;
    cout << "Ingrese la cantidad de elementos de los vectores: ";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++) {
        int valor;
        cout << "Ingrese el valor del vector 1: ";
        cin >> valor;
        vector1.push_back(valor);
    }
    for (int j = 0; j < cantidad; j++) {
        int valor;
        cout << "Ingrese el valor del vector 2: ";
        cin >> valor;
        vector2.push_back(valor);
    }
    cout << "Vector 1: " << endl;
    printVector(vector1);
    cout << "Vector 2: " << endl;
    printVector(vector2);
    try
    {
        vector<int> vector3 = vectorSuma(vector1, vector2);
        cout << "Vector suma: " << endl;
        printVector(vector3);
    }
    catch(const char* msg)
    {
        cerr << msg << endl;
    }
    try
    {
        double escalar = productoEscalar(vector1, vector2);
        cout << "Producto escalar: " << escalar << endl;
    }
    catch(const char* msg)
    {
        cerr << msg << endl;
    }
}
int main() {
    ejercicio_30();
    
    return 0;
}