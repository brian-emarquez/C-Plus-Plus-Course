// private

#include<iostream>
using namespace std;

class Circle{

private:

    double radius;

public:

   double compute_area()
    {
        return 3.14 * radius * radius;
    }

    /*Oteniendo acceso*/
    /*setter*/
    //void setradius(double _radius) {
    //    radius = _radius;
    //}

    //int getradius() {
    //    return radius;
    //}

};


// main function
int main()
{
    Circle obj;

    obj.radius(1.5);
    /*obj.setradius (1.5);*/

    cout << "Area is:" << obj.compute_area();
    return 0;
}