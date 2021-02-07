/*******************************************************************************/
//  swap() function
/*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    cout << "Valor de antes: " << a << endl;
    cout << "Valor de antes: " << b << endl;

    // swap values of the variables 
    cout << "------ Cambio de Valores -------" << endl;
    swap(a, b);
    cout << "Valor de ahora: " << a << endl;
    cout << "Valor de ahora: " << b << endl;
    return 0;
}