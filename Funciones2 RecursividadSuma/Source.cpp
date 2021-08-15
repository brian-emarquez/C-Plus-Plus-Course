/*

Realice un funcion recursiva que sume los primeros numeros n enteros
positivos

*/

#include <iostream>
#include <stdio.h>

using namespace std;

//prototipo
int sumar(int);

int main() {

	int nElementos;

	do {
		cout << "Digite el numero de elementos: ";
		cin >> nElementos;
	} while (nElementos <= 0);

	cout << "\nLa Suma es: "<<sumar(nElementos) << endl;


	system("pause");
	return 0;
}


//funcion recursiva
int sumar(int n) {
	int suma = 0;

	if (n == 1) { //caso base
		suma = 1;
	}
	else{ //caso general
		suma = n + sumar(n - 1); 
	}
	return suma;

}