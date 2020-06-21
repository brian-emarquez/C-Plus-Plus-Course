/*Condicional -  Switch*/

#include<iostream>

using namespace std;

int main()
{
	int numero;
	cout << "Dijite un Numero entre 1 -5: "; cin >> numero;

	switch (numero) {
		case 1 : 
			cout << "El numero es 1";
			break;
		case 2:
			cout << "El numero es 2";
			break;
		case 3:
			cout << "El numero es 3";
			break;
		case 4:
			cout << "El numero es 4";
			break;
		case 5:
			cout << "El numero es 5";
			break;
		default:
			cout << "No esta en el rango de 1 a 5";
	}
	return 0;
}