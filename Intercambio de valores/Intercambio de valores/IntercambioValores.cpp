/*Escriba un fragmento de programa que intercmabie los valores de 2 varialbles*/

#include<iostream>

using namespace std;

int main() {

	int x, y, aux;

	cout << "Digite el valor de X: "; cin >> x;
	cout << "Digite el valor de Y: "; cin >> y;

	aux = x;
	x = y;
	y = aux;

	cout << "\nElValor de X es: "<< x<<endl;
	cout << "El Valor de Y es :"<< y<<endl;



	return 0;

}