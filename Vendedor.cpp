/*
* =====================================================================================
*
* Filename: Vendedor.cpp
*
* Description: Definicion de clase Vendedor
*
* Created: 2019-09-13
*
* Author: Dylan Molina Obando
* Organization: Universidad Nacional de Costa Rica
*
* =====================================================================================
*/

#include "Vendedor.h"

Vendedor::Vendedor() {}
Vendedor::Vendedor(std::string id, int horasLab, float precioHora, int annosLaborados, float comision, int ventas) :
	Trabajador(id, horasLab, precioHora, annosLaborados), comision(comision), ventas(ventas) {
}

Vendedor::~Vendedor() {
}

void Vendedor::setComision(float comision){
	comision = comision;
}
float Vendedor::getComision() {
	return comision;
}
void Vendedor::setVentas(int ventas) {
	ventas = ventas;
}
int Vendedor::getVentas() {
	return ventas;
}

virtual float Vendedor::calcularSalarioBase(){
	int salario = Trabajador::precioHora();
	return salario * 48;
}

virtual float Vendedor::calcularHorasExtra(){
	float horaExtra = Trabajador::horasLab();
	return horaExtra * 0.5;
}

virtual float Vendedor::calcularAnualidades(){
	float salaBase=calcularSalarioBase();
	float anualidad = Trabajador::annosLaborados()*0.05;
	return salaBase*anualidad;
}

virtual float Vendedor::calcularSalarioBruto(){
	float salaBase = calcularSalarioBase();
	float horaExtra = calcularHorasExtra();
	float anualidad = calcularAnualidades();
	return salaBase + horaExtra + anualidad;
}

virtual float Vendedor::calcularCargas(){
	float sueldoBruto = calcularSalarioBruto()*0.09;
	return calcularSalarioBruto()-sueldoBruto;
}

virtual float Vendedor::calcularSalarioNeto(){
	float salaBruto= calcularSalarioBruto();
	float cargas= calcularCargas();
	return  salaBruto + cargas;
}
std::string Vendedor::toString(){
	std::string reporte=Trabajador::toString();
	reporte=reporte+"\n"+
		"Comision: "+std::to_string(getComision())+"\n"+
		"Ventas: "+std::to_string(getVentas())+"\n";
	return reporte;
}

