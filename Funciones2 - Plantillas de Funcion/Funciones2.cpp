/* Ejemplo : sacar el valor absoluto de un numero*/

#include<iostream>
#include<stdio.h>
using namespace std;

/*Prototipo de funcion*/
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main() {

	int num1 = 4;
	float num2 = 56.67;
	double num3 = 123.5378;

	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);

	system("pause");
	return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero) {
	if (numero < 0) {
		numero = numero * -1;
	}

	cout << "El valor absoluto del numero es: " << numero<<endl;
}