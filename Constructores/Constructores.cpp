/* Contructores*/


#include <iostream>
#include <conio.h>

using namespace std;

class Persona {

	private:
		string Nombre;


	public:
		// constructor
		Persona(string _Nombre) {
			Nombre = _Nombre;
		}
		// Segundo Contructor, sobrecarga de contructores.
		Persona() {
			cout << "Persona sin Nombre";
		
		}
		string GetNombre(){
			return Nombre;
		}
};


int main() {

	Persona MiPersona("brian");
	Persona otraPersona("Yuliza");
	Persona sinnombrePersona;

	cout << endl;
	cout << MiPersona.GetNombre();
	cout << endl;
	cout << otraPersona.GetNombre();
	cout << endl;
	cout << sinnombrePersona.GetNombre();
	cout << endl;
	_getch();
}



