#pragma once
#include<iostream>
#include "PublicHeader.h"

class Circle
{
public:
    double radius;

    double  compute_area()
    {
        return 3.14 * radius * radius;
    }

};