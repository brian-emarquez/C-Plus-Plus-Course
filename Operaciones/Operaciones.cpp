/* Operaciones Matematicas Basicas*/

#include <iostream>

using namespace std;

int main(){
    int n1;
    int n2;
    int suma = 0;
    int resta = 0;
    int multiplicacion = 0;
    int division = 0;

    cout<<"Digite un numero: "; cin>>n1;
    cout<<"Digite otro numero: "; cin>>n2;

    suma = n1+n2;
    resta = n1-n2;
    multiplicacion = n1*n2;
    division = n1/n2;
    
    cout<<"La suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
    cout<<"La division es: "<<division<<endl;

    return 0;
}

