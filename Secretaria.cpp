/*
* =====================================================================================
*
* Filename: Secretaria.cpp
*
* Description : Definicion de clase Vendedor
*
* Created : 2019 - 09 - 13
*
*Author: Dylan Molina Obando
* Organization : Universidad Nacional de Costa Rica
*
*==================================================================================== =
*/

#include "Secretaria.h"
#include "Trabajador.h"

Secretaria::Secretaria(){
	
}

Secretaria::Secretaria(std::string id, int horasLab, float precioHora, int annosLaborados) :
	Trabajador(id, horasLab, precioHora, annosLaborados) {
}

Secretaria::~Secretaria() {
}

virtual float Secretaria::calcularSalarioBase(){
	int salario = Trabajador::precioHora();
	return salario * 48;
}

virtual float Secretaria::calcularHorasExtra(){
	float horaExtra = Trabajador::horasLab();
	return horaExtra * 0.5;
}

virtual float Secretaria::calcularAnualidades(){
	float salaBase=calcularSalarioBase();
	float anualidad = Trabajador::annosLaborados()*0.05;
	return salaBase*anualidad;
}

virtual float Secretaria::calcularSalarioBruto(){
	float salaBase = calcularSalarioBase();
	float horaExtra = calcularHorasExtra();
	float anualidad = calcularAnualidades();
	return salaBase + horaExtra + anualidad;
}

virtual float Secretaria::calcularCargas(){
	float sueldoBruto = calcularSalarioBruto()*0.09;
	return calcularSalarioBruto()-sueldoBruto;
}

virtual float Secretaria::calcularSalarioNeto(){
	float salaBruto= calcularSalarioBruto();
	float cargas= calcularCargas();
	return  salaBruto + cargas;
}

std::string Secretaria::toString(){
	std::string reporte=Trabajador::toString();
	return reporte;
}
