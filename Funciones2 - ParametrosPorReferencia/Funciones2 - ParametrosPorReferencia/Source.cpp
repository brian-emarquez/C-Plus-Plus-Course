/*Paso de Parametros por referencias*/

# include <iostream>
# include <conio.h>
# include"Header.h"

using namespace std;

void valNuevo(int&,int&);

int main() {

	int num1, num2;
	cin >> num1 >> num2;

	valNuevo(num1, num2);

	_getch();
	return 0;
}