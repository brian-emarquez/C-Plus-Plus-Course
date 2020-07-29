/*Escribe un programa que defina un vector de numero y muestre en la salida estandar el vector
en orden inverso del ultimo al primer elemento*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int numero[100], n, mayor = 0;
	cout << "Dijite el numero de elemntos del Arreglo: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". Digie un numero: ";
		cin >> numero[i];

		if (numero[i] > mayor) {
			mayor = numero[i];
		}
	}
	cout << "\nEl mayor elemento del vector es: " << mayor << endl;

	_getch();
	return 0;
}