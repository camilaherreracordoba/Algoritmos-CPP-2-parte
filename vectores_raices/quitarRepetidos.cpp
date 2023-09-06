#include <iostream>
#include <vector>
#include "vectores.h"

using namespace std;

vector<int> quitarRepetidos(vector<int> vec) {
    vector<int> salida;

    for (int i = 0; i < vec.size(); i++) {
        bool esta = false;
        for (int j = 0; j < salida.size(); j++) {
            if (vec[i] == salida[j]) {
                esta = true;
            }
        }
        if (!esta) {
            salida.push_back(vec[i]);
        }
    }
    return salida;
}