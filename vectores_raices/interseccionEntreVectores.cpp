#include <iostream>
#include <vector>
#include "vectores.h"
#include "quitarRepetidos.h"

using namespace std;

// ------------------
double max(double a, double b){
    if (a > b) {
        return a;
    }
    return b;
}

bool estaEnVector(vector<int> vec, int num){
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == num) {
            return true;
        }
    }
    return false;
}
// ------------------

vector<int> interseccionEntreVectores(vector<int> vec1, vector<int> vec2){
    vec1 = quitarRepetidos(ordenarVector(vec1));
    vec2 = quitarRepetidos(ordenarVector(vec2));
    int largo = max(vec1.size(), vec2.size());
    int contador = 0;
    for (int i = 0; i < vec1.size(); i++) {
        if (estaEnVector(vec2, vec1[i])) {
            contador++;
        }
    }
    vector<int> vec3(contador);
    int j = 0;
    for (int i = 0; i < vec1.size(); i++) {
        if (estaEnVector(vec2, vec1[i])) {
            vec3[j] = vec1[i];
            j++;
        }
    }
    vec3 = ordenarVector(vec3);

    return vec3;
}