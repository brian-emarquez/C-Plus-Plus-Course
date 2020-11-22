/**********************************************************/
// Invertir Cadena - Funcion strrev()
/**********************************************************/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main()
{
	char cad[] = "Brian";
	
	_strrev(cad); // Invierte la palabra
	cout << cad << endl;

	_getch();
	return 0;

}