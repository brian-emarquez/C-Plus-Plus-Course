#pragma once
#include<iostream>
#include "Header.h"

class Circle {

private:

    double radius;

public:

    double compute_area()
    {
        return 3.14 * radius * radius;
    }

    /*Oteniendo acceso*/
    /*setter*/

    int getradius() {
        return radius;
    }

    void setradius(double _radius) {
        radius = _radius;
    }

    

};
