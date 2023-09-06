#include <iostream>
#include "../funciones/esPrimo.h"
#include <vector>
#include <String>
using namespace std;

vector<int> limpiarVector(vector<int> vec, int total){
    vector<int> vec2(total);
    int j = 0;
    for (int i = 0; i < vec.size(); i++) {
        
        if (vec[i] != 0) {
            vec2[j] = vec[i];
            j++;


        }
        
    }
    return vec2;
}
vector<int> primosEntre(int min, int max) {
    // generar un vector cuyo tamaño sea max - min
    vector<int> vec(max - min);
    int total = 0;
    // recorrer el vector y asignarle los valores
    for (int i = min; i < max; i++) {
        if (esPrimo(i)) {
            vec[i - min] = i;
            total++;
        }
    }
    // recorrer el vector y contar los valores que no sean 0
    vector<int> vec2(total);
    vec2 = limpiarVector(vec, total);
    
    return vec2;
}