/****************************************************/
/*Comparar Cadenas - Funcion strcmp()*/
/****************************************************/
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {

	char palabra1[] = "Hola";
	char palabra2[] = "Hola";

	if (strcmp(palabra1, palabra2) != 0) {
	//if (strcmp(palabra1, palabra2) > 0) {
	//if (strcmp(palabra1, palabra2) < 0) {

		cout<<"Ambas cadenas son diferenes";
	}
	else {
		cout << "Ambas son iguales";
	}

	_getch();
	system("pause");
}
