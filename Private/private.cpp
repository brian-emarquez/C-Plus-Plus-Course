// private

#include<iostream>
#include "Header.h"
using namespace std;



// main function
int main()
{
    Circle obj;

    obj.radius(1.5);
    /*obj.setradius (1.5);*/

    cout << "Area is:" << obj.compute_area();
    return 0;
}