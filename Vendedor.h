/* 
* File:   Vendedor.h
* Author: Dylan Molina Obando
*
* 
*/

#ifndef VENDEDOR_H
#define VENDEDOR_H
#include <iostream>
#include "Trabajador.h"
#include <string>

class Vendedor: public Trabajador {
	
private:
	float comision;
	int ventas;
	
public:
	Vendedor();
	Vendedor(std::string, int, float, int, float, int);
	~Vendedor();
	void setComision(float);
	float getComision();
	void setVentas(int);
	int getVentas();
	float calcularSalarioBase();
	float calcularHorasExtra();
	float calcularAnualidades();
	float calcularSalariobruto();
	float calcularCargas();
	float calcularSalarioNeto();
	std::string toString();
	
	
};


#endif /* VENDEDOR_H */
