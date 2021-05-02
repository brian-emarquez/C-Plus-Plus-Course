#pragma once
#include <iostream>
#include<conio.h>

using namespace std;

class Parent
{
protected:
    int id_protected;
};

class Child : public Parent
{

public:
    void setId(int id)
    {
        id_protected = id;
    }

    void displayId()
    {
        cout << "id_protected is: " << id_protected << endl;
    }
};
