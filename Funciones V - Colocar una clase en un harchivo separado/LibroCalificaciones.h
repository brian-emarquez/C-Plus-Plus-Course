#pragma once

using namespace std;
class LibroCalificaciones
{
public:
	// el contructor iniializa a nombrecurso con la cadena que se suministr com argumento
	LibroCalificaciones(string nombre) {

		establecerNombreCurso(nombre);
	}
	//funcion para establecer el nombre deel curso
	void establecerNombreCurso(string nombre) {

		nombreCurso = nombre;
	}
	// funcion para obtener el nombre del curso
	string obtenerNombreCurso() {

		return nombreCurso;
	}
	void mostrarMensaje() {

		cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso() << "!" << endl;
	}
private:
	string nombreCurso;
};