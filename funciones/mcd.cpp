#include <iostream>

using namespace std;
// máximo común divisor
int mcd(int a, int b){
    int r;
    
    while (b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
