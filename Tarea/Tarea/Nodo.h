#pragma once
#include "Alumno.h"

class Nodo
{
public:
	Nodo* Siguiente;
	Alumno Valor;
	Nodo();
	Nodo(const Alumno& alumno);

};

