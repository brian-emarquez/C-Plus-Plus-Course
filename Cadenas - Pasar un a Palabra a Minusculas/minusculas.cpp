/*************************************************/
//Pasar un palabra a minusculas - Funcion strlwr()
/*************************************************/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main() // Funcion Principal
{
	char palabra[] = "BRIAN";

	_strlwr_s(palabra); //cambio a mayusculas

	cout << palabra << endl;

	_getch();
	return 0;
}