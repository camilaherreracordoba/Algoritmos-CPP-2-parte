#include <iostream>
#include <vector>

using namespace std;

double productoEscalar(vector<int> vec1, vector<int> vec2){
    if (vec1.size() != vec2.size())
    {
        throw "Error: Los vectores tienen longitudes distintas";
    }
    double res = 0;

    for (int i = 0; i < vec1.size(); i++) {
        res += vec1[i] * vec2[i];
    }

    return res;
}
