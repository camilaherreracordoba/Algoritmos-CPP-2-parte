/*
27) Hacer una función que indique si un número es primo o no
*/
#include <iostream>
#include "esPrimo.h"
using namespace std;

int main() {
    int numero = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    int resultado = esPrimo(numero);

     if (resultado) {
        cout <<"El numero " << numero << " es primo" << endl;
    } else {
        cout  <<"El numero " << numero << " no es primo" << endl;
    }
}