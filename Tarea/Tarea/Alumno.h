#pragma once
#include <string>


class Alumno
{
private:
	std::string Nombre, Apellido;

public:
	Alumno();
	Alumno(std::string nombre, std::string apellido);
	std::string GetNombre() const;
	void SetNombre(std::string nombre);
	std::string GetApellido() const;
	void SetApellido(std::string apellido);
};

