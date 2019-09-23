/* 
* File:   Gerente.h
* Author: Dylan Molina Obando
*
* Created on 20 de septiembre de 2019, 22:11
*/

#ifndef GERENTE_H
#define GERENTE_H
#include <iostream>
#include "Trabajador.h"
#include <string>

class Gerente : public Trabajador{
	
	
private:
	float bono;
	
public:
	
	Gerente();
	Gerente(std::string,int, float,int, float);
	~Gerente();
	float calcularSalarioBase();
	float calcularHorasExtra();
	float calcularAnualidades();
	float calcularSalariobruto();
	float calcularCargas();
	float calcularSalarioNeto();
	std::string toString();
	void setBono(float);
	float getBono();
};


#endif /* GERENTE_H */
