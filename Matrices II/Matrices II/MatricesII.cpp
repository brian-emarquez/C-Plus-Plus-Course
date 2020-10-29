// MaTRICES II
/* desarrolllar un programa que determine si una matriz es simetrica o no. Una Matriz
es simetrica si es cuadrada y si es igual a su matriz transpuesta*/

/*	
	|8 1 3|       |8 1 3|
	|1 7 4| -- >  |1 7 4|
	|3 4 9|       |3 4 9|
*/


#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int numero[100][100], filas , columnas; //100 filas y 100 columnas
	char bandera = 'F';

	cout << "Digite el nuero de Filas: "; cin>>filas;
	cout << "Digite el nuero de Columnas: "; cin >> columnas;

	for (int i=0; i<filas; i++) {
		for (int j=0; j<filas; j++){
			cout << "Digite un numero [" << i << "][" << j << "]:";
			cin >> numero[i][j];

		}
	}

	// comprbaer si es simetrica numero de filas igual el numero de columnas
	if (filas == columnas) {
		for (int i = 0; i < filas; i++) {
			for (int j = 0; j < filas; j++) {
				if (numero[i][j] == numero[j][i]) {
					bandera = 'V';
				}
			}
		}

		// Bandera
		if (bandera == 'V') {
			cout << "La Matriz es simetrica";
		}
		else {
			cout << "UPTS!! La Matriz no es simetrica";
		}
	}
	_getch();

	return 0;
}