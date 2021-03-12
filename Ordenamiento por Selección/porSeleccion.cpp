/*
Por Seleccion
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	// Algoritmo del ordenamiento pro seleccion
	int numeros[] = { 3,2,1,5,4 };
	int i, j, aux, min;

	for (i = 0; i < 5; i++) {
		min = i;
		for (j = i + 1; i < 5; i++) {
			if (numeros[j] < numeros[min]) {
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	cout << "Orden ascentente; ";
	for (i = 0; i < 5; i++) {
		cout << numeros[i] << " ";
	}



	_getch();
}