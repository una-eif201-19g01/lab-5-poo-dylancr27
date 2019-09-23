/*
* =====================================================================================
*
* Filename: Trabajador.cpp
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

#include "Trabajador.h"

Trabajador::Trabajador() {}

Trabajador::Trabajador(std::string id, int horasLab, float precioHora, int annosLaborados) :
	id(id), horasLab(horasLab), precioHora(precioHora), annosLaborados(annosLaborados) {
}



Trabajador::~Trabajador() {
}



void Trabajador::setId(std::string annosLaborados) {
	annosLaborados = annosLaborados;
}

std::string Trabajador::getId() {
	return id;
}

void Trabajador::setHorasLab(int horasLab) {
	horasLab = horasLab;
}

int Trabajador::getHorasLab() {
	return horasLab;
}

void Trabajador::setPrecioHora(float precioHora) {
	precioHora = precioHora;
}

float Trabajador::getPrecioHora() {
	return precioHora;
}

void Trabajador::setAnnosLaborados(int annosLaborados) {
	annosLaborados = annosLaborados;
}

int Trabajador::getAnnosLaborados() {
	return annosLaborados;
}

virtual float Trabajador::calcularSalarioBase(){
	int salario = precioHora;
	return salario * 48;
}

virtual float Trabajador::calcularHorasExtra(){
	float horaExtra = horasLab;
	return horaExtra * 0.5;
}

virtual float Trabajador::calcularAnualidades(){
	float salaBase=calcularSalarioBase();
	float anualidad = annosLaborados*0.05;
	return salaBase*anualidad;
}

virtual float Trabajador::calcularSalarioBruto(){
	float salaBase = calcularSalarioBase();
	float horaExtra = calcularHorasExtra();
	float anualidad = calcularAnualidades();
	return salaBase + horaExtra + anualidad;
}

virtual float Trabajador::calcularCargas(){
	float sueldoBruto = calcularSalarioBruto()*0.09;
	return calcularSalarioBruto()-sueldoBruto;
}

virtual float Trabajador::calcularSalarioNeto(){
	float salaBruto= calcularSalarioBruto();
	float cargas= calcularCargas();
	return  salaBruto + cargas;
}

std::string Trabajador::toString(){
	std::string reporte;
	reporte= reporte+"Datos del Trabajador: \n"+ "Identificacion: "+id+"\n"+
		"Horas Laboradas: "+std::to_string(getHorasLab())+"\n"+
		"Precio por Horas: "+std::to_string(getPrecioHora())+"\n"+
		"Anios Laborados: "+std::to_string(getAnnosLaborados())+"\n";
	return reporte;
}

