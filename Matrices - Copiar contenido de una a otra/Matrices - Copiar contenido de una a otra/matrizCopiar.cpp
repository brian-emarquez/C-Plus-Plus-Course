// Matrices - || Copiar el contenido de una matriz a otra matriz

// Hacer una Matriz, Vector de tipo entera de 2 *2 , llenar de numeros y luego
// copiar todo su contenido hacia matriz

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int numeros[2][2] = {{1,2} ,{3,4}};
	int matriz2[2][2];

	//Copiando el contenido de numeo a matriz 2
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			matriz2[i][j] = numeros[i][j];
		}
	}

	//Mostrando matriz 2
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << matriz2[i][j];
		}
		cout << "\n";
	}
	_getch();
	return 0;
}



