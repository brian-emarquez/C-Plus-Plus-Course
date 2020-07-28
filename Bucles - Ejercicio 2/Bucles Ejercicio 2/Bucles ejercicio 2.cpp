/*Bucles Ejericio 2*/

/*Realize un programa que calcule y muestre en salida estandar 
la suma de los cuadrados de los 10 primeros enteeros mayores que 0
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
int main() {

	int suma = 0, cuadrado = 0;
	printf("Inicio del Programa\n");


	for (int i = 1; i <= 10; i++) {
		cuadrado = i * i;
		suma = suma + cuadrado;
	}
	cout << "El resultado de la suma es : " << suma;
	_getch();
	return 0;
 }