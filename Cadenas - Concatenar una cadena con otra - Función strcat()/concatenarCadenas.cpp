/**************************************************************/
//Anadir o concatenaar una cadena con otra - Funcion strcar()
/*************************************************************/
 
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main() {

	char cad1[] = "Esto es cadena";
	char cad2[] = "de ejemplo";
	char cad3[30];

	strcpy(cad3, cad1); // cad3: "esto es un cadenas
	strcat(cad3, cad2); // cad3: "esto es una cadena de ejemplo"

	cout << cad3 << endl;

	_getch();
	return 0;
}
