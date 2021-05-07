/* Hacer 2 estructuras una llamada promedio que tendra los siguientes campos
nota1, nota2, nota3, y otro llamada qe tendra los siguientes miembros:
nombre, sexo, edad; hacer que la esctructura promedio este anidada en la 
estructura alumno, luego pedir todas los datos para un alumno , lugo calcular su promedio y por ultimo imprimir sus datos incluidos
el promedio
*/

#include<iostream>
#include<conio.h>
#include "Header.h"

using namespace std;

int main() {

	float promedio_alumno;

	cout << "Digite su nombre: ";
	cin.getline(alumno1.nombre, 20, '\n');
	cout << "Digite su sexo: ";
	cin.getline(alumno1.sexo, 10, '\n');
	cout << "Digite su Edad: ";
	cin >> alumno1.edad;

	cout << "\n.:Notas del Alumno:.\n";
	cout << "Nota1: "; cin >> alumno1.prom.nota1;
	cout << "Nota2: "; cin >> alumno1.prom.nota2;
	cout << "Nota3: "; cin >> alumno1.prom.nota3;

	promedio_alumno = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3)/3;

	cout << "\Datos del Alumno\n";
	cout << "Nombre: " << alumno1.nombre << endl;
	cout << "Sexo: " << alumno1.sexo << endl;
	cout << "Edad: " << alumno1.edad << endl;
	cout << "Promedio: " <<promedio_alumno << endl;





	_getch();
	return 0;

}

