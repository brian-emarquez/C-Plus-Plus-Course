/*Arreglos 2*/
//#Ingreso de arreglo por teclado

#include<iostream>
#include<conio.h>

using namespace std;
int main() {

	int numeros[100],n;
	cout << "Digite un numero de elementos que va tener el arreglo: "; cin >>n;

	for (int i = 0; i < n; i++) {
		cout << "Ingrese un numero: ";
		cin >> numeros[i];
	}
	//Mostar
	for (int i = 0; i < n; i++) {
		cout << i << " --> " << numeros[i]<<endl;
	}
	_getch();
	return 0;
}
