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
};

Punto::Punto() {

}

// Establencemos valores a los metodos
void Punto::setPunto(int _x, int _y) {
	x = _x;
	y = _y;
}

int punto:

int main() {

	Punto punto1;

	punto1.setPunto(15,20);


	system("pause");
	return 0;
}


