#include<iostream>

using namespace std;

int main(){

    int a,b,aux;

    cout<<"Ingrese numero para Y: ";cin>>a;
    cout<<"Ingrese numero para Z: ";cin>>b;
    
    aux = a;
    a = b;
    b = aux;

    cout<<"El valor para Y es: "<< a <<endl;
    cout<<"El valor para Z es: "<< b <<endl;
    return 0;
}