/*
33) Se leen dos vectores A y B, de N y M elementos respectivamente. Construir un
algoritmo que halle los vectores unión e intersección de A y B. Previamente habrá
que ordenarlos.
*/

#include <iostream>
#include <vector>
#include "vectores.h"
#include "quitarRepetidos.h"
#include "interseccionEntreVectores.h"

using namespace std;


int main(){
    vector<int> vec1 = {1, 2, 4, 5, 7, 9, 1, 9, 7};
    vector<int> vec2 = {2, 11, 0, 78, 4, 9, 1, 9, 7, 1, 7, 23};
    printVector(vec1);
    printVector(vec2);

    printVector(interseccionEntreVectores(vec1, vec2));
}