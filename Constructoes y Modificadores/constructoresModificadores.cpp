#include<iostream>
#include<stdio.h>

using namespace std;

class Punto {

	private:
		int x, y; //atributos

	public:
		Punto(); //metodos
		void setPunto(int, int);
		int getPuntoX();
		int getPuntoY();
};

Punto::Punto() {
	
}

// Establencemos valores a los metodos
void Punto::setPunto(int _x, int _y) {
	x = _x;
	y = _y;
}

int Punto::getPuntoX() {
	return x;
}

int Punto::getPuntoY() {
	return y;
}

int main() {

	Punto punto1;
	punto1.setPunto(15,20);
	cout << punto1.getPuntoX() << endl;
	cout << punto1.getPuntoY() << endl;

	system("pause");
	return 0;
}





