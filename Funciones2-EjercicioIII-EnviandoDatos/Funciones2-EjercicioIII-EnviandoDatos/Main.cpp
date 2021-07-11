#include<iostream>
#include<stdio.h>

#include "Template.h"
#include "Salida.h"
using namespace std;

//template<class TIPOD>
//void despligue(TIPOD dato);

int main() {

	int dato1 = 4;
	float dato2 = 14.23;
	double dato3 = 234.3456;
	char dato4 = 'a';

	despligue(dato1);
	despligue(dato2);
	despligue(dato3);
	despligue(dato4);

	system("pause");
	return 0;
}

//template<class TIPOD>
//void despligue(TIPOD dato){
//	cout << "El dato es: " << dato << endl;
//}