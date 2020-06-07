/* Operaciones Matematicas Basicas*/

#include<iostream>
using namespace std;

int main(){

    /*int n1 = 0;
    int n2 = 0;
    int suma;
    int resta;
    int multiplicacion;
    int division;
    float potencia;*/

    int n1, n2, suma, resta, multiplicacion, division, potencia = 0;
    
    cout<<"Operaciones Materimaticas\n";

    cout<<"Ingrese un numero: ";cin>>n1;
    cout<<"Ingrese un numero: ";cin>>n2;

    suma = n1+n2;
    resta = n1-n2;
    multiplicacion = n1*n2;
    division = n1/n2;
    potencia = n1^n2;

    cout<<"\nla Suma es: "<<suma<<endl;
    cout<<"la Resta es: "<<resta<<endl;
    cout<<"la multiplicacion es: "<<multiplicacion<<endl;
    cout<<"la Division es: "<<division<<endl;
    cout<<"la Potencia es: "<<potencia<<endl;

    return 0;
}








