/* NUmero Magico */
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main() {

	int numero, dato, contador = 0;

	srand(time(NULL)); //genera un numero aleatorio
	dato = 1 + rand() % (100);

	do {
		cout << "Digite un numero: "; cin >> numero;

		if (numero > dato) {
			cout << "\nDigite un numero Menor!\n";
		}

		if (numero < dato) {
			cout << "\nDigite un numero Mayor!\n";
		}

		contador=contador+1;
	} while (numero != dato);

	cout << "Felicidades Adivinaste el numero\n";
	cout << "Numero de intentos: "<<contador<<endl;

	system("pause");
	return 0;
}