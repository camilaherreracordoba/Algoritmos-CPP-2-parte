/*
26) Hacer un programa principal en donde se pida al usuario ingresar los coeficientes
de la cuadrática, e indicar si tiene o no raíces, y cuáles son en caso de tener,
utilizando la función definida.
*/
#include <iostream>
#include "MAT.h"
#include "discriminante.h"
#include "resolvente.h"
#include "raices.h"

using namespace std;

void funcionPrincipal() {
    double x2, x, n;
    cout << "Ingrese los coeficientes del polinomio de segundo grado: ";
    cin >> x2 >> x >> n;
    double dis = discriminante(x2, x, n);
    if (dis >= 0) {
        Raices raices = resolvente(x2, x, n);
        cout << "El polinomio " << x2 << ", " << x << ", " << n << " tiene raices reales" << endl;
        cout << "Las raices son: " << raices.x0 << ", " << raices.x1 << endl;
    } else {
        cout << "El polinomio " << x2 << ", " << x << ", " << n << " no tiene raices reales" << endl;
    }
}

int main(){
    funcionPrincipal();
}