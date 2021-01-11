/*Define la clase LibroCalificaciones que contiene un mienbro de datos*/
/*nombreCurso y funciones mienbros para establecer y obtener su valor*/
/*crea y manipula un objeto LibroCalificaciones*/

#include <iostream>
#include <stdio.h>

using std::cout;
using std::endl;


// definicion de las clases LibroCalificaciones
class LibroCalificaciones
{
public:
	void mostrarMensajes()
	{
		cout << "Bienvenido al libro de bienvenida para el usuario de libroCAlificaciones" << endl;
	}
};

int main()
{
	LibroCalificaciones miLibroCalificaciones;
	miLibroCalificaciones.mostrarMensajes();
	system("pause");
	return 0;
}

