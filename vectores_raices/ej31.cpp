/*
31) Por cada alumno que rindió un examen de inglés se lee el número de padrón, y la
nota obtenida. Se desea saber la cantidad de alumnos que rindieron el examen y el
porcentaje de alumnos que obtuvieron cada nota
*/
#include <iostream>
#include <vector> 
#include <stdexcept>

#include "primosEntre.h"
#include "vectorSuma.h"
#include "productoEscalar.h"
#include "alumno.h"

using namespace std;


void imprimirPorcentajesNotas(const vector<Alumno>& alumnos) {
    for (int nota = 0; nota <= 10; nota++) {
        double porcentaje = porcentajeNota(alumnos, static_cast<double>(nota));
        cout << "Porcentaje de nota " << nota << ": "  << porcentaje << "%" << endl;
    }
}
int main() {
    vector<Alumno> alumnos;
    int cantidadAlumnos;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidadAlumnos;
    for (int i = 0; i < cantidadAlumnos; i++) {
        Alumno alum;
        cout << "Ingrese el padron: ";
        cin >> alum.padron;
        cout << "Ingrese la nota: ";
        cin >> alum.nota;
        alumnos.push_back(alum);
    }

    double promedio = alumnosPromedio(alumnos);
    cout << "Promedio: " << promedio << endl;

    cout << "Cantidad de alumnos: " << alumnos.size() << endl;


    imprimirPorcentajesNotas(alumnos);
}