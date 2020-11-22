/********************************************************/
/* CADENAS DE CARACTERES 1 */
/*******************************************************/

#include <iostream>
#include <stdio.h>
#include <string.h> // libreria estandar para las cadenas de caracteres

using namespace std;

int main(){
    char palabra[] = "brian";
    char palabra2[] = {'b','r', 'i', 'a', 'n'}; // es lo mismo que la cadena anterior
    char nombre[30];

    //cout << palabra << endl;
    //cout << palabra2 << endl;

    cout << "Digite su nombre: "; 
    //cin >> nombre; // el cin no es buena opcion para guardar cadenas de caracteres
    //gets_s(nombre); //mejor opcion para guardar cadenas - "gets"
    cin.getline(nombre, 20, '\n'); // segunda forma de capturar.

    cout << nombre << endl;

    system("pause");
    return 0;
}