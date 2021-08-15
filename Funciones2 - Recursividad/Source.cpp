/* Recursividad , es aquella funcion que se llama asi misma
*/

#include <iostream>
#include <stdio.h>

using namespace std;

//prototipo
int factorial(int);

int main() {

	cout << "El factorial: "<< factorial(5) << endl;

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