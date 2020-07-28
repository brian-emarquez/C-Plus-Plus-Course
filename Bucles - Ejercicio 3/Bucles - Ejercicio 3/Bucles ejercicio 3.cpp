/*Escriba un programa que calcule
el valor de : 1+2+3+...+n*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n, suma = 0;
	cout << "Ingrese un numero: "; cin >> n;

	for (int i = 1; i <= n; i++) {
		suma = suma + i;
	}
	cout << "El Resultado es: "<<suma;

	_getch();
	return 0;
}



