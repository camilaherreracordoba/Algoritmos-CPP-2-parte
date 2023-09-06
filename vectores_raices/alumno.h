#ifndef ALUMNO_H
#define ALUMNO

#include <string>

using namespace std;

struct Alumno {
    int padron;
    double nota;
};

void printAlumno(Alumno alum);
double alumnosPromedio(vector<Alumno> alumnos);
double porcentajeNota(vector<Alumno> alum, double nota);
#endif // ALUMNO_H