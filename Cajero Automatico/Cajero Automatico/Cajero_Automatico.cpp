/*Simulador de Cajero Automatico*/
/*Hacer un programa que simule un cajero automatoc con un saldo inicial de 1000 Dolores*/


#include<iostream>

using namespace std;

int main()

{
	float saldo = 1000, cantida_mone_sum, estado_sum, cantida_mone_res, estado_res;
	int opc = 0;


	while (opc != 4)
	{

		cout << ".::CAJERO AUTOMATICO::." << endl;
		cout << "===================================================" << endl;
		cout << "1. Ver mi Estado de cuenta Actual " << endl;
		cout << "2. Hacer deposito a tu cuenta" << endl;
		cout << "3. Hacer un Retiro a tu cuenta" << endl;
		cout << "4. Salir " << endl;
		cout << "\nIngrese una Opcion!: ";
		cin >> opc;


		switch (opc)
		{
		case 1: /*estado de cuenta*/
			system("cls");
			cout << "Su saldo actual es: " << saldo << "\n" << endl;
			system("pause");
			system("cls");
			break;

		case 2: /*Deposito*/
			system("cls");
			cout << "Ingrese una cantidad monetaria para sumar a su cuenta" << endl;
			cin >> cantida_mone_sum;
			estado_sum = saldo + cantida_mone_sum;
			cout << "Su cuenta Actual es: " << estado_sum << "\n" << endl;
			system("pause");
			system("cls");
			break;

		case 3:/*Hacer un retiro*/
			system("cls");
			cout << "Ingrese una cantidad monetaria que desea retirar" << endl;
			cin >> cantida_mone_res;
			if (cantida_mone_res > saldo)
			{
				cout << "No Puede retirar esa cantidad" << endl;
			}
			else
			{
				estado_res = saldo - cantida_mone_res;
				cout << "Su cuenta Actual es: " << estado_res << "\n" << endl;

			}
			system("pause");
			system("cls");
			break;

		default:

			if (opc < 1 || opc > 5) {
				system("cls");
				cout << "No es valido" << endl;
				system("cls");

			}
		}
	}
	cout << "Gracias por su visita " << endl;

	return 0;
}