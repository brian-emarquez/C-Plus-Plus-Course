/* Practica de Struc*/
/* Programa simple para usar Struc*/

#include<iostream>
#include<conio.h>
#include "Header.h"

using namespace std;

int main() {
	for (int i = 0; i < 2; i++) {
		fflush(stdin); //vacia los espacios buffer
		cout << "Digite su nombre: ";
		cin.getline(empleados[i].nombre, 20, '\n');
		cout << "Digite su direccion: ";
		cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');
		cout << "Ciudad: ";
		cin.getline(empleados[i].dir_empleado.cuidad, 20, '\n');
		cout << "Provincia: ";
		cin.getline(empleados[i].dir_empleado.provincia, 20 ,'\n');
		cout << "Salario: ";
		cin >> empleados[i].salario;
		cout <<"\n";
	}

//implemtacion

	for (int i = 0; i < 2; i++) {
		cout << "Nombre: " << empleados[i].nombre<<endl;
		cout << "Direccion: " << empleados[i].dir_empleado.direccion << endl;
		cout << "Cuidad: " << empleados[i].dir_empleado.cuidad << endl;
		cout << "provincia: " << empleados[i].dir_empleado.provincia << endl;
		cout << "salario: " << empleados[i].salario << endl;
		cout << "\n";

	}

	_getch();
	return 0;
}