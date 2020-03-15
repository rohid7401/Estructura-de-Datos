#pragma once
#include "Alumno.h"
#include "Nodo.h"
#include <string>
#include "ListaVaciaException.h"

class LinkedList
{
private:
	Nodo* Cabeza;

public:
	LinkedList();
	void InsertarInicio(const Alumno& alumnos);
	void RemoverPrimero(const Alumno& alumnos);
	std::string VerPrimero();
	bool ListaVacia() const;
};
