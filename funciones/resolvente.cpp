#include <iostream>
#include "MAT.h"
#include "discriminante.h"
#include "raices.h"

using namespace std;


Raices resolvente(double x2, double x, double n){
    double x0, x1;
    Raices raices;
    double dis = discriminante(x2, x, n);
    if (dis >= 0) {
        x0 = (-x + raizCuadrada(dis)) / (2 * x2);
        x1 = (-x - raizCuadrada(dis)) / (2 * x2);
    } 
    else {
        x0 = 0;
        x1 = 0;
    }
    raices.x0 = x0;
    raices.x1 = x1;
    return raices;
}