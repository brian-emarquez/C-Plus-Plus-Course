/*Define la clase LibroCalificaciones con una funcion mienbro llamada mostrar mensaje*/
/*crea un objeto libroCAlificaciones y llama a su funcion mostrarMnesaje*/

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



