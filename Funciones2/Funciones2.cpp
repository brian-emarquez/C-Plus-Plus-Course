#include<iostream>
#include<stdio.h>
#include "Header.h"

using namespace std;

//Prototipo de funcion

int encontrarMax(int x, int y);

 
int main() {

	int n1, n2;
	int mayor;

	cout << "Digite 2 numeros:\n";
	cin >>n1;cin>>n2;

	mayor = encontrarMax(n1,n2);
	cout << "El mayor de los 2 numeros es: " << mayor << endl;

	system("pause");
	return 0;

}

