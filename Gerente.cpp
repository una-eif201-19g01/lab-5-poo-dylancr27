



#include"Gerente.h"

Gerente::Gerente() {
}

Gerente::Gerente(std::string id, int horasLab, float precioHora, int annosLaborados, float bono) :
	Trabajador(id, horasLab, precioHora, annosLaborados), bono(bono) {
}

Gerente::~Gerente() {
}
void Gerente::setBono(float bono) {
	bono = bono;
}

float Gerente::getBono() {
	return bono;
}

virtual float Gerente::calcularSalarioBase(){
	int salario = Trabajador::precioHora();
	return salario * 48;
}

virtual float Gerente::calcularHorasExtra(){
	float horaExtra = Trabajador::horasLab();
	return horaExtra * 0.5;
}

virtual float Gerente::calcularAnualidades(){
	float salaBase=calcularSalarioBase();
	float anualidad = Trabajador::annosLaborados()*0.05;
	return salaBase*anualidad;
}

virtual float Gerente::calcularSalarioBruto(){
	float salaBase = calcularSalarioBase();
	float horaExtra = calcularHorasExtra();
	float anualidad = calcularAnualidades();
	return salaBase + horaExtra + anualidad;
}

virtual float Gerente::calcularCargas(){
	float sueldoBruto = calcularSalarioBruto()*0.09;
	return calcularSalarioBruto()-sueldoBruto;
}

virtual float Gerente::calcularSalarioNeto(){
	float salaBruto= calcularSalarioBruto();
	float cargas= calcularCargas();
	return  salaBruto + cargas;
}
std::string Gerente::toString(){
	std::string reporte=Trabajador::toString();
	reporte=reporte+"\n"+"Bono: "+std::to_string(getBono())+"\n";
	return reporte;
}
