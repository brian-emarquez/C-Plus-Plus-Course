#pragma once
#include<iostream>
using namespace std;

struct Promedio {
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno {
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
}alumno1;
