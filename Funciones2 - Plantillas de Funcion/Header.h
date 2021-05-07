#pragma once

#include<iostream>
using namespace std;

template <class TIPOD>
void mostrarAbs(TIPOD numero) {
	if (numero < 0) {
		numero = numero * -1;
	}

	cout << "El valor absoluto del numero es: " << numero << endl;
}