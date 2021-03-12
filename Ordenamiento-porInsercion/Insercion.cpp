/*
Insercion
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int numeros[] = { 4,2,3,1,5 };
	int i, pos, aux;

	//Ordenamiento por insercion
	for (i = 0; i < 5; i++) {
		pos = i; //flecha
		aux = numeros[i]; //numero

		while ((pos > 0) && (numeros[pos - 1] > aux)) {
			numeros[pos] = numeros[pos - 1];
			pos--;
		}
		numeros[pos] = aux;
	}
	cout << "Orde Ascendente: ";
	for (i = 0; i < 5; i++) {
		cout<< numeros[i] << " ";
	}
	cout << "\n=====================================" << endl;
	cout << "Orde descemdente: ";
	for (i = 4; i >= 0; i--) {
		cout << numeros[i] << " ";
	}

	_getch();
}