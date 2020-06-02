/*operaciones*/
#include <iostream>
using namespace std;

int main()
{
 float x,y,s,r,p,d;
 cout<<"\n ingrese numero x:";
 cin>>x;
 cout<<"\n ingrese numero y:";
 cin>>y;
 
 s=x+y;
 r=x-y;
 p=x*y;
 d=x/y;
 cout<<x<<"+"<<y<<"="<<s;
 cout<<"\n"<<x<<"-"<<y<<"="<<r;
 cout<<"\n"<<x<<"*"<<y<<"="<<p;
 cout<<"\n"<<x<<"/"<<y<<"="<<d;
  return 0;
}
