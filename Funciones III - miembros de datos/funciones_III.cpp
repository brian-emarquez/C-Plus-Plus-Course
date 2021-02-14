//#################################################################################
//# Funciones III Mienbros de datos, funciones establecer Y funciones obtener
//#################################################################################

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class LibroCalificaicones
{
public:
	void establecerNombreCurso(string nombre)
	{
		nombreCurso = nombre;
	}
	string obtenerNombreCurso()
	{
		return nombreCurso;
	}
	void mostarMensaje()
	{
		cout << "Bienvenido al libro de calificaciones para\n " << obtenerNombreCurso() << endl;
	}
private:
	string nombreCurso;
};

int main() {

	string nonbreDelCurso;
	LibroCalificaicones miLibroCalificaicones;

	//muestra el valor inicial de nombreCurso
	cout << "El nombre inicial del curso es: "<< miLibroCalificaicones.obtenerNombreCurso() << endl;

	// pide, recibe y establecer el nombre del curso
	cout << "\nEscriba el nombre del curso:" << endl;
	getline(cin, nonbreDelCurso);
	miLibroCalificaicones.establecerNombreCurso(nonbreDelCurso);

	cout << endl;
	miLibroCalificaicones.mostarMensaje();
	system("pause");
	return 0;
}