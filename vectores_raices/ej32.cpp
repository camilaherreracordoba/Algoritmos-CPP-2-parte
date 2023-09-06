/*
32) Se carga un vector X de N elementos enteros. Escribir un algoritmo que devuelva 
un vector que tenga todos los elementos de X, pero sin elementos repetidos.
*/


#include <iostream>
#include <vector>
#include "vectores.h"
#include "quitarRepetidos.h"
using namespace std;



int main() {
    vector<int> vec = {1, 2, 1, 4, 5, 1, 7, 5, 9, 1, 1, 5, 9, 7, 2 , 4};

    vector<int> salida = quitarRepetidos(vec);
    printVector(vec);
    printVector(salida);
}
