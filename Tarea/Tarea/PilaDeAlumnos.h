#pragma once
#include "Nodo.h"

class PilaDeAlumnos
{
private:
	Nodo* Cabeza;

public:
	PilaDeAlumnos();
	void Push(Alumno& const alumno);
	Alumno Pop();
	Alumno Peek();
	bool ListaVacia();
};

