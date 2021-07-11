/*Paso de Parametros por referencias*/

# include <iostream>
# include <conio.h>

using namespace std;

void valNuevo(int&,int&);

int main() {

	int num1, num2;
	cin >> num1 >> num2;

	valNuevo(num1, num2);


	_getch();
	return 0;
}

//Pso por referencia - Drireccion
void valNuevo(int& xnum, int& ynum) {
	cout << "El valor del primero numer es: " << xnum << endl;
	cout << "El valor del segundo numer es: " << ynum << endl;
}