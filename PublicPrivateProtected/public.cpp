// Public

#include<iostream>
#include "PublicHeader.h"

using namespace std;


int main()
{
    Circle obj;

    obj.radius = 5.5;

    cout << "Radius is: " << obj.radius << "\n";
    cout << "Area is: " << obj.compute_area();
    return 0;
}