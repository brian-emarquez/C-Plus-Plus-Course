/* Realiza un programa que defina 2 vectores de caracteres y despues 
almacene el contenido de ambos vectores en un nuevo vector, situando 
en el primer lugar los elementos del primer vector seguidos por los
elementos del segundo vector. muestre el contenido del nuevo vecto en 
salida estadar */

# include <iostream>
# include <conio.h>

using namespace std;

int main() {


	char letra1[] = { 'a', 'b', 'c', 'd', 'e' };
	char letra2[] = { 'f', 'g', 'h', 'i', 'j' };

	char letra3[10];

	//Copiando lo elementos del arreglo del letras1 hacia letras3

	for (int i = 0; i < 5; i++) {
		letra3[i] = letra1[i];
	}
	//Copiando lo elementos del arreglo del letras2 hacia letras3

	for (int i = 5; i < 10; i++) {
		letra3[i] = letra2[i-5]; //se resta 5 elementos por que el arreglo es de 5

	}

	// Mostrar el nuevo vector
	for (int i = 0; i < 10; i++) {
		cout << letra3[i] << endl;
	}

	_getch();
	return 0;
};