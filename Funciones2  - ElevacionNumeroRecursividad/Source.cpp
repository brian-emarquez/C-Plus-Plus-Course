/*

Escriba una funcion recursiva que calcule un numero elevado a una 
potencia entera mayor o igual que cero x^y.

*/

#include <iostream>
#include <stdio.h>

using namespace std;

//prototipo
int potencia(int, int);

int main() {

	int base, exponente;

	cout << "Digite la base : "; cin >> base;
	cout << "Digite la Exponente : "; cin >> exponente;

	cout << "\nPotencia de " << base << " elevado a " << exponente << " es : " << potencia(base, exponente)<<endl;
	
	system("pause");
	return 0;
}


//funcion recursiva
int potencia(int x, int y){
	int pot;

	if (y == 1) {
		pot = x;
	}else {
		pot = x * potencia(x, y -1);
	}
	return pot;
}