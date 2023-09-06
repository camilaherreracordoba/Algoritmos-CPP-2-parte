#include "MAT.h"
#include <iostream>

using namespace std;

double potencia(double base, int exponente){
    double resultado = 1;
    for(int i = 0; i < exponente; i++){
        resultado *= base;
    }
    return resultado;
}

int raizCuadrada(int numero){
    int resultado = 0;
    while (potencia(resultado, 2) < numero){
        resultado++;
    }
    return resultado;
}

double absoluto(double numero){
    if (numero < 0){
        return -numero;
    }
    else {
        return numero;
    }
}