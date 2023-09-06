/*
29) Desarrollar una función que devuelva en un vector los números primos entre 2 y
200. Reutilizar lo que ya se escribió y probó.
Se debe usar un vector de tamañio fijo
*/

#include <iostream>
#include "../funciones/esPrimo.h"
#include <vector> 
#include "primosEntre.h"
#include "vectores.h"
using namespace std;



int main() {
    int min = 2, max = 200;

    vector<int> vec = primosEntre(min, max);

    printVector(vec);


}