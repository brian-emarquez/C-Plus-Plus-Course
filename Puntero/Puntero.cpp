/*
PUNTEROS
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int num;
	int *dir_num; //puntero que guarda la direccion de memoria de una variable entera

	num = 25;
	dir_num = &num;

	cout << "Numero: " << num << endl;
	cout << "Numero: " << *dir_num << endl;

	cout << " =========================.:Memoria:.=============================" << endl;

	//posicion de memoria
	cout << "Direccion de memoria: " << &num << endl;
	cout <<"Direccion de memoria: " << dir_num << endl;

	system("pause");

	return 0;
}