/*Array, arreglos, vectores*/
/*Es un arreglo unidencional es tipo de dato que almacena una secuencia de datos del mismo tipo*/
/*int numero[6] = {1,2,3,4,5,6}*/

#include<iostream>
#include<conio.h>

using namespace std;


int main()
{
	int numero[] = { 1,2,3,4,5 };
	int suma = 0;
	
	for (int i = 0; i < 5; i++){
		suma = suma + numero[i];
	}

	cout << "La suma de los elementos de vector es: " << suma << endl;
	_getch();
	return 0;

}