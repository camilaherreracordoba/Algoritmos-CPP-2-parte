#include <iostream>

using namespace std;

bool esPrimo(int numero){
    int resultado = 0;
    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){
            resultado++;
        }
    }
    return resultado == 2;
}
