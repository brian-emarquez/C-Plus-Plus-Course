/* Ejemplo : sacar el valor absoluto de un numero*/

#include<iostream>
#include<stdio.h>
#include "Header.h"
using namespace std;

/*Prototipo de funcion*/
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main() {

	int num1 = -4;
	float num2 = -56.67;
	double num3 = -123.5378;

	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);

	system("pause");
	return 0;
}
