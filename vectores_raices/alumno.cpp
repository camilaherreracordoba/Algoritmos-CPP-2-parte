#include <iostream>
#include <vector>
#include "alumno.h"

using namespace std;

void printAlumno(Alumno alum) {
    cout << "Padron: " << alum.padron << ", nota: " << alum.nota << endl;
}

double alumnosPromedio(vector<Alumno> alumnos) {
    double res = 0;
    for (int i = 0; i < alumnos.size(); i++) {
        res += alumnos[i].nota;
    }
    return res / alumnos.size();
}

double porcentajeNota(vector<Alumno> alum, double nota) {
    double res = 0;
    for (int i = 0; i < alum.size(); i++) {
        if (alum[i].nota == nota) {
            res++;
        }
    }
    return (res * 100) / alum.size();
}