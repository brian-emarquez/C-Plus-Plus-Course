/*************************************************/
//Cadenas Transformar una cadena a números - Función atoi() y atof()

//"123.45" ->123.45

/*************************************************/

#include<iostream>
#include<conio.h>
#include<stdlib.h> // trae consigo las libreria atoi() y atof()

using namespace std;


int main() // Funcion Principal
{
	char cad[] = "123.34";
	int numero;

	numero = atoi(cad); //numero entero
	numero = atof(cad); //numero flotante

	cout << numero << endl;

	_getch();
	return 0;
}