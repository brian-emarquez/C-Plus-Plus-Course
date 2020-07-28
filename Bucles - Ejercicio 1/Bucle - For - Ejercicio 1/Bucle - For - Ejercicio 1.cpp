/*Ejercicio 1 de For*/
/*Tabla de Multiplicar*/

#include<iostream>

using namespace std;

int main() {

	int numero;
	do {
		cout << "Ingrese un numero: "; cin >> numero;
	} while ((numero<1)||(numero>10));/*o*/

	for (int i = 1; i < 12; i++) {
		cout << numero << " * " << i << " = " << numero * i << endl;
	}
	return 0;
}