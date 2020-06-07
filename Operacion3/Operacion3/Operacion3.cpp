/*Operacion 3*/

#include <iostream>

using namespace std;

int main() {

	float a, b, c, d, e, f , resultado = 0;

	cout << "Ingrese en valor de A: "; cin >> a;
	cout << "Ingrese en valor de B: "; cin >> b;
	cout << "Ingrese en valor de C: "; cin >> c;
	cout << "Ingrese en valor de D: "; cin >> d;
	cout << "Ingrese en valor de E: "; cin >> e;
	cout << "Ingrese en valor de F: "; cin >> f;


	resultado = (a + (b / c)) / (d + (e / f));
	cout << "\nEl Resultado es: "<<resultado;

	return 0;

}