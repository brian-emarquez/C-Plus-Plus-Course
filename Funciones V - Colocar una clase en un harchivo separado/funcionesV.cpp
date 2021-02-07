/****************************************************************************/
/*Funciones V* Headers*/
/****************************************************************************/

# include <iostream>
# include <conio.h>

# include "LibroCalificaciones.h"
using namespace std;

int main() {

	LibroCalificaciones librocalificaciones1("001 - Introduccion a la programacion c++");
	LibroCalificaciones libroCalificaciones2("002 - Estructura de Datos c++ ");

	cout << "libroCalificaciones1 se creo para el curso: " << librocalificaciones1.obtenerNombreCurso() << endl;
	cout << "libroCalificaciones2 se creo para el curso: " << libroCalificaciones2.obtenerNombreCurso() << endl;
	_getch();
	return 0;
}
