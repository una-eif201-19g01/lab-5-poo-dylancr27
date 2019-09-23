/* 
* File:   Main.cpp
* Author: Dylan Molina Obando
*
* 
*/
#include <iostream>
#include"Secretaria.h"
#include "Vendedor.h"
#include "Gerente.h"
#include "Trabajador.h"

using std::cout;
int main() {
	Trabajador* contenedor[3];
	Trabajador *trabajador1=new Secretaria("001",86,1150.50,3);
	Trabajador *trabajador2 = new Vendedor("002",90,1300.32,4,0.15,20);
	Trabajador *trabajador3 = new Gerente("003",120,1750.68,8,20000);
	contenedor[0]= trabajador1;
	contenedor[1]= trabajador2;
	contenedor[2]= trabajador3;
	for(int contador=0;contador<3;contador++){
		cout<<contenedor[contador]->toString();
	}
	
	
	std::cin.get();
}

