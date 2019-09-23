/* 
* File:   Secretaria.h
* Author: Dylan Molina Obando
*
* 
*/

#ifndef SECRETARIA_H
#define SECRETARIA_H
#include "Trabajador.h"

class Secretaria:public Trabajador {
	
	
public:
	
	Secretaria();
	Secretaria(std::string,int,float,int);
	~Secretaria();
	virtual float calcularSalarioBase();
	virtual float calcularHorasExtra();
	virtual float calcularAnualidades();
	virtual float calcularSalarioBruto();
	virtual float calcularCargas();
	virtual float calcularSalarioNeto();
	std::string toString();
};


#endif /* SECRETARIA_H */
