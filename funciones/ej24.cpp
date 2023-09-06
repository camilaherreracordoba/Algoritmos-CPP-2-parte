/*
24) Hacer una función que, dado los coeficientes de un polinomio de segundo grado
(3 números reales), indique si tiene o no raíces reales, devolviendo un valor
booleano.
*/
#include <iostream>

using namespace std;
#include "MAT.h"
#include "discriminante.h"


bool tieneRaicesReales(double x2, double x, double n){
    double dis = discriminante(x2, x, n);

    return dis >= 0;
}

int main() {
    double x2 = 0, x = 0, n = 0;
    cout << "Ingrese los coeficientes del polinomio de segundo grado: ";
    cin >> x2 >> x >> n;
    
    bool tieneRaices = tieneRaicesReales(x2, x, n);

    if (tieneRaices) {
        cout <<"El polinomio " << x2 <<  ", " << x << ", " << n << " Tiene raices reales" << endl;
    } else {
        cout  <<"El polinomio " << x2 <<  ", " << x << ", " << n << " No tiene raices reales" << endl;
    }
}