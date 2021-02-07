/*****************************************************************************************/
/* Metodo de la Burbuja*/
/*****************************************************************************************/

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int numeros[] = { 4,1,2,3,5 };
	int i = 0, j = 0, aux = 0;

	//algoritmo burbuja
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (numeros[j] > numeros[j + 1]) {
				aux = numeros[j];
				numeros[j] = numeros[j + 1];
				numeros[j + 1] = aux;
			}
		}
	}

	cout << "Orden Ascendente: ";
	for (i = 0; i < 5; i++) {
		cout << numeros[i];
	}
	cout << endl;

	system("pause");
	return 0;
}