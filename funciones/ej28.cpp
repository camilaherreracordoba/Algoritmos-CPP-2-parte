/*
28) Escribir una función que devuelva el máximo común divisor y el mínimo común
múltiplo entre dos enteros. Nota: cuidado al modularizar (recordar que una
función solo tiene que realizar una tarea)
*/

#include <iostream>
#include "mcd.h"
#include "mcm.h"

using namespace std;

void mcd_mcm(int a, int b, int &mcd, int &mcm){
    mcd = ::mcd(a, b);
    mcm = ::mcm(a, b);
}

int main() {
    int a = 0, b = 0;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    
    int mcd = 0, mcm = 0;
    mcd_mcm(a, b, mcd, mcm);
    
    cout << "El mcd es: " << mcd << endl;
    cout << "El mcm es: " << mcm << endl;
    
    return 0;
}
