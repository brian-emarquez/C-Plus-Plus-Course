# include <iostream>

using namespace std;

# include "LibroCalificaciones.h";

int main() {
	LibroCalificaciones LibroCalificaciones1("CS101 Intradccion a la Programacion c++");
	LibroCalificaciones LibroCalificaciones2("CS102 EStructura de datos c++");

	cout << "LibroCalificaciones1 creado para el curso: " << LibroCalificaciones1.obtenerNombreCurso() << endl;
	cout << "LibroCalificaciones1 creado para el curso: " << LibroCalificaciones2.obtenerNombreCurso() << endl;
	return 0;
}