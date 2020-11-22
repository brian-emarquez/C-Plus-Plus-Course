/*************************************************/
//Pasar un palabra a Matusculas - Funcion strupr()
/*************************************************/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main() // Funcion Principal
{
	char palabra[] = "Brian";

	_strupr_s(palabra); //cambio a mayusculas

	cout << palabra << endl;

	_getch();
	return 0;
}