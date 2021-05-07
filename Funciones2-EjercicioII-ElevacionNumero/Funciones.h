#pragma once

#include<iostream>
#include"Prototipos.h"
using namespace std;


void perdirDatos() {
	cout << "Digite un numero: ";
	cin >> numero;
	cout << "Digite el exponente: ";
	cin >> exponente;
}

void funpot(int x, int y) {
	long resultado = 1;

	for (int i = 1; i <= y; i++) {
		resultado *= x;
	}
	cout << "El resultado  es: " << resultado << endl;
}
