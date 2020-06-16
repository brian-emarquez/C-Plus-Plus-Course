/*Hacer un programa donde la calificacion de un estudiante es media ponderada de treas notas: ñas nota 
la nota de practicas que cuenta con el 30% del tototal , la nota teorica que cuenta un 60 5
y la nota de praticipacion que cuenta el 10% restante. Escriba un programa que lea la entrada estandar las 3 noas de un alumno y escriba en la salida su
nota final*/

#include<iostream>

using namespace std;

int main()
{
	float practica, teorica, participacion, final = 0;
	cout << "Dijite su Nota de Practicas: "; cin >> practica;
	cout << "Dijite su Nota de teoria: "; cin >> teorica;
	cout << "Dijite su Nota de partifipacion: "; cin >> participacion;
	
	practica *=0.30;
	teorica *= 0.60;
	participacion *= 0.10;
	final = practica + teorica + participacion;
	cout<< "La Nota Final es: "<<final;

	return 0;
}

