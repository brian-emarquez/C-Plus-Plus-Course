/*###########################################################################*/
/*Define la clase LibroCalificaciones con una funcionmienbro que recebe un parametro*/
/*crea un objeto libroCAlificaciones y llama a su funcion mostrarMnesaje*/
/*###########################################################################*/


#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::getline;

#include <conio.h>

// definicion de las clases LibroCalificaciones
class LibroCalificaciones
{
public:
	void mostrarMensajes( string nombreCurso )
	{
		cout << "Bienvenido al libro de bienvenida para el usuario de libroCalificaciones " << nombreCurso << endl;
	}
};

int main()
{
	string nombreDelCurso;
	LibroCalificaciones miLibroCalificaciones;

	cout << "Escriba el nombre del curso: " << endl;
	getline(std::cin, nombreDelCurso);
	cout << endl;
	miLibroCalificaciones.mostrarMensajes( nombreDelCurso );
	_getch;
	return 0;
}
