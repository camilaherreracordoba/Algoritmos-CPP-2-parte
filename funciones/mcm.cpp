#include <iostream>
#include "MAT.h"
#include "mcd.h"

using namespace std;
// mínimo común múltiplo
int mcm(int a, int b){
    return absoluto(a * b) / mcd(a, b);
}
