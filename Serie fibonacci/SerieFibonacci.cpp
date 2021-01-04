/*Matrices*/
/*Array Bidimensionales - Matrices o Tablas*/
/********************************************************************/
// Serie Fibonacci
/*******************************************************************/

#include<iostream>
#include<stdlib.h>

using namespace std;


int main() {

	int n, x = 0, y = 1, z = 1;
	cout << "Digite el numero de elemtos: "; cin >> n;

	cout << "1 ";
	for (int i = 1; i < n; i++) {
		z = x + y; //1 2
		cout << z << " ";// 1 2
		x = y;
		y = z;

	}

	cout << "\n";
	system("pause");
	return 0;
}

