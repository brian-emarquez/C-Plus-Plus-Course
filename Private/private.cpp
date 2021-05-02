// private

#include<iostream>
using namespace std;

class Circle
{
    double radius;

public:
    double  compute_area()
    {   
        return 3.14 * radius * radius;
    }

};

// main function
int main()
{
    Circle obj;

    obj.radius = 1.5;

    cout << "Area is:" << obj.compute_area();
    return 0;
}