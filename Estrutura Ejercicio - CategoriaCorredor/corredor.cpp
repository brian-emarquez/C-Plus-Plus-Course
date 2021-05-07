/* Ejercicio - Categoría de un corredor */
/*
Hacer una estructura llamado corredorm en la cual se tendran las siguienes campos : nombrem edadm sexo, club, pedir datos al 
usuario para un corredor y asi una categoria de competicion

- Juvenirl <=18 años
- Señor <= 40 años
- veterano > 40 años

Posteriormente imprimir todos lo datos del corredos, incluida su categoria de competicion

*/
 
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

	struct Corredor{
		char nombre[20];
		int edad;
		char sexo[10];
		char club;
	}c1;

int main() {
	
	char categoria[20]; 

	cout << "nombre: ";
	cin.getline(c1.nombre, 20, '\n');
	cout << "edad:";
	cin >> c1.edad,'\n';
	cout << "sexo: ";
	cin.getline(c1.sexo, 10, '\n');
	cout << "club: ";
	cin >> c1.club,'\n';

	if (c1.edad <=18){
		//strcpy_s  : copia cadena de caracteres
		strcpy_s(categoria, "Juvenil");
	}
	else if (c1.edad <=40) {
		strcpy_s(categoria, "Senior");
	}
	else {
		strcpy_s(categoria, "Veterano");
	}
	

	cout << "\nDatos del corredor: " << endl;
	cout << "Nombre: " << c1.nombre << endl;
	cout << "Edad: " << c1.edad << endl;
	cout << "Sexo: " << c1.sexo << endl;
	cout << "Club: " << c1.club << endl;
	cout << "Categoria: " << categoria<< endl;

	system("pause");
	return 0;

}
