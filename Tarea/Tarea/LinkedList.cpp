#include "LinkedList.h"

LinkedList::LinkedList() :
	Cabeza(nullptr){
}

void LinkedList::InsertarInicio(const Alumno& alumno) {
	Nodo* nuevonodo = new Nodo(alumno);
	if (ListaVacia())
		Cabeza = nuevonodo;
	else {
		nuevonodo->Siguiente = Cabeza;
		Cabeza = nuevonodo;
	}
}

void LinkedList::RemoverPrimero(const Alumno& alumno) {
	if (ListaVacia())
		throw ListaVaciaExeption{};
	Alumno resultado = Cabeza->Valor;
	Cabeza = Cabeza->Siguiente;
	return resultado;
}

std::string LinkedList::VerPrimero() {
	if (ListaVacia())
		throw ListaVaciaException{};
	return Cabeza->Valor;
}

bool LinkedList::ListaVacia() const {
	return Cabeza == nullptr;
}

Nodo::Nodo() :Siguiente(nullptr) {
}

Nodo::Nodo(const Alumno& alumno) :Siguiente(nullptr), Valor(alumno) {
}