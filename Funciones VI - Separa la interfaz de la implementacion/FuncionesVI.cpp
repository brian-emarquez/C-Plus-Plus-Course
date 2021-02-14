
# include <iostream>
# include "LibroCalificaciones.h";

using namespace std;
//inicializa el contructor nombreCurso con el objetivo de string suministrado como argumento
LibroCalificaciones::LibroCalificaciones(string nombre)
{
    establecerNombreCurso(nombre);
}
//funcion para establecer el nobre del curso
void LibroCalificaciones::establecerNombreCurso(string nombre)
{ 
    nombreCurso = nombre; //almacena el nombre del curso en el objeto
}
//funcion  para obtener el nombre del curso
string LibroCalificaciones::obtenerNombreCurso()
{
    return nombreCurso; // devuelve el nombreCruso del objeto
}
//muesra un mensaje de bienvenida al usurios de LibroCalificaciones
void LibroCalificaciones::mostrarMensaje()
{
    //llama a obtenerNombreCurso para obtener el nombre del curso
    cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso() << "!" << endl;
}