/*
34) Si los números de un vector representan los coeficientes de un polinomio 
(de grado no mayor a 10), escribir un algoritmo que calcule la especialización 
de ese polinomio con un número que elige el usuario.
*/
#include <iostream>
#include <vector>
#include "vectores.h"
#include "../funciones/mat.h"
#include <string>
using namespace std;

double especializacionPolinomio(vector<int> polinomio, int x) {
    double resultado = 0;
    int grado = polinomio.size() - 1;
    for (int i = 0; i < polinomio.size(); i++) {
        resultado += polinomio[i] * potencia(x, grado);
        grado--;
    }
    return resultado;
}
void printPolinomio(vector<int> polinomio) {
    int grado = polinomio.size() - 1;
    string salida = "";
    for (int i = 0; i < polinomio.size(); i++) {
        if (polinomio[i] != 0) {
            salida += to_string(polinomio[i]) + "x^" + to_string(grado);
            if (i != polinomio.size() - 1) {
                salida += " + ";
            }
        }
        grado--;
    }
    cout << salida << endl;
}
int main() {
    vector<int> polinomio;
    int grado;
    int x;
    double coeficiente;
    cout << "Ingrese el grado del polinomio: " << endl;
    cin >> grado;
    do {
        cout << "Ingrese el coeficiente del grado " << grado << ": ";
        cin >> coeficiente;
        polinomio.push_back(coeficiente);
        grado--;
    } while (grado != 0);

    cout << "Ingrese el valor de x: ";
    cin >> x;
    printPolinomio(polinomio);
    int resultado = 0;
    cout << especializacionPolinomio(polinomio, x) << endl;

}