#pragma once
#include<iostream>

struct info_direccion {
	char direccion[30];
	char cuidad[20];
	char provincia[20];
};

struct empleado {
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];
