#include<iostream>
using namespace std;

int main(){

    float a,b,c,d,e,f, resultado = 0;

    cout<<"Ingrese el numero A: ";cin>>a;
    cout<<"Ingrese el numero B: ";cin>>b;
    cout<<"Ingrese el numero C: ";cin>>c;
    cout<<"Ingrese el numero D: ";cin>>d;
    cout<<"Ingrese el numero E: ";cin>>e;
    cout<<"Ingrese el numero F: ";cin>>f;

    resultado = (a+(b/c))/(d+(e/f));

    cout<<"El resuldo es : "<<resultado<<endl;
    return 0;
}