#pragma once

#include<iostream>
using namespace std;


// Definicion de funcion
int encontrarMax(int x, int y) {
	int numMax;

	if (x > y) {
		numMax = x;
	}
	else {
		numMax = y;
	}

	return numMax;
}
