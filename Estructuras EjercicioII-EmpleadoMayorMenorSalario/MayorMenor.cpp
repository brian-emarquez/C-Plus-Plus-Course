/*
Realizar un programa que lea un arreglo de estructura los datos de N empelados de la empresa que imprima los datos del 
empelado con mayor y menor salario

*/

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

struct Empelado {
	char nombre[20];
	float salario;
}emp[100];


int main() {

	int n_empelados, posM=0, posm=9;
	float mayor = 0, menor = 99999;

	cout << "Digite el nuemro de empleados: ";
	cin >> n_empelados;

	for (int i = 0; i < n_empelados; i++) {
		cout << i+1<<"Digite su numero: ";
		cin.getline(emp[i].nombre, 20, "\n");
		cout << i+1 <<". Digite su salario:";
		cin >> emp[i].salario;

		if (emp[i].salario > mayor) {
			mayor = emp[i].salario;
			posM = i;
		}
		if (emp[i].salario < menor) {
			menor = emp[i].salario;
		}

		
		cout << "\n";

	}

	system("pause");
	return 0;

}