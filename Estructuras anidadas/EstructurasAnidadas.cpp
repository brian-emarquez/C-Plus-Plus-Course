#include<iostream>
#include<stdio.h>
#include "Header.h"

using namespace std;

int main() {
	for (int i = 0; i < 2; i++) {
		fflush(stdin); ////vacias el buffer y permite doigitalizar valor
		cout << "Digite su nombre: ";
		cin.getline(empleados[i].nombre, 20, '\n');
		cout << "Digite su direccion : ";
		cin.getline(empleados[i].dir_empleado.direccion, '\n');
		cout << "Ciudad: ";
		cin.getline(empleados[i].dir_empleado.cuidad, 20, '\n');
		cout << "Provincia";
		cin.getline(empleados[i].dir_empleado.provincia, 20 ,'\n');
		cout << "Salario: ";
		cin >> empleados[i].salario;
		cout <<"\n";
	}

//imprimiento los datos

	for (int i = 0; i < 2; i++) {
		cout << "Nombre: " << empleados[i].nombre;
		cout << "Direccion: " << empleados[i].dir_empleado.direccion;
		cout << "Cuidad: " << empleados[i].dir_empleado.cuidad;
		cout << "provincia: " << empleados[i].dir_empleado.provincia;
		cout << "salario: " << empleados[i].salario;
		cout << "\n";

	}

	system("pause");
	return 0;
}