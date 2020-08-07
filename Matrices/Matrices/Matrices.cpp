/*Matrices*/
/*Array Bidimensionales - Matrices o Tablas*/

/*
¿Que es una matriz o tabla?
Una Matriz es un vector o un tambien llamado array bidimencional. la manera
de declarar una matriz es c++ es similar a un vector
*/

/*Rellenando una Matriz pidiendo al usuario numero de filas y columnas
y posteriormente mostrar en lantalla*/

#include<iostream>
#include<conio.h>

using namespace std;

	
int main() {
	int numeros[100][100], filas, columnas; //100 filas y 100 columnas

	cout << "Digie un numero de filas: "; cin >> filas;
	cout << "Digie un numero de columnas: "; cin >> columnas;

	//Almacenando elentos en la matriz
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++)
		{
			cout << "Digite un numero [" << i << "][" << j << "]: ";
			cin >> numeros[i][j];


		}
	}
	//Mostrnado elentos de a matriz

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << numeros[i][j];
		}
		cout << "\n";
	}


	_getch();
	return 0;
}

