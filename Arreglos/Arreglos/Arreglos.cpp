/*vectores*/
/*Array*/
// es un tipo de dato que almacena una secuencia de datos del mismo tipo

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numero[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int suma = 0;

	for (int i = 0; i < 10; i++) {
		suma = suma + numero[i];
	}
	cout << "La suma de lo elementos de vector es: " << suma << endl;
	_getch();
	return 0;
}