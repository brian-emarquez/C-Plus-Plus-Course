/****************************************************************************/
/*Funciones IV*/
/****************************************************************************/

# include <iostream>
# include <conio.h>

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

int main() {

	LibroCalificaciones librocalificaciones1("001 - Introduccion a la programacion c++");
	LibroCalificaciones libroCalificaciones2("002 - Estructura de Datos c++ ");
	
	cout << "libroCalificaciones1 se creo para el curso: " << librocalificaciones1.obtenerNombreCurso() << endl;
	cout << "libroCalificaciones2 se creo para el curso: " << libroCalificaciones2.obtenerNombreCurso() << endl;
	_getch();
	return 0;
}


/* Hay 2 posibles casos: que una función no retorne nada (en tal caso le ponemos void), o que retorne algo 
(en tal caso, le ponemos el tipo que retorna, que puede ser cualquiera)(en este caso, int).*/