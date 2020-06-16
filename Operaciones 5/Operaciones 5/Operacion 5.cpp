
#include<iostream>
#include<math.h>

using namespace std;

int main() {

	float x, y, resultado = 0;

	cout << "Dijite el valor de X: "; cin >> x;
	cout << "Dijite el valor de Y: "; cin >> y;

	resultado = (sqrt(x)) / (pow(y, 2) - 1);
	cout << "\nEl resultado es: " << resultado;
	return 0;
}