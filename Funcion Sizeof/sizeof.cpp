/********************************************************************/
/*Sizeof devuelve el valor en bites*/
/********************************************************************/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	//respresentancion de tiepo de datos en bytes
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
	system("pause");
	return 0;
}