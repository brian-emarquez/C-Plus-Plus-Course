#include<iostream>

using namespace std;
int main()
{
    float n1 = 0;
    float n2 = 0;
    float resultado = 0;

    cout<<"Ingrese el numero para A: "; cin>>n1;
    cout<<"Ingrese el numero para B: "; cin>>n2;

    resultado = (n1/n2)+1;
    cout<<"El resultado es: "<<resultado;
    return 0;
}