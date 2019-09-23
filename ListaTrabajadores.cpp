#include <sstream>
#include "ListaTrabajadores.h"

ListaTrabajadores::ListaTrabajadores() {
	primero = nullptr;
	actual = nullptr;
}

ListaTrabajadores::~ListaTrabajadores() {
	while (primero != nullptr) {
		actual = primero;
		primero = primero->getSiguiente();
		delete(actual);
	}
}

void ListaTrabajadores::insertarInicio(const Trabajador& _trabajador) {
	actual = new Nodo(_trabajador, nullptr);
	if (primero == nullptr) {
		primero = actual;
	}
	else {
		actual->setSiguiente(primero);
		primero = actual;
	}
}

void ListaTrabajadores::insertarFinal(const Trabajador& _trabajador) {
	actual = primero;
	if (primero == nullptr) {
		primero = new Nodo(_trabajador, nullptr);
	}
	else {
		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(new Nodo(_trabajador, nullptr));
	}
}

bool ListaTrabajadores::eliminarInicio() {
	if (primero == nullptr) {
		return false;
	}
	else {
		actual = primero;
		primero = primero->getSiguiente();
		delete actual;
		return true;
	}
}

int ListaTrabajadores::totalNodos() {
	int totalNodos = 0;
	actual = primero;
	
	while (actual != nullptr) {
		totalNodos++;
		actual = actual->getSiguiente();
	}
	
	return totalNodos;
}

bool ListaTrabajadores::listaVacia() {
	return primero == nullptr;
}

std::string ListaTrabajadores::toString() {
	std::string resultado;
	actual = primero;
	
	while (actual != nullptr) {
		resultado += actual->toString();
		actual = actual->getSiguiente();
	}
	
	return resultado;
}

Nodo* ListaTrabajadores::getPrimero() const {
	return primero;
}

void ListaTrabajadores::setPrimero(Nodo* primero) {
	ListaTrabajadores::primero = primero;
}

Nodo* ListaTrabajadores::getActual() const {
	return actual;
}

void ListaTrabajadores::setActual(Nodo* actual) {
	ListaTrabajadores::actual = actual;
}
