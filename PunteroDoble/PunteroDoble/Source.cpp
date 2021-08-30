#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int x, y;
	int *p, * q;

	int **t;
	int ***w;
	int *** o;

	x = 5;
	y = 6;

	p = &x;
	q = &y;

	/*mostrar por pantalla*/
	cout << "el puntero de *p es :"<< *p << endl;
	cout << "el puntero de *q es :"<< *q << endl;

	t = &p;
	*t = &y;

	w = &t;
	**w = &t;
	
	cout << "***********************\n" << endl;
	cout << "Doble puntero de **t es: "<< **t << endl;
	cout << "triple puntero de ***w es: " <<***w << endl;
	//cout << "cuadriple puntero de ****o es: " << ***w << endl;

	cout<< "\n" << endl;
	system("pause");
	return 0;
}