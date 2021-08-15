/*

Realice un funcion recursiva que sume los primeros numeros n enteros
positivos

Para plantear la funcion recursiva tenga en cuenta que la suma puede expresarse
mediante la siguiente recurrencia:

suma(n) = 1		       ,si n = 1
		n+suma(n-1)    ,si n > 1
*/

#include <iostream>
#include <stdio.h>

using namespace std;

//prototipo
int factorial(int);

int main() {

	cout << "El factorial: " << factorial(5) << endl;

	system("pause");
	return 0;
}

int factorial(int n) {
	if (n == 0) { //caso base

		n = 1;
	}
	else { // caso genral
		n = n * factorial(n - 1);
	}
	return n;
}