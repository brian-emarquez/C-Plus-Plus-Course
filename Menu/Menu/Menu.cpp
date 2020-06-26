/*Menu Interactico*/

#include <iostream>
#include <windows.h>
#include<conio.h>

//Controles para el Menu
#define ARRIBA 72
#define ABAJO 80
#define ENTER 13

using namespace std;

int getch(void)
{
   int car;
   DWORD leidos, modo;

   GetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), &modo);
   SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), modo & !ENABLE_ECHO_INPUT & !ENABLE_PROCESSED_INPUT);
   ReadConsole(GetStdHandle(STD_INPUT_HANDLE), &car, 1, &leidos, NULL);
   SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), modo);
   return car;
}

int gotoxy(USHORT x, USHORT y) {
    COORD cp = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cp);
    return x, y;
}


int menu(const char titulo[], const char* opciones[], int n);
void menu_principal();
void menu_suma();
void menu_resta();
void menu_producto();
void menu_division();

int main()
{
    menu_principal();
    return 0;
}

void menu_principal()
{
    bool repite = true;
    int opcion;

    // Titulo del menú y nombres de las opciones
    const char* titulo = "MENU DE OPCIONES";
    const char* opciones[] = { "Sumar", "Restar", "Multiplicar", "Dividir", "Salir" };
    int n = 5;  // Numero de opciones

    do {
        opcion = menu(titulo, opciones, n);

        switch (opcion) {
        case 1:
            menu_suma();
            break;


        case 2:
            menu_resta();
            break;

        case 3:
            menu_producto();
            break;

        case 4:
            menu_division();
            break;

        case 5:
            cout << "\nEl programa se cerrara!! ADIOS" << endl;
            repite = false;
            system("pause>nul");
            break;
        }

    } while (repite);
}

void menu_suma()
{
    bool repite = true;
    int opcion;

    // Titulo del menú y nombres de las opciones
    const char* titulo = "MENU PARA SUMAR";
    const char* opciones[] = { "Sumar enteros", "Sumar flotantes", "Regresar" };
    int n = 3;  // Numero de opciones

    int a, b;
    float c, d;

    do {
        opcion = menu(titulo, opciones, n);

        system("cls");
        switch (opcion) {
        case 1:
            cout << "Ingrese numero 1: ";
            cin >> a;

            cout << "Ingrese numero 1:  ";
            cin >> b;

            cout << a << " + " << b << " = " << a + b << endl;
            system("pause");
            break;


        case 2:
            cout << "Ingrese numero 1: ";
            cin >> c;

            cout << "Ingrese numero 1: ";
            cin >> d;

            cout << c << " + " << d << " = " << c + d << endl;
            system("pause");
            break;

        case 3:
            repite = false;
            break;
        }

    } while (repite);
}

void menu_resta()
{
    bool repite = true;
    int opcion;

    const char* titulo = "MENU PARA RESTAR";
    const char* opciones[] = { "Restar enteros", "Restar flotantes", "Regresar" };
    int n = 3;  

    int a, b;
    float c, d;

    do {
        opcion = menu(titulo, opciones, n);

        system("cls");
        switch (opcion) {
        case 1:
            cout << "Ingrese numero 1: ";
            cin >> a;

            cout << "Ingrese numero 2: ";
            cin >> b;

            cout << a << " - " << b << " = " << a - b << endl;
            system("pause");
            break;


        case 2:
            cout << "Ingrese numero 1: ";
            cin >> c;

            cout << "Ingrese numero 1: ";
            cin >> d;

            cout << c << " - " << d << " = " << c - d << endl;
            system("pause");
            break;

        case 3:
            repite = false;
            break;
        }

    } while (repite);
}

void menu_producto()
{
    bool repite = true;
    int opcion;
    const char* titulo = "MENU PARA MULTIPLICAR";
    const char* opciones[] = { "Multiplicar enteros", "Multiplicar flotantes", "Regresar" };
    int n = 3;  

    int a, b;
    float c, d;

    do {
        opcion = menu(titulo, opciones, n);

        system("cls");
        switch (opcion) {
        case 1:
            cout << "Ingrese numero 1: "; cin >> a;
            cout << "Ingrese numero 2: "; cin >> b;

            cout << a << " x " << b << " = " << a * b << endl;
            system("pause");
            break;


        case 2:
            cout << "Ingrese numero 1: "; cin >> c;
            cout << "Ingrese numero 2:  "; cin >> d;

            cout << c << " x " << d << " = " << c * d << endl;
            system("pause");
            break;

        case 3:
            repite = false;
            break;
        }

    } while (repite);
}

void menu_division()
{
    bool repite = true;
    int opcion;

    // Titulo del menú y nombres de las opciones
    const char* titulo = "MENU PARA DIVIDIR";
    const char* opciones[] = { "Dividir enteros", "Dividir flotantes", "Regresar" };
    int n = 3;  // Numero de opciones

    int a, b;
    float c, d;

    do {
        opcion = menu(titulo, opciones, n);

        system("cls");
        switch (opcion) {
        case 1:
            cout << "Ingrese numero 1: ";cin >> a;
            cout << "Ingrese numero 2: ";cin >> b;

            if (b == 0)
                cout << "No se puede dividir por cero" << endl;
            else
                cout << a << " div " << b << " = " << a / b << endl;

            system("pause");
            break;


        case 2:
            cout << "Ingrese numero 1: "; cin >> c;

            cout << "Ingrese numero 1: "; cin >> d;

            if (d == 0)
                cout << "No se puede dividir por cero" << endl;
            else
                cout << c << " / " << d << " = " << c / d << endl;

            system("pause");
            break;

        case 3:
            repite = false;
            break;
        }

    } while (repite);
}

int menu(const char titulo[], const char* opciones[], int n)
{
    int opcionSeleccionada = 1;  // Indica la opcionSeleccionada

    int tecla;

    bool repite = true; // controla el bucle para regresar a la rutina que lo llamo, al presionar ENTER

    do {
        system("cls");
        gotoxy(5, 3 + opcionSeleccionada); cout << "==>" << endl;

        // Imprime el título del menú
        gotoxy(15, 2); cout << titulo;

        // Imprime las opciones del menú
        for (int i = 0; i < n; ++i) {
            gotoxy(10, 4 + i); cout << i + 1 << ") " << opciones[i];
        }

        // Solo permite que se ingrese ARRIBA, ABAJO o ENTER

        do {
            tecla = _getch();
            // gotoxy(15, 15); cout << "tecla presionada: " << (char)tecla << " = " << tecla;
        } while (tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);

        switch (tecla) {

        case ARRIBA:   // En caso que se presione ARRIBA

            opcionSeleccionada--;

            if (opcionSeleccionada < 1) {
                opcionSeleccionada = n;
            }

            break;

        case ABAJO:
            opcionSeleccionada++;

            if (opcionSeleccionada > n) {
                opcionSeleccionada = 1;
            }

            break;

        case ENTER:
            repite = false;
            break;
        }

    } while (repite);
   return opcionSeleccionada;
}