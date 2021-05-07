#pragma once
#include <iostream>
#include "Prototipos.h"

using namespace std;

void pedirDatos() {
	cout << "Digite 2 numeros: ";
	cin >> num1 >> num2;

}

void mult(float x, float y) {
	float multiplicacion = x * y;
	cout << "La Multiplicacion es:" << multiplicacion << endl
		;
}