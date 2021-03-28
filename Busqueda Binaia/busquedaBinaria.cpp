// Busqueda Binaria

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int numeros[] = { 1,2,4,3,5 };
    int inf, sup, mitad, dato;
    char band = 'F';

    dato = 5;

    // Allgotritmo de Busqueda Binaria
    inf = 0;
    sup = 5;

    while (inf <= sup) {
        mitad = (inf + sup) / 2;

        if (numeros[mitad] == dato) {
            band = 'V';
            break;
        }

        if (numeros[mitad] > dato) {
            sup = mitad;
                mitad = (inf + sup) / 2;
        }

        if (numeros[mitad] < dato) {
            inf = mitad;
                mitad = (inf + sup) / 2;
        }
    }

    if (band = 'V') {
        cout << "El numero a sido encontrado en la posicion: " << mitad << endl;
    }
    else {
        cout << "El numero no fue encontrado" << endl;
    }


    system("pause");
}