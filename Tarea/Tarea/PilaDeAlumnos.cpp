#include "PilaDeAlumnos.h"
#include "LinkedList.h"


PilaDeAlumnos::PilaDeAlumnos()
{
	ListaAlumnos = new LinkedList();
}

void PilaDeAlumnos::Push(Alumno& const alumno)
{
	ListaAlumnos->InsertarInicio(alumno);
}

Alumno PilaDeAlumnos::Pop()
{
	return ListaAlumnos->RemoverPrimero();
}

Alumno PilaDeAlumnos::Peek()
{
	return ListaAlumnos->VerPrimero();
}

bool PilaDeAlumnos::ListaVacia()
{
	return ListaAlumnos->ListaVacia();
}
