/*Define la clase LibroCalificaciones que contiene un mienbro de datos*/
/*nombreCurso y funciones mienbros para establecer y obtener su valor*/
/*crea y manipula un objeto LibroCalificaciones*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

#include <conio.h>

// definicion de las clases LibroCalificaciones
class LibroCalificaciones
{
public:

	//funcion que establecer el nombre del curso
	void establecerNombreCurso(string nombre)
	{
		nombreCurso = nombre;
	}

	string obtenerNombreCurso()
	{
		return nombreCurso;
	}

	void mostrarMensaje()
	{
		cout << "Bienvenido al libro de libroCalificaciones para\n " << obtenerNombreCurso() << endl;
	}

private:
	string nombreCurso;
};


int main()
{
	string nombreDelCurso;
	LibroCalificaciones miLibroCalificaciones;

	// muestra el valor inicial de nombreCurso
	cout << "El nombre inicial del curso es: " << miLibroCalificaciones.obtenerNombreCurso() << endl;

	// pide , recibir y establecer el nombre del curso
	cout << "\nEscriba el nombre del curso: " << endl;
	getline(std::cin, nombreDelCurso);
	miLibroCalificaciones.establecerNombreCurso(nombreDelCurso);

	cout << endl;
	miLibroCalificaciones.mostrarMensaje();
	_getch;
	return 0;
}