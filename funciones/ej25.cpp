/*
25) Hacer una función que devuelva las raíces reales de un polinomio de segundo
grado y además indique si tiene o no raíces reales. Nota: utilizar la función
realizada en el ejercicio 39. Si no tuviera raíces reales, devolverá 0 en ambas.
*/
#include <iostream>
#include "MAT.h"
#include "discriminante.h"
#include "resolvente.h"
#include "raices.h"

using namespace std;


int main() {
    double x2, x, n;
    cout << "Ingrese los coeficientes del polinomio de segundo grado: ";
    cin >> x2 >> x >> n; 
    Raices raices = resolvente(x2, x, n);
    cout << "Las raices son: " << raices.x0 << ", " << raices.x1 << endl;
}