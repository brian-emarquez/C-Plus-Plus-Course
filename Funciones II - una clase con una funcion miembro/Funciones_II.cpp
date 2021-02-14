#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
//#include <string>

using namespace std;

class LibroCalificaicones
{
public:
	void mostarMnesaje(string nombreCurso)
	{
		cout << "Bienvenido al libro de calificaciones! " << nombreCurso <<endl;
	}
};


int main() {
	string nonbreDelCurso;
	LibroCalificaicones miLibroCalificaicones;

	//Ingreso de datos
	cout << "Escriba el nombre del curso " << endl;
	getline(cin, nonbreDelCurso);
	cout << endl;

	miLibroCalificaicones.mostarMnesaje(nonbreDelCurso);
	system("pause");
	return 0;
}