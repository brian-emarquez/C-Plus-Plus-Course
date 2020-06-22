/*Simuladores de Cajero Automatico*/
/*Hacer un programa que simule un cajero automatoc con un saldo inicial de 1000 Dolores*/

#include<iostream>
using namespace std;

int main()

{
	float saldo = 1000, cantida_mone_sum, estado_sum, cantida_mone_res, estado_res;
	int opc;

	cout << ".:CAJERO AUTOMATICO:."<<endl;
	cout << "===================================" << endl;
	cout << "1. Ver mi Estado de cuenta Actual "<< endl;
	cout << "2. Ingresar a mi cuenta " << endl;
	cout << "3. Hacer un Retiro " << endl;
	cout << "4. Salir " << endl;
	cout << "\n---Ingrese una Opcion!---" << endl;
	cin>>opc;

	
		switch (opc)
		{
		case 1:
			cout << "Su saldo actual es: " << saldo;
			break;

		case 2:
			cout << "Ingrese una cantidad monetaria para sumar a su cuenta" << endl;
			cin >> cantida_mone_sum;
			estado_sum = saldo + cantida_mone_sum;
			cout << "Su cuenta Actual es: " << estado_sum;
			break;

		case 3:
			cout << "Ingrese una cantidad monetaria que desea retirar" << endl;
			cin >> cantida_mone_res;
			if (cantida_mone_res > saldo)
			{
				cout << "No Puede retirar esa cantidad" << endl;
			}
			else
			{
				estado_res = saldo - cantida_mone_res;
				cout << "Su cuenta Actual es: " << estado_res;
				break;
			}

		case 4:
			break;
		}
	
	
	return 0;
}