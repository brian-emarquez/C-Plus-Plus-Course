/*

Comprobar si un numero es par o impar y señalar las posiciones de memoria
donde esta guadardo el numero con punteros

*/

# include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int numero, *dir_numero;

	cout << "Digite un Numero: "; cin >> numero;

	dir_numero = &numero; // Guardando la posicion de memoria

	if (*dir_numero % 2 == 0) {
		cout << "El numero " << *dir_numero << " es par " << endl;
		cout << "Posicion " << dir_numero << endl;
	}
	else {
		cout << "El numero " << *dir_numero << " es impar " << endl;
		cout << "Posicion " << dir_numero << endl;
	}

	_getch();
	return 0;
}