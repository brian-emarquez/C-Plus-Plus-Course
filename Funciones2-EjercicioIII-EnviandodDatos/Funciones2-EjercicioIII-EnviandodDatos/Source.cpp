/*Escriba un aplantilla de funcion llamada despliegue() que despliegue el 
valor del arhumento unico que se le transmite cuando es invocado la funcion
*/

#include<iostream>
#include<stdio.h>

using namespace std;

template<class TIPOD>
void despligue(TIPOD dato);

int main() {

	int dato1 = 4;
	float dato2 = 15.34;
	double dato3 = 234.2342;
	char dato4 = 'b';

	despligue(dato1);
	despligue(dato2);
	despligue(dato3);
	despligue(dato4);

	system("pause");
	return 0;
}

template<class TIPOD>
void despligue(TIPOD dato) {
	cout << "El dato es: " << dato << end;
}