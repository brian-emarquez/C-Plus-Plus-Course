#pragma once

#include <string>

using namespace std;

class LibroCalificaciones
{
public:
    LibroCalificaciones(string);
    void establecerNombreCurso(string);
    string obtenerNombreCurso();
    void mostrarMensaje();

private:
    string nombreCurso;
};