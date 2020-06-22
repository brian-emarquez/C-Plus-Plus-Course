/*Condicional -  Switch*/

#include<iostream>

using namespace std;

int main_1()
{
	char letra;
	cout << "Dijite un Caracter "; cin >> letra;

	switch (letra) {
		case 'a':	
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout << "Es una Vocal Minuscula"; break;
		default:
			cout << "es una vocal el mayuscula";
	}
	return 0;
}

