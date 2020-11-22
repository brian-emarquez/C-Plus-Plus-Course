
// Longtud de una cadena de caractecteres - Funcion strlen()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
	char palabra[] = "hola"; 
	int longitud = 0;

	longitud = strlen(palabra); // muestra la longitud de elementos 

	cout << "NUmero de elementos de la cadena es: "<<longitud<<endl;

	_getch();
	return 0;
}