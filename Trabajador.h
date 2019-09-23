/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/* 
* File:   Trabajador.h
* Author: Dylan Molina
*
* 
*/

#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <iostream>

#include <string>

class Trabajador {
	
private:
	std::string id;
	int horasLab;
	float precioHora;
	int annosLaborados;
	
public:
	Trabajador();
	Trabajador(std::string, int, float, int);
	void setId(std::string);
	std::string getId();
	void setHorasLab(int);
	int getHorasLab();
	void setPrecioHora(float);
	float getPrecioHora();
	void setAnnosLaborados(int);
	int getAnnosLaborados();
	virtual ~Trabajador();
	virtual float calcularSalarioBase();
	virtual float calcularHorasExtra();
	virtual float calcularAnualidades();
	virtual float calcularSalarioBruto();
	virtual float calcularCargas();
	virtual float calcularSalarioNeto();
	virtual std::string toString();
};



#endif /* TRABAJADOR_H */
