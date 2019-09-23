/* 
* File:   ListaTrabajadores.h
* Author: Dylan Molina Obando
*
* 
*/

#ifndef LISTATRABAJADORES_H
#define LISTATRABAJADORES_H

#include <ostream>
#include "Nodo.h"

class ListaTrabajadores {
	Nodo* primero;
	Nodo* actual;
	
public:
	ListaTrabajadores();
	
	virtual ~ListaTrabajadores();
	
	void insertarInicio(const Trabajador& _trabajador);
	void insertarFinal(const Trabajador& _trabajador);
	bool eliminarInicio();
	int totalNodos();
	bool listaVacia();
	
	Nodo* getPrimero() const;
	
	void setPrimero(Nodo* primero);
	
	Nodo* getActual() const;
	
	void setActual(Nodo* actual);
	
	std::string toString();
};


#endif /* LISTATRABAJADORES_H */
