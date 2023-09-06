#include <iostream>
#include <vector>

using namespace std;

vector<int> vectorSuma(vector<int> vec1, vector<int> vec2){
    if (vec1.size() != vec2.size())
    {
        throw "Error: Los vectores tienen longitudes distintas";
    }
    vector<int> vecSuma(vec1.size());
    int res;
    for (int i = 0; i < vec1.size(); i++) {
        vecSuma[i] = vec1[i] + vec2[i];

    }

    return vecSuma;
}
