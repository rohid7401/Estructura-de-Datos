#pragma once
#include "Alumno.h"


Alumno::Alumno() :Nombre(""), Apellido(""){
}


Alumno::Alumno(std::string nombre, std::string apellido):
	Nombre(nombre), Apellido(apellido){
}

std::string Alumno::GetNombre() const {
	return Nombre;
}

void Alumno::SetNombre(std::string nombre) {
	Nombre = nombre;
}

std::string Alumno::GetApellido() const {
	return Apellido;
}

void Alumno::SetApellido(std::string apellido) {
	Apellido = apellido;
}