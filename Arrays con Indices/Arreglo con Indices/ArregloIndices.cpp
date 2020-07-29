/* Mostar los elemetos de un arreglo con sus indices asociados*/
/*Ingreso de datos*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {

	int numeros[100];
	int n = 0;
	cout << "Digite el numero de elementos que va a tener el arreglo: "; cin >> n;

	for(int i = 0; i<n; i++) {
		cout << "Digite un numero: "; cin>>numeros[i];
	}

	/*Ahora , vamos a mostrar los elementos con sus indices asociados*/
	for (int i = 0; i < n; i++)
	{
		cout << i << "-> " << numeros[i]<<endl;
	}
	system("pause");
	return 0;
}